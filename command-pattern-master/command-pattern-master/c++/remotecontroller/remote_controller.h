/*
 * remote_controller.h
 *
 *  Created on: Nov 15, 2017
 *      Author: ramiz
 */

#ifndef REMOTE_CONTROLLER_H_
#define REMOTE_CONTROLLER_H_

#include <vector>
#include "button.h"
#include "commands/move_robot_command.h"
#include "commands/turn_robot_command.h"
#include "commands/beep_robot_command.h"
#include "../sdk/irobot.h"

class RemoteController {
public:
  RemoteController(IRobot* robot);
  virtual ~RemoteController();

  void MoveRobot();
  void TurnRobot();
  void BeepRobot();
  void Replay();

private:
  void AssignCommandsToButtons();
  void ChangeTargetRobot(IRobot* robot);

  IRobot* robot_;
  MoveRobotCommand move_robot_command_;
  TurnRobotCommand turn_robot_command_;
  BeepRobotCommand beep_robot_command_;

  Button move_robot_button_;
  Button turn_robot_button_;
  Button beep_robot_button_;

  //vector to maintain commands history
  std::vector<ICommand*> commands_history_;
};

#endif /* REMOTE_CONTROLLER_H_ */
