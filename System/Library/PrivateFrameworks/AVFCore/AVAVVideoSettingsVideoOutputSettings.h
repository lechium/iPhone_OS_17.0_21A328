//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AVVideoOutputSettings.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface AVAVVideoSettingsVideoOutputSettings : AVVideoOutputSettings
{
    NSDictionary *_adaptedVideoCompressionProperties;	// 16 = 0x10
    NSDictionary *_VTPixelAspectRatioDictionary;	// 24 = 0x18
    NSDictionary *_VTCleanApertureDictionary;	// 32 = 0x20
}

+ (_Bool)_validateVideoCompressionProperties:(id)arg1 againstSupportedPropertyDictionary:(id)arg2 forCodecType:(id)arg3 exceptionReason:(id *)arg4;	// IMP=0x00100000001240ea
+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;	// IMP=0x00100000001240ae
+ (id)eligibleOutputSettingsDictionaryKeys;	// IMP=0x0010000000123fe8
@property(readonly, nonatomic) NSDictionary *videoCompressionProperties;
@property(readonly, nonatomic) NSDictionary *videoEncoderSpecification;
@property(readonly, nonatomic) unsigned int videoCodecType;
- (id)cleanApertureDictionary;	// IMP=0x0000000000125bbe
- (id)pixelAspectRatioDictionary;	// IMP=0x0000000000125bad
- (int)height;	// IMP=0x0000000000125b61
- (int)width;	// IMP=0x0000000000125b15
- (_Bool)canFullySpecifyOutputFormatReturningReason:(id *)arg1;	// IMP=0x0000000000125968
- (_Bool)encoderIsAvailableOnCurrentSystemReturningError:(id *)arg1;	// IMP=0x000000000012578e
- (_Bool)willYieldCompressedSamples;	// IMP=0x0000000000125786
- (void)dealloc;	// IMP=0x0000000000125720
- (id)initWithTrustedAVVideoSettingsDictionary:(id)arg1;	// IMP=0x0000000000125602
- (id)initWithAVVideoSettingsDictionary:(id)arg1 exceptionReason:(id *)arg2;	// IMP=0x0000000000124630

@end

