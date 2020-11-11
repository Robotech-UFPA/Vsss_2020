//author  Renato Sousa, 2018
#include <QtNetwork>
#include <stdio.h>
#include "net/robocup_ssl_client.h"
#include "net/grSim_client.h"

#include "net/pb/command.pb.h"
#include "net/pb/common.pb.h"
#include "net/pb/packet.pb.h"
#include "net/pb/replacement.pb.h"

//behavior
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#define PI 3.14159265
using namespace std;
#define UDP_ADDRESS "224.5.23.2"
#define REFEREE_PORT 10003
#define REPLACER_PORT 10004

QString getFoulNameById(VSSRef::Foul foul){
    switch(foul){
        case VSSRef::Foul::FREE_BALL:    return "FREE_BALL";
        case VSSRef::Foul::FREE_KICK:    return "FREE_KICK";
        case VSSRef::Foul::GOAL_KICK:    return "GOAL_KICK";
        case VSSRef::Foul::PENALTY_KICK: return "PENALTY_KICK";
        case VSSRef::Foul::KICKOFF:      return "KICKOFF";
        case VSSRef::Foul::STOP:         return "STOP";
        case VSSRef::Foul::GAME_ON:      return "GAME_ON";
        default:                         return "FOUL NOT IDENTIFIED";
    }
}

QString getTeamColorNameById(VSSRef::Color color){
    switch(color){
        case VSSRef::Color::NONE:    return "NONE";
        case VSSRef::Color::BLUE:    return "BLUE";
        case VSSRef::Color::YELLOW:  return "YELLOW";
        default:                     return "COLOR NOT IDENTIFIED";
    }
}

QString getQuadrantNameById(VSSRef::Quadrant quadrant){
    switch(quadrant){
        case VSSRef::Quadrant::NO_QUADRANT: return "NO QUADRANT";
        case VSSRef::Quadrant::QUADRANT_1:  return "QUADRANT 1";
        case VSSRef::Quadrant::QUADRANT_2:  return "QUADRANT 2";
        case VSSRef::Quadrant::QUADRANT_3:  return "QUADRANT 3";
        case VSSRef::Quadrant::QUADRANT_4:  return "QUADRANT 4";
        default:                            return "QUADRANT NOT IDENTIFIED";
    }
}

QString getHalfNameById(VSSRef::Half half){
    switch(half){
        case VSSRef::Half::NO_HALF: return "NO_HALF";
        case VSSRef::Half::FIRST_HALF: return "FIRST HALF";
        case VSSRef::Half::SECOND_HALF: return "SECOND HALF";
        default: return "NO HALF DEFINED";
    }
}

