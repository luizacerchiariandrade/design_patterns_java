package sdk;

/**
 * Created by ramiz on 11/15/17.
 */
public interface IRobot {
    void moveRobot(double step);
    void turnRobot(double angleStep);
    void beepRobot();
}
