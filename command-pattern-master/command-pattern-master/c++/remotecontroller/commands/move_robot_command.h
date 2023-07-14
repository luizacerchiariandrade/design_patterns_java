/*
 * move_robot_command.h
 *
 *  Created on: Nov 15, 2017
 *      Author: ramiz
 */

#ifndef MOVE_ROBOT_COMMAND_H_
#define MOVE_ROBOT_COMMAND_H_

#include "icommand.h"
#include "../../sdk/irobot.h"

class MoveRobotCommand : public ICommand{
public:
  MoveRobotCommand(IRobot* robot, double step);
  virtual ~MoveRobotCommand();
  virtual void Execute() override;

private:
  IRobot* robot_;
  double step_;
};

#endif /* MOVE_ROBOT_COMMAND_H_ */
