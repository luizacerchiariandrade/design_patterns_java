/*
 * move_robot_command.cpp
 *
 *  Created on: Nov 15, 2017
 *      Author: ramiz
 */

#include "move_robot_command.h"

MoveRobotCommand::MoveRobotCommand(IRobot* robot, double step) {
  this->robot_ = robot;
  this->step_ = step;
}

MoveRobotCommand::~MoveRobotCommand() {

}

void MoveRobotCommand::Execute() {
  this->robot_->Move(step_);
}

