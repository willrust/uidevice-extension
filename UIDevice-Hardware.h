/*
 Erica Sadun, http://ericasadun.com
 iPhone Developer's Cookbook, 5.0 Edition
 BSD License, Use at your own risk
 */

#import <UIKit/UIKit.h>

#define IFPGA_NAMESTRING                @"iFPGA"

#define IPHONE_1_NAMESTRING            @"iPhone 1"
#define IPHONE_3G_NAMESTRING            @"iPhone 3G"
#define IPHONE_3GS_NAMESTRING           @"iPhone 3GS" 
#define IPHONE_4_NAMESTRING             @"iPhone 4" 
#define IPHONE_4S_NAMESTRING            @"iPhone 4S"
#define IPHONE_UNKNOWN_NAMESTRING       @"Unknown iPhone"

#define IPOD_1_NAMESTRING              @"iPod touch 1"
#define IPOD_2_NAMESTRING              @"iPod touch 2"
#define IPOD_3_NAMESTRING              @"iPod touch 3"
#define IPOD_4_NAMESTRING              @"iPod touch 4"
#define IPOD_UNKNOWN_NAMESTRING         @"Unknown iPod"

#define IPAD_1_NAMESTRING              @"iPad 1"
#define IPAD_2_NAMESTRING              @"iPad 2"
#define THE_NEW_IPAD_NAMESTRING         @"The new iPad"
#define IPAD_UNKNOWN_NAMESTRING         @"Unknown iPad"

#define APPLE_TV_2_NAMESTRING           @"Apple TV 2"
#define APPLE_TV_UNKNOWN_NAMESTRING      @"Unknown Apple TV"

#define IOS_FAMILY_UNKNOWN_DEVICE       @"Unknown iOS device"

#define IPHONE_SIMULATOR_NAMESTRING         @"iPhone Simulator"
#define IPHONE_SIMULATOR_IPHONE_NAMESTRING  @"iPhone Simulator"
#define IPHONE_SIMULATOR_IPAD_NAMESTRING    @"iPad Simulator"

typedef enum {
    UIDeviceUnknown,
    
    UIDeviceiPhoneSimulator,
    UIDeviceiPhoneSimulatoriPhone, // both regular and iPhone 4 devices
    UIDeviceiPhoneSimulatoriPad,
    
    UIDeviceiPhone1,
    UIDeviceiPhone3G,
    UIDeviceiPhone3GS,
    UIDeviceiPhone4,
    UIDeviceiPhone4S,
    
    UIDeviceiPod1,
    UIDeviceiPod2,
    UIDeviceiPod3,
    UIDeviceiPod4,
    
    UIDeviceiPad1,
    UIDeviceiPad2,
    UIDeviceTheNewiPad,
    
    UIDeviceAppleTV2,
    UIDeviceUnknownAppleTV,
    
    UIDeviceUnknowniPhone,
    UIDeviceUnknowniPod,
    UIDeviceUnknowniPad,
    UIDeviceIFPGA,

} UIDevicePlatform;

@interface UIDevice (Hardware)
- (NSString *) platform;
- (NSString *) hwmodel;
- (NSUInteger) platformType;
- (NSString *) platformString;

- (NSUInteger) cpuFrequency;
- (NSUInteger) busFrequency;
- (NSUInteger) totalMemory;
- (NSUInteger) userMemory;

- (NSNumber *) totalDiskSpace;
- (NSNumber *) freeDiskSpace;

- (NSString *) macaddress;
@end