//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSAudioStartStreamOption.h>

@interface CSAudioStartStreamOption (AVVC)
+ (long long)avvcAlertOverrideType:(long long)arg1;	// IMP=0x0010000000006aa4
- (void)adjustStartRecordingHostTime:(unsigned long long)arg1;	// IMP=0x00200000000068d1
- (long long)_alertBehaviorTypeFromAVVCOverrideType:(long long)arg1;	// IMP=0x00100000000068bc
- (_Bool)isAlertBehaviorOverridedBeep;	// IMP=0x0010000000006866
- (id)avvcAlertBehavior;	// IMP=0x00100000000066b4
- (void)setAVVCAlertBehavior:(id)arg1;	// IMP=0x0010000000006475
- (id)avvcStartRecordSettingsWithAudioStreamHandleId:(unsigned long long)arg1;	// IMP=0x00100000000061a8
@end

