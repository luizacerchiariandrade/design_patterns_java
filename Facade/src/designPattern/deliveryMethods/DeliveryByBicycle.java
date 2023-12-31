package designPattern.deliveryMethods;


import designPattern.CustomPackaging;
import designPattern.PackageInfo;

public class DeliveryByBicycle implements PackageDelivery, CustomPackaging {

    @Override
    public String deliveryWay(PackageInfo packageInfo) {
        String packaging= packaging(packageInfo.getCustomPackaging());
        return "Package Delivering Using Bicycle for "+packageInfo.getSize()
                +" and weight "+packageInfo.getWeight() +"  "+packaging;
    }

    @Override
    public String packaging(Boolean condition) {
        if(condition)
            return "with custom packaging";
        return "with no custom packaging";
    }
}