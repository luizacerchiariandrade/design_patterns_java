package designPattern.proxy;


import designPattern.CustomPackaging;
import designPattern.PackageInfo;
import designPattern.deliveryMethods.DeliveryByBicycle;

public class DeliveryProxyForBicycle extends DeliveryByBicycle {

    @Override
    public String deliveryWay(PackageInfo packageInfo) {
        if(packageInfo.getWeight()>5){
            return "Package Delivering By Bicycle for "+packageInfo.getSize()
                    +" and weight "+packageInfo.getWeight() +" is not possible due over-weight ";
        }
        return super.deliveryWay(packageInfo);
    }
}