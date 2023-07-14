package robotcontroller.commands;

import sdk.IRobot;

/**
 * Created by ramiz on 11/15/17.
 */
public class MoveCommand implements ICommand {
    private IRobot robot;
    private double step;

    public MoveCommand(IRobot robot, double step) {
        this.robot = robot;
        this.step = step;
    }

    @Override
    public void execute() {
        this.robot.moveRobot(step);
    }
}
