package robotcontroller;

import org.jetbrains.annotations.NotNull;
import robotcontroller.commands.BeepCommand;
import robotcontroller.commands.ICommand;
import robotcontroller.commands.MoveCommand;
import robotcontroller.commands.TurnCommand;
import robotcontroller.invoker.Button;
import robotcontroller.invoker.IButton;
import sdk.IRobot;

import java.util.ArrayList;

/**
 * Created by ramiz on 11/15/17.
 */
public class RobotControllerRemote {
    @NotNull private IButton moveButton;
    @NotNull private IButton turnButton;
    @NotNull private IButton beepButton;
    @NotNull private IRobot robot;

    @NotNull
    private ArrayList<ICommand> commandsHistory = new ArrayList<>();

    public RobotControllerRemote(IRobot robot) {
        this.robot = robot;
        assignCommandsToButtons();
    }

    private void assignCommandsToButtons() {
        moveButton = new Button(new MoveCommand(this.robot, 5));
        turnButton = new Button(new TurnCommand(this.robot, 0.4));
        beepButton = new Button(new BeepCommand(this.robot));
    }

    public void changeTargetRobot(IRobot newRobot) {
        //clear history as it is no longer valid unless we
        //add methods to change target receiver in commands as well
        //which I am not going to do here
        commandsHistory.clear();
        this.robot = newRobot;

        assignCommandsToButtons();
    }

    public void move() {
        this.moveButton.press();
        commandsHistory.add(this.moveButton.getCommand());
    }

    public void turn() {
        this.turnButton.press();
        commandsHistory.add(this.turnButton.getCommand());
    }

    public void beep() {
        this.beepButton.press();
        commandsHistory.add(this.beepButton.getCommand());
    }

    public void replay() {
        for (ICommand command : commandsHistory) {
            command.execute();
        }
    }
}
