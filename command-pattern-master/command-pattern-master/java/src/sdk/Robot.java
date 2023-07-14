package sdk;

/**
 * Created by ramiz on 11/15/17.
 */
public class Robot implements IRobot {
    private double currentPosition = 0.0;
    private double currentAngle = 0.0;

    @Override
    public void moveRobot(double step) {
        currentPosition += step;
        System.out.println("Moved robot to position " + currentPosition);
    }

    @Override
    public void turnRobot(double angleStep) {
        currentAngle += angleStep;
        currentAngle %= 2 * Math.PI;
        System.out.println("Turned robot to angle " + currentAngle);
    }

    @Override
    public void beepRobot() {
        System.out.println("Robot beeping");
    }
}