std::string behaviour(int robotId, float enemy_X_Y[3][7], float ally_X_Y[3][7]){
    /****************************************
     *  Behaviour tree
     **********************************************************************/
    bool iAmAttacker;
    bool iHaveBallPossession;
    bool enemyHaveBallPossession;
    bool noOneHaveBallPossession;
    bool allyHaveBallPossession;
    int allyid;
    bool behindEnemy;
    bool ballclose;
    double dball = ally_X_Y[robotId][2];
    const float min_dist = 9.5;
    int dball_offset = 0;
    int enemy_with_ball = 0;
    std::string Output;

    // Attacker or Keeper
     if(robotId == 2){
         iAmAttacker = false;
     }else{
        iAmAttacker = true;
     }

    //verify if have robot the ball
     if(dball <= min_dist ){
         iHaveBallPossession = true;
     }else{
        iHaveBallPossession = false;
     }

     //verify if enemys have the ball
     if( (enemy_X_Y[0][2] <= min_dist)){
         enemyHaveBallPossession = true;
         enemy_with_ball = 0;
     }else if((enemy_X_Y[1][2] <= min_dist)){
        enemyHaveBallPossession = true;
        enemy_with_ball = 1;
     }else if((enemy_X_Y[2][2] <= min_dist)){
        enemyHaveBallPossession = true;
        enemy_with_ball = 2;
     }
     else{
        enemyHaveBallPossession = false;
     }

     //verify if ally have the ball
     if (iAmAttacker){
        allyid = abs(robotId - 1);
     if( (ally_X_Y[allyid][2] <= min_dist)||(ally_X_Y[2][2] <= min_dist) ){
         allyHaveBallPossession = true;
     }else{
        allyHaveBallPossession = false;
     }
     }else{
         if( (ally_X_Y[0][2] <= min_dist)||(ally_X_Y[1][2] <= min_dist) ){
             allyHaveBallPossession = true;
         }else{
            allyHaveBallPossession = false;
         }
     }


     //verify if no one have the ball
     if( enemyHaveBallPossession||iHaveBallPossession||allyHaveBallPossession ){
         noOneHaveBallPossession = false;
     }else{
        noOneHaveBallPossession = true;
     }
    if(enemyHaveBallPossession){
     if(((ally_X_Y[robotId][0]) > (enemy_X_Y[enemy_with_ball][0]))){
        behindEnemy = true;
     }else{
         behindEnemy =false;
     }}

     //verify if the ball is close
     if (iAmAttacker){
        dball_offset = 5;
     }else{
         dball_offset = 62;
     }
      if(dball <= min_dist + dball_offset ){
          ballclose = true;
      }else{
         ballclose = false;
      }


      if(iAmAttacker){
          if(iHaveBallPossession){
             //printf("%i é atacante e tem posse da bola então deve ATACAR\n",robotId);
              Output = "atacar";
              //commandClient.sendCommand(10, 10, my_robots_are_yellow, i);
          }

          if(enemyHaveBallPossession){
              if(behindEnemy){
                  //printf("%i é atacante, inimigo possui a bola, está atrás do inimigo, então deve VOLTAR PRA AREA\n",robotId);
                  Output = "voltar";
              }else{
                 //printf("%i é atacante, inimigo possui a bola, está na frente do inimigo, então deve DEFENDER\n",robotId);
                 Output = "defender";
              }
          }

          if(noOneHaveBallPossession){
              //printf("%i é atacante, ninguem tem posse da bola então deve ATACAR\n",robotId);
              Output = "atacar";
              //cout << dball <<endl;
              //commandClient.sendCommand(10, 10, my_robots_are_yellow, i);
          }

          if(allyHaveBallPossession){
             //printf("%i é atacante, aliado tem posse da bola então deve IR PRA PERTO PARA DEFENDER\n",robotId);
             Output = "acompanhar";
          }
      } else {

          if(ballclose){

                  if(dball <= min_dist + 5){
                      // TO-DO checar se está na direita ou esquerda
                      //printf("%i é goleiro, bola muito perto, então deve RODAR PRA EMPURRAR A BOLA\n",robotId);
                      Output = "girar";
                      //commandClient.sendCommand(10, 50, my_robots_are_yellow, i);
                  }else{
                     //printf("%i é goleiro, bola esta perto, deve SEGUIR A BOLA\n",robotId);
                     Output = "seguir";
                  }
          }else{
              //printf("%i é goleiro, bola esta longe, ESPERAR NO CENTRO DA AREA\n",robotId);
              Output = "esperar";
          }

      }
   //printf("%2d %2d %2d %2d %2d %2d %2d %2f \n",iAmAttacker, iHaveBallPossession, enemyHaveBallPossession, noOneHaveBallPossession, allyHaveBallPossession, behindEnemy, ballclose, dball);
    //PositionStatus* positionStatus = new PositionStatus {iAmAttacker, iHaveBallPossession, enemyHaveBallPossession, noOneHaveBallPossession, allyHaveBallPossession, behindEnemy, ballclose, dball};
      return Output;

}

