//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/NSObject-Protocol.h>

@class AMSPhoneNumberContextInfo, AMSPromise, NSArray, NSData, NSNumber, NSString;

@protocol AMSDeviceInfo <NSObject>
@property(readonly, nonatomic) AMSPromise *voicePreferredPACToken;
@property(readonly, nonatomic) AMSPhoneNumberContextInfo *voicePreferredPhoneNumberContextInfo;
@property(readonly, nonatomic) _Bool deviceIsRealityDeviceSimulator;
@property(readonly, nonatomic) _Bool deviceIsiPodSimulator;
@property(readonly, nonatomic) _Bool deviceIsiPhoneSimulator;
@property(readonly, nonatomic) _Bool deviceIsiPadSimulator;
@property(readonly, nonatomic) _Bool deviceIsAppleWatchSimulator;
@property(readonly, nonatomic) _Bool deviceIsAppleTVSimulator;
@property(readonly, nonatomic) AMSPromise *carrierNamesPromise;
@property(readonly, nonatomic) NSString *phoneNumber;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSArray *carrierNames;
@property(readonly, nonatomic) _Bool deviceIsPasscodeProtected;
@property(readonly, nonatomic) _Bool deviceIsBundle;
@property(readonly, nonatomic) _Bool deviceIsRealityDevice;
@property(readonly, nonatomic) _Bool deviceIsMac;
@property(readonly, nonatomic) _Bool deviceIsiPod;
@property(readonly, nonatomic) _Bool deviceIsiPhone;
@property(readonly, nonatomic) _Bool deviceIsiPad;
@property(readonly, nonatomic) _Bool deviceIsAppleWatch;
@property(readonly, nonatomic) _Bool deviceIsAppleTV;
@property(readonly, nonatomic) _Bool deviceIsAudioAccessory;
@property(readonly, nonatomic) NSString *uniqueDeviceId;
@property(readonly, nonatomic) NSString *thinnedAppVariantId;
@property(readonly, nonatomic) NSString *serialNumber;
@property(readonly, nonatomic, getter=isSecureElementAvailable) _Bool secureElementAvailable;
@property(readonly, nonatomic) NSNumber *screenWidth;
@property(readonly, nonatomic) NSNumber *screenHeight;
@property(readonly, nonatomic) NSNumber *screenScale;
@property(readonly, nonatomic) NSString *secureElementID;
@property(readonly, nonatomic, getter=isRunningInStoreDemoMode) _Bool runningInStoreDemoMode;
@property(readonly, nonatomic) NSString *ROMAddress;
@property(readonly, nonatomic) NSString *regionCode;
@property(readonly, nonatomic) NSString *productVersion;
@property(readonly, nonatomic) NSString *productType;
@property(readonly, nonatomic) NSString *operatingSystem;
@property(readonly, nonatomic) NSString *modelPartNumber;
@property(readonly, nonatomic) NSString *MLBSerialNumber;
@property(readonly, nonatomic) NSData *macAddressData;
@property(readonly, nonatomic) NSString *macAddress;
@property(readonly, nonatomic) NSString *localIPAddress;
@property(readonly, nonatomic) NSString *hardwarePlatform;
@property(readonly, nonatomic) NSString *deviceName;
@property(readonly, nonatomic) NSString *deviceGUID;
@property(readonly, nonatomic) NSString *compatibleProductType;
@property(readonly, nonatomic) NSString *buildVersion;
@property(nonatomic) long long biometricState;
@end
