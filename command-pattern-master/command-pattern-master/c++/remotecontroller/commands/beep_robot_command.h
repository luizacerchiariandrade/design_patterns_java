/*
 * beep_robot_command.h
 *
 *  Created on: Nov 16, 2017
 *      Author: ramiz
 */

#ifndef BEEP_ROBOT_COMMAND_H_
#define BEEP_ROBOT_COMMAND_H_

#include "icommand.h"
#include "../../sdk/irobot.h"

class BeepRobotCommand : public ICommand {
public:
  BeepRobotCommand(IRobot* robot);
  virtual ~BeepRobotCommand();
  virtual void Execute() override;

private:
  IRobot* robot_;
};

#endif /* BEEP_ROBOT_COMMAND_H_ */
