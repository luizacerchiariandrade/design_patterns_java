package robotcontroller.commands;

import sdk.IRobot;

/**
 * Created by ramiz on 11/15/17.
 */
public class TurnCommand implements ICommand {
    private IRobot robot;
    private double delta;

    public TurnCommand(IRobot robot, double delta) {
        this.robot = robot;
        this.delta = delta;
    }

    @Override
    public void execute() {
        robot.turnRobot(delta);
    }
}
