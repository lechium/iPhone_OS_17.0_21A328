//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HFCharacteristicValueManager, HMCameraUserSettings, HMCharacteristic, NSString;

@protocol HUServiceDetailsCameraSettingsReaderWriterConfigurator
- (HFCharacteristicValueManager *)characteristicValueManager;
- (NSString *)itemTitle;
- (NSString *)itemTitleLocalizationKey;
- (HMCharacteristic *)characteristicForSettings:(HMCameraUserSettings *)arg1;
- (HMCameraUserSettings *)cameraSettings;
- (NSString *)transactionReason;
@end

