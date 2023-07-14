/*
 * beep_robot_command.cpp
 *
 *  Created on: Nov 16, 2017
 *      Author: ramiz
 */

#include "beep_robot_command.h"

BeepRobotCommand::BeepRobotCommand(IRobot* robot) {
  this->robot_ = robot;
}

BeepRobotCommand::~BeepRobotCommand() {

}

void BeepRobotCommand::Execute() {
  this->robot_->Beep();
}

