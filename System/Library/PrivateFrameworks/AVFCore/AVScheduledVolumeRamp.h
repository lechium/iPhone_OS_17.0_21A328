//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface AVScheduledVolumeRamp
{
    long long _rampMode;	// 64 = 0x40
}

+ (id)volumeRampWithStartVolume:(float)arg1 endVolume:(float)arg2 timeRange:(CDStruct_e83c9415)arg3 rampMode:(long long)arg4;	// IMP=0x00600000000ce984
+ (id)_defaultAdditionalFigRepresentationObjects;	// IMP=0x00600000000ce914
- (id)_makeRampWithTruncatedTimeRange:(CDStruct_e83c9415)arg1 endValue:(float)arg2;	// IMP=0x00000000000ceb52
- (id)_additionalFigRepresentationObjects;	// IMP=0x00000000000ceaca
- (long long)_parameterRampMode;	// IMP=0x00000000000ceab9
@property(readonly) long long rampMode;
@property(readonly) float endVolume;
@property(readonly) float startVolume;
- (id)initWithStartVolume:(float)arg1 endVolume:(float)arg2 timeRange:(CDStruct_e83c9415)arg3 rampMode:(long long)arg4;	// IMP=0x00000000000ce9ec
- (id)propertyList;	// IMP=0x00000000000cec32
- (id)initWithPropertyList:(id)arg1;	// IMP=0x00000000000cebb8

@end

