//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHMetrics : NSObject
{
}

- (void)handleFinishedForPlayersAtTime:(double)arg1;	// IMP=0x000000000001d9c3
- (void)handleActionForPlayer:(id)arg1 action:(long long)arg2 time:(double)arg3 isAdvanced:(_Bool)arg4;	// IMP=0x000000000001d9bd
- (void)handleStartForPlayer:(id)arg1 time:(double)arg2 isAdvanced:(_Bool)arg3 patternID:(id)arg4;	// IMP=0x000000000001d9b7
- (void)handleInitForPlayer:(id)arg1 events:(id)arg2 isAdvanced:(_Bool)arg3 patternID:(id)arg4;	// IMP=0x000000000001d9b1
- (void)handleParamCurveEncountered;	// IMP=0x000000000001d9ab
- (void)handleEngineStop;	// IMP=0x000000000001d9a5
- (void)handleEngineStart;	// IMP=0x000000000001d99f
- (void)handleServerRecovery;	// IMP=0x000000000001d999
- (void)dealloc;	// IMP=0x000000000001d96a
- (id)initWithEngine:(id)arg1 audioSessionID:(unsigned int)arg2 sessionIsShared:(_Bool)arg3 isSPI:(_Bool)arg4;	// IMP=0x000000000001d95c

@end

