package designPattern;

import designPattern.proxy.DeliveryProxyForBicycle;
import designPattern.proxy.DeliveryProxyForCar;
import designPattern.proxy.DeliveryProxyForTruck;

public class DeliveryManager {

    public String deliveryManagerFactory(PackageInfo packageInfo){


        if(packageInfo.getSize().equals("SMALL")){
            return new DeliveryProxyForBicycle().deliveryWay(packageInfo);
        }
        if(packageInfo.getSize().equals("MEDIUM")){
            return new DeliveryProxyForCar().deliveryWay(packageInfo);
        }
        if(packageInfo.getSize().equals("LARGE")){
            return new DeliveryProxyForTruck().deliveryWay(packageInfo);
        }
        return "FAILED TO DELIVERY";
    }
}