void printRobotInfo(const fira_message::Robot & robot) {

    printf("ID=%3d \n",robot.robot_id());

    printf(" POS=<%9.2f,%9.2f> \n",robot.x(),robot.y());
    printf(" VEL=<%9.2f,%9.2f> \n",robot.vx(),robot.vy());

    printf("ANGLE=%6.3f \n",robot.orientation());
    printf("ANGLE VEL=%6.3f \n",robot.vorientation());
}


int main(int argc, char *argv[]){

    QCoreApplication a(argc, argv);

    //define your team color here
    std::string input = argv[1];
    std::string ipVisao = argv[2];

    // the ip address need to be in the range 224.0.0.0 through 239.255.255.255
    RoboCupSSLClient visionClient(ipVisao, 10002);
    visionClient.open(false);

    GrSim_Client commandClient("127.0.0.1", 20011);

    QUdpSocket *replacerSocket = new QUdpSocket();
    QUdpSocket *refereeClient = new QUdpSocket();

    // Performing connection to send Replacer commands
    if(replacerSocket->isOpen())
        replacerSocket->close();

    replacerSocket->connectToHost(UDP_ADDRESS, REPLACER_PORT, QIODevice::WriteOnly, QAbstractSocket::IPv4Protocol);
    std::cout << "[Example] Connected to REPLACER socket in port " << REPLACER_PORT << " and address = " << UDP_ADDRESS << ".\n";

    // Perfoming connection to receive Referee commands
    // binding port
    if(refereeClient->bind(QHostAddress::AnyIPv4, REFEREE_PORT, QUdpSocket::ShareAddress) == false){
        std::cout << "[ERROR] Failed to bind referee client =(" << std::endl;
        exit(-1);
    }
    // connecting to multicast group in UDP_ADDRESS
    if(refereeClient->joinMulticastGroup(QHostAddress(UDP_ADDRESS)) == false){
        std::cout << "[ERROR] Failed to join VSSReferee multicast group =(" << std::endl;
        exit(-1);
    }

    std::cout << "[Example] Connected to REFEREE socket in port " << REFEREE_PORT << " and address = " << UDP_ADDRESS << ".\n";

    fira_message::sim_to_ref::Environment packet;

    float yellow_X_Y[3][7] = {};
    float blue_X_Y[3][7] = {};
    std::string apito, quadrante, tempo;
    bool my_robots_are_yellow = true;
    if (input == "yellow"){
        my_robots_are_yellow = true;}
    else if (input == "blue"){
        my_robots_are_yellow = false;}
    float place_x, place_y, goleiro_x, goleiro_y, atack_x, atack_y;

    while(true) {
        float fixo = 13, suave = 11, grave =11;
        float movel, dball;
        VSSRef::ref_to_team::VSSRef_Command command;
        char *buffer = new char[65535];
        long long int packetLength = 0;


        while(refereeClient->hasPendingDatagrams()){
            // Parse message to protobuf
            packetLength = refereeClient->readDatagram(buffer, 65535);
            if(command.ParseFromArray(buffer, int(packetLength)) == false){
                std::cout << "[ERROR] Referee command parsing error =(" << std::endl;
                exit(-1);
            }

            // If received command, let's debug it
            apito = getFoulNameById(command.foul()).toStdString();
            quadrante = getQuadrantNameById(command.foulquadrant()).toStdString();
            tempo = getHalfNameById(command.gamehalf()).toStdString();

        }

        delete [] buffer;
        //if(received) break;

        if (apito != "GAME_ON"){
            commandClient.sendCommand(0,0, my_robots_are_yellow, 0);
            commandClient.sendCommand(0,0, my_robots_are_yellow, 1);
            commandClient.sendCommand(0,0, my_robots_are_yellow, 2);
        }

        if (apito == "KICKOFF"){
            // Showing half
            VSSRef::team_to_ref::VSSRef_Placement placementCommand;
            VSSRef::Frame *placementFrame = new VSSRef::Frame();
            if (my_robots_are_yellow){
                placementFrame->set_teamcolor(VSSRef::Color::YELLOW);
                place_x = 0.4;
                place_y = -0.3;
                goleiro_x = 0.71;
                goleiro_y = 0;
                atack_x = 0.20;
                atack_y= 0;
            }
            else{
                placementFrame->set_teamcolor(VSSRef::Color::BLUE);
                place_x = -0.4;
                place_y = 0.3;
                goleiro_x = -0.71;
                goleiro_y = 0;
                atack_x = -0.20;
                atack_y= 0;
            }
            for(int x = 0; x < 3; x++){
                VSSRef::Robot *robot = placementFrame->add_robots();
                robot->set_robot_id(static_cast<uint32_t>(x));
                if (x==0){
                    robot->set_x(goleiro_x);
                    robot->set_y(goleiro_y);
                    robot->set_orientation(0.0);
                }else if(x==1){
                    robot->set_x(atack_x);
                    robot->set_y(atack_y);
                    robot->set_orientation(0.0);
                }else{
                    robot->set_x(place_x);
                    robot->set_y(place_y);
                    robot->set_orientation(0.0);
                }
            }
            placementCommand.set_allocated_world(placementFrame);// Sending blue
            std::string msgTeam;
            placementCommand.SerializeToString(&msgTeam);
            if(replacerSocket->write(msgTeam.c_str(), static_cast<qint64>(msgTeam.length())) == -1){
                std::cout << "[Example] Failed to write to replacer socket: " << replacerSocket->errorString().toStdString() << std::endl;
            }
        }
        //commandClient.sendCommand(10,10, false, 1);
        if (visionClient.receive(packet)) {
           //printf("-----Received Wrapper Packet-------------------------\n");
            //see if the packet contains a robot detection frame:
            if (packet.has_frame()) {
                fira_message::Frame detection = packet.frame();
                int robots_blue_n =  detection.robots_blue_size();
                int robots_yellow_n =  detection.robots_yellow_size();
                std::string estrategia_ataque, estrategia_goleiro;

                //Ball info:
                fira_message::Ball ball = detection.ball();

                //Yellow robot info in a matrix:
                for (int i = 0; i < robots_yellow_n; i++) {
                    fira_message::Robot robot = detection.robots_yellow(i);
                   yellow_X_Y[i][0] = robot.x()*100;
                   yellow_X_Y[i][1] = robot.y()*100;
                   yellow_X_Y[i][2] = sqrt(pow((ball.x()*100-robot.x()*100),2)+pow((ball.y()*100-robot.y()*100),2));
                   yellow_X_Y[i][3] = robot.orientation();
                   yellow_X_Y[i][4] = robot.vx();
                   yellow_X_Y[i][5] = robot.vy();
                   yellow_X_Y[i][6] = robot.vorientation();
                }

                //Blue robot info in a matrix:
                for (int i = 0; i < robots_blue_n; i++) {
                    fira_message::Robot robot = detection.robots_blue(i);
                   blue_X_Y[i][0] = robot.x()*100;
                   blue_X_Y[i][1] = robot.y()*100;
                   blue_X_Y[i][2] = sqrt(pow((ball.x()*100-robot.x()*100),2)+pow((ball.y()*100-robot.y()*100),2));
                   blue_X_Y[i][3] = robot.orientation();
                   blue_X_Y[i][4] = robot.vx();
                   blue_X_Y[i][5] = robot.vy();
                   blue_X_Y[i][6] = robot.orientation();
                }
                cout <<(abs(blue_X_Y[1][1] - ball.y()*100))<<endl;
                if (my_robots_are_yellow){
                    dball = yellow_X_Y[0][2];
                }
                else{
                    dball = blue_X_Y[0][2];

                }
                if (dball <= 35){
                    commandClient.sendCommand(-13,13, my_robots_are_yellow, 0);
                }
                else{
                     commandClient.sendCommand(0,0, my_robots_are_yellow, 0);
                }
                if (my_robots_are_yellow){
                    if ((abs(yellow_X_Y[1][1] - ball.y()*100)) < 25){
                        movel = suave;
                    }else{
                        movel = grave;
                    }
                    if (yellow_X_Y[1][0] >= ball.x()*100){
                        fixo = -fixo;
                        movel = -movel;
                    }
                    if (yellow_X_Y[1][2] <= 15 || (abs(yellow_X_Y[1][1] - ball.y()*100)) < 10 ){
                        commandClient.sendCommand(fixo,fixo, my_robots_are_yellow, 1);
                    }else if(yellow_X_Y[1][1] < ball.y()*100){
                        commandClient.sendCommand(fixo,fixo, my_robots_are_yellow, 1);
                        commandClient.sendCommand(movel,fixo, my_robots_are_yellow, 1);

                    }else if(yellow_X_Y[1][1] > ball.y()*100){
                        commandClient.sendCommand(fixo,fixo, my_robots_are_yellow, 1);
                        commandClient.sendCommand(fixo,movel, my_robots_are_yellow, 1);
                    }
                    fixo = 13;
                    if ((abs(yellow_X_Y[2][1] - ball.y()*100)) < 25){
                        movel = suave;
                    }else{
                        movel = grave;
                    }
                    if (yellow_X_Y[2][0] >= ball.x()*100){
                        fixo = -fixo;
                        movel = -movel;
                    }
                    if (yellow_X_Y[2][2] <= 20){
                        commandClient.sendCommand(fixo,fixo, my_robots_are_yellow, 2);
                    }else if(yellow_X_Y[2][1] < ball.y()*100){
                        commandClient.sendCommand(fixo-2,fixo-2, my_robots_are_yellow, 2);
                        commandClient.sendCommand(movel-2,fixo-2, my_robots_are_yellow, 2);

                    }else if(yellow_X_Y[2][1] > ball.y()*100){
                        commandClient.sendCommand(fixo-2,fixo-2, my_robots_are_yellow, 2);
                        commandClient.sendCommand(fixo-2,movel-2, my_robots_are_yellow, 2);

                    }
                }
                else{
                    if ((abs(blue_X_Y[1][1] - ball.y()*100)) < 25){
                        movel = suave;
                    }else{
                        movel = grave;
                    }
                    if (blue_X_Y[1][0] >= ball.x()*100){
                        fixo = -fixo;
                        movel = -movel;
                    }
                    if (blue_X_Y[1][2] <= 20){
                        commandClient.sendCommand(fixo,fixo, my_robots_are_yellow, 1);
                    }else if(blue_X_Y[1][1] < ball.y()*100){
                        commandClient.sendCommand(fixo,fixo, my_robots_are_yellow, 1);
                        commandClient.sendCommand(movel,fixo, my_robots_are_yellow, 1);

                    }else if(blue_X_Y[1][1] > ball.y()*100){
                        commandClient.sendCommand(fixo,fixo, my_robots_are_yellow, 1);
                        commandClient.sendCommand(fixo,movel, my_robots_are_yellow, 1);

                    }fixo = 13;
                    if ((abs(blue_X_Y[2][1] - ball.y()*100)) < 25){
                        movel = suave;
                    }else{
                        movel = grave;
                    }
                    if (blue_X_Y[2][0] >= ball.x()*100){
                        fixo = -fixo;
                        movel = -movel;
                    }
                    if (blue_X_Y[2][2] <= 15){
                        commandClient.sendCommand(fixo,fixo, my_robots_are_yellow, 2);
                    }else if(blue_X_Y[2][1] < ball.y()*100){
                        commandClient.sendCommand(fixo-2,fixo-2, my_robots_are_yellow, 2);
                        commandClient.sendCommand(movel-2,fixo-2, my_robots_are_yellow, 2);

                    }else if(blue_X_Y[2][1] > ball.y()*100){
                        commandClient.sendCommand(fixo-2,fixo-2, my_robots_are_yellow, 2);
                        commandClient.sendCommand(fixo-2,movel-2, my_robots_are_yellow, 2);

                    }
                }
        }
    }
}
    return 0;
}
