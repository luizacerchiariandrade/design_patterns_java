/*
 * remote_controller.cpp
 *
 *  Created on: Nov 15, 2017
 *      Author: ramiz
 */

#include "remote_controller.h"

RemoteController::RemoteController(IRobot* robot)
  : robot_(robot), move_robot_command_(robot_, 5), turn_robot_command_(robot_, 0.4),
    beep_robot_command_(robot_), move_robot_button_(&move_robot_command_), turn_robot_button_(&turn_robot_command_),
    beep_robot_button_(&beep_robot_command_) {
//  this->robot_ = robot;

  //create commands to assign to our buttons
//  this->move_robot_command_ = MoveRobotCommand(this->robot_, 5);
//  this->turn_robot_command_ = TurnRobotCommand(this->robot_, 0.4);
//  this->beep_robot_command_ = BeepRobotCommand(this->robot_);

  //now assign each button a command
  //Notice how the button is unaware of the actual command
  //and the receiver of the command.
//  this->move_robot_button_ = Button(&move_robot_command_);
//  this->turn_robot_button_ = Button(&turn_robot_command_);
//  this->beep_robot_button_ = Button(&beep_robot_command_);
}

RemoteController::~RemoteController() {

}

void RemoteController::AssignCommandsToButtons() {
  //TODO
}

void RemoteController::ChangeTargetRobot(IRobot* robot) {
  //TODO
}

void RemoteController::MoveRobot() {
  this->move_robot_button_.Press();
  this->commands_history_.push_back(this->move_robot_button_.GetCommand());
}

void RemoteController::TurnRobot() {
  this->turn_robot_button_.Press();
  this->commands_history_.push_back(this->turn_robot_button_.GetCommand());
}

void RemoteController::BeepRobot() {
  this->beep_robot_button_.Press();
  this->commands_history_.push_back(this->beep_robot_button_.GetCommand());
}

void RemoteController::Replay() {
  for (ICommand * command : commands_history_) {
    command->Execute();
  }
}

