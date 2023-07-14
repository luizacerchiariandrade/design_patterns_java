/*
 * turn_robot_command.cpp
 *
 *  Created on: Nov 15, 2017
 *      Author: ramiz
 */

#include "turn_robot_command.h"

TurnRobotCommand::TurnRobotCommand(IRobot* robot, double step) {
  this->robot_ = robot;
  this->step_ = step;
}

TurnRobotCommand::~TurnRobotCommand() {

}

void TurnRobotCommand::Execute() {
  robot_->Turn(step_);
}

