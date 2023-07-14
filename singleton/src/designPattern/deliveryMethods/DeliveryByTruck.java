package designPattern.deliveryMethods;


import designPattern.CustomPackaging;
import designPattern.PackageInfo;
public class DeliveryByTruck implements PackageDelivery{

    @Override
    public String deliveryWay(PackageInfo packageInfo) {
        return "Package Delivering Using Truck for "+packageInfo.getSize()
                +" and weight "+packageInfo.getWeight();
    }
}