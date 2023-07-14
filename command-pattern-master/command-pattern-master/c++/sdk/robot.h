/*
 * robot.h
 *
 *  Created on: Nov 15, 2017
 *      Author: ramiz
 */

#ifndef ROBOT_H_
#define ROBOT_H_

#include "irobot.h"

class Robot : public IRobot{
public:
  Robot();
  virtual ~Robot();
  virtual void Move(double distance) override;
  virtual void Turn(double angle) override;
  virtual void Beep() override;

private:
  double current_robot_position_;
  double current_angle_;
};

#endif /* ROBOT_H_ */
