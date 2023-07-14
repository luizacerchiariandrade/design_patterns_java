/*
 * turn_robot_command.h
 *
 *  Created on: Nov 15, 2017
 *      Author: ramiz
 */

#ifndef TURN_ROBOT_COMMAND_H_
#define TURN_ROBOT_COMMAND_H_

#include "icommand.h"
#include "../../sdk/irobot.h"

class TurnRobotCommand : public ICommand{
public:
  TurnRobotCommand(IRobot* robot, double step);
  virtual ~TurnRobotCommand();
  virtual void Execute() override;

private:
  IRobot* robot_;
  double step_;
};

#endif /* TURN_ROBOT_COMMAND_H_ */
