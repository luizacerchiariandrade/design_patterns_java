# command-pattern
A simple example of using command behavioral pattern.


## Problem Statement

You are writing software for controlling robots in a factory. The robots are provided by a third party who also provide a SDK for controlling their robots. The SDK defines:

```
interface IRobot
{
	void Move(double distance);
	void Turn(double angle);
	void Beep();
}
```

The SDK also contains a class called `Robot` which provides a concrete implementation of the `IRobot` interface. You cannot make any changes to the SDK.

A system has been designed so that factory workers can send the commands to the robots in the factory. Design a simple solution for the following problem:

Using simple classes, ensure that all commands sent to any robot by a human operator are sent to the robot that the factory worker wants to control, but also stored in memory so that they can be replayed for any number of similar robots. Consider which design pattern or patterns would allow you to do this in a simple, testable fashion.


## My Proposed Solution

Because we need to store and replay sequence of commands and I think command pattern makes perfect sense here. Command pattern encapsulate a request as an object and allows you to decouple receiver details from the invoker and also allows commands to be queued, stored, replayed or reversed.

## Architecture
I take this problem as designing a simple remote with 3  buttons to move, turn and beep the robot. These buttons can be assigned different commands dynamically and target robot for remote can be selected as desired.

Below is commands class hierarchy.

```
-- ICommand
---- MoveCommand
---- TurnCommand
---- BeepCommand
```

Below is buttons hierarchy.

```
-- IButton
---- Button
```

and finally here is remote class details.

```
class RemoteControllerRemote {
	IButton moveButton; //with MoveCommand assigned to it
	IButton turnButton; //with TurnCommand assigned to it
	IButton beepButton; //with beepCommand assigned to it
	
	IRobot targetRobot; //target robot
}
```