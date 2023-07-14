//============================================================================
// Name        : CommandPattern.cpp
// Author      : Ramiz Raja
// Version     :
// Copyright   : MIT Licensed
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "../sdk/robot.h"
#include "../remotecontroller/remote_controller.h"
#include "gtest/gtest.h"

using namespace std;

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);

  Robot robot;
	RemoteController remote_controller(&robot);

	remote_controller.MoveRobot();
	remote_controller.TurnRobot();
	remote_controller.BeepRobot();

	//let's replay these commands
	std::cout << endl << "Replaying commands..." << endl << endl;
	remote_controller.Replay();

	return RUN_ALL_TESTS();
//	return 0;
}
