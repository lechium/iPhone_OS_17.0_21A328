//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Recap/RCPBaseEventStreamComposer-Protocol.h>

@class NSArray, NSString;

@protocol RCPButtonEventStreamComposer <RCPBaseEventStreamComposer>
- (void)sendUnicodeString:(NSString *)arg1 synthesizePerCharacterEvents:(_Bool)arg2 durationBetweenEvents:(double)arg3;
- (void)sendUnicodeStringByCharacters:(NSArray *)arg1 durationBetweenEvents:(double)arg2;
- (void)sendUnicodeString:(NSString *)arg1;
- (void)knobNudge:(struct CGVector)arg1 buttonMask:(unsigned int)arg2 duration:(double)arg3;
- (void)flipRingerSwitchToValue:(_Bool)arg1;
- (void)endButtonPressWithPage:(unsigned long long)arg1 usage:(unsigned long long)arg2;
- (void)beginButtonPressWithPage:(unsigned long long)arg1 usage:(unsigned long long)arg2;
- (void)endButtonPressForButtonType:(long long)arg1;
- (void)beginButtonPressForButtonType:(long long)arg1;
- (void)pressButtonsWithPages:(NSArray *)arg1 usages:(NSArray *)arg2 duration:(double)arg3;
- (void)pressButtons:(NSArray *)arg1 duration:(double)arg2;
@end

