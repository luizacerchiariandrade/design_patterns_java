package designPattern.proxy;

import designPattern.deliveryMethods.DeliveryByTruck;
import designPattern.PackageInfo;
import designPattern.deliveryMethods.DeliveryByBicycle;
public class DeliveryProxyForTruck extends DeliveryByTruck {

    @Override
    public String deliveryWay(PackageInfo packageInfo) {
        if(packageInfo.getWeight()>50){
            return "Package Delivering By Truck for "+packageInfo.getSize()
                    +" and weight "+packageInfo.getWeight()
                    +" is not possible due over-weight ";
        }
        return super.deliveryWay(packageInfo);
    }
}