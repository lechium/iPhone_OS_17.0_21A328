//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSAudioStartStreamOption.h>

@interface CSAudioStartStreamOption (AVVC)
+ (long long)avvcAlertOverrideType:(long long)arg1;	// IMP=0x0060000000067845
- (void)adjustStartRecordingHostTime:(unsigned long long)arg1;	// IMP=0x0010000000067672
- (long long)_alertBehaviorTypeFromAVVCOverrideType:(long long)arg1;	// IMP=0x001000000006765d
- (_Bool)isAlertBehaviorOverridedBeep;	// IMP=0x0010000000067607
- (id)avvcAlertBehavior;	// IMP=0x0010000000067455
- (void)setAVVCAlertBehavior:(id)arg1;	// IMP=0x0010000000067216
- (id)avvcStartRecordSettingsWithAudioStreamHandleId:(unsigned long long)arg1;	// IMP=0x0010000000066f49
@end
