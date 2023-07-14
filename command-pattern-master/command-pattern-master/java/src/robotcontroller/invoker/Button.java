package robotcontroller.invoker;

import robotcontroller.commands.ICommand;

/**
 * Created by ramiz on 11/15/17.
 */
public class Button implements IButton {
    private ICommand command;

    public Button(ICommand command) {
        this.command = command;
    }

    public void setCommand(ICommand command) {
        this.command = command;
    }

    public ICommand getCommand() {
        return command;
    }

    @Override
    public void press() {
        command.execute();
    }
}
