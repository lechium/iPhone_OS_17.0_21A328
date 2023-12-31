//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIDevice.h>

@interface UIDevice (SFAdditions)
- (_Bool)sf_inRetailKioskMode;	// IMP=0x003000000000474a
@property(readonly, nonatomic, getter=sf_isDeveloperModeEnabled) _Bool sf_developerModeEnabled;
- (id)sf_serialNumberQRImage;	// IMP=0x003000000000446e
- (id)sf_regulatoryDeviceVariant;	// IMP=0x0030000000004453
- (id)sf_deviceType;	// IMP=0x0030000000004438
- (id)sf_productType;	// IMP=0x003000000000441d
- (_Bool)sf_deviceSupportsDisplayZoom;	// IMP=0x0030000000004331
- (id)sf_udidString;	// IMP=0x0030000000004316
- (id)sf_plantCode;	// IMP=0x00300000000042bf
- (id)sf_regionCode;	// IMP=0x0030000000004262
- (id)sf_screenClassString;	// IMP=0x0030000000004255
- (id)sf_deviceSubTypeString;	// IMP=0x0030000000004061
- (id)sf_colorCodedSerialNumber;	// IMP=0x0030000000003d60
- (id)sf_configString;	// IMP=0x0030000000003d53
- (id)sf_monthAndYearOfManufacture;	// IMP=0x0030000000003bfb
- (unsigned long long)sf_weekOfManufacture;	// IMP=0x0030000000003bb0
- (unsigned long long)sf_yearOfManufacture;	// IMP=0x0030000000003b65
- (id)sf_serialNumber;	// IMP=0x0030000000003b0e
- (_Bool)sf_isChinaRegionCellularDevice;	// IMP=0x0030000000003aac
- (_Bool)sf_isCarrierInstall;	// IMP=0x0030000000003a69
- (_Bool)sf_isInternalInstall;	// IMP=0x0030000000003a26
- (_Bool)sf_hasHardwareHomeButton;	// IMP=0x0030000000003a0c
- (_Bool)sf_isiPod;	// IMP=0x00300000000039f2
- (_Bool)sf_isAudioAccessory;	// IMP=0x00300000000039d8
- (_Bool)sf_isAppleTV;	// IMP=0x00300000000039d0
- (_Bool)sf_isiPhone;	// IMP=0x0030000000003981
- (_Bool)sf_isiPad;	// IMP=0x0030000000003931
@end

