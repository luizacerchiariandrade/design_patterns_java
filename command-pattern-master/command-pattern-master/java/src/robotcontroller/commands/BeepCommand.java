package robotcontroller.commands;

import sdk.IRobot;

/**
 * Created by ramiz on 11/15/17.
 */
public class BeepCommand implements ICommand {
    private IRobot robot;

    public BeepCommand(IRobot robot) {
        this.robot = robot;
    }

    @Override
    public void execute() {
        this.robot.beepRobot();
    }
}
