/*
 * IRobot.h
 *
 *  Created on: Nov 15, 2017
 *      Author: ramiz
 */

#ifndef IROBOT_H_
#define IROBOT_H_


class IRobot
{
public:
  virtual void Move(double distance) = 0;
  virtual void Turn(double angle) = 0;
  virtual void Beep() = 0;

  virtual ~IRobot() {};
};


#endif /* IROBOT_H_ */
