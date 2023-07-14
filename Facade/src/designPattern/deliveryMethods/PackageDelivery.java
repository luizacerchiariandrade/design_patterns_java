package designPattern.deliveryMethods;

import designPattern.CustomPackaging;
import designPattern.PackageInfo;
public interface PackageDelivery {

    String deliveryWay(PackageInfo packageInfo);
}