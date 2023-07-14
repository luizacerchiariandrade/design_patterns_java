/*
 * robot.cpp
 *
 *  Created on: Nov 15, 2017
 *      Author: ramiz
 */

#include <iostream>
#include <math.h>
#include "robot.h"

Robot::Robot() {
  this->current_angle_ = 0;
  this->current_robot_position_ = 0;
}

Robot::~Robot() {

}

void Robot::Move(double distance) {
  current_robot_position_ += distance;
  printf("Moved robot to position %f\n", current_robot_position_);
}

void Robot::Turn(double angle) {
  current_angle_ += angle;
  printf("Turned robot to angle %f\n", current_angle_);
}

void Robot::Beep() {
  printf("Robot beeping\n");
}

