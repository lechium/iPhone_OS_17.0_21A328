//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIResponderIntegrityProtection : NSObject
{
    NSMutableArray *_deliveryStack;	// 8 = 0x8
    NSMapTable *_pressBeganRecords;	// 16 = 0x10
}

+ (id)rip;	// IMP=0x00600000008ed46f
- (void).cxx_destruct;	// IMP=0x00000000008edf9d
- (void)responder:(id)arg1 class:(Class)arg2 receivedPresses:(id)arg3 inPhase:(long long)arg4 withEvent:(id)arg5;	// IMP=0x00000000008ede69
- (void)finishedDeliveringPresses;	// IMP=0x00000000008ed89c
- (void)startDeliveringPresses:(id)arg1 inPhase:(long long)arg2 withEvent:(id)arg3;	// IMP=0x00000000008ed802
- (id)init;	// IMP=0x00000000008ed77d

@end

