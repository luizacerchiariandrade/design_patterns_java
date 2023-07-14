package robotcontroller.invoker;

import robotcontroller.commands.ICommand;

/**
 * Created by ramiz on 11/15/17.
 */
public interface IButton {
    void setCommand(ICommand command);
    ICommand getCommand();
    void press();
}
