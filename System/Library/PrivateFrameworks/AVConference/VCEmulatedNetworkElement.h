//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface VCEmulatedNetworkElement : NSObject
{
    NSDictionary *_policies;	// 8 = 0x8
    struct opaqueCMSimpleQueue *_networkElementQueue;	// 16 = 0x10
    CDUnknownBlockType _processCompleteHandler;	// 24 = 0x18
}

@property(copy, nonatomic) CDUnknownBlockType processCompleteHandler; // @synthesize processCompleteHandler=_processCompleteHandler;
- (void)connectFrom:(id)arg1;	// IMP=0x00000000000f16fc
- (void)connectTo:(id)arg1;	// IMP=0x00000000000f161e
- (void)runUntilTime:(double)arg1;	// IMP=0x00000000000f15c4
- (int)write:(id)arg1;	// IMP=0x00000000000f1533
- (void)drainAndReleasePackets;	// IMP=0x00000000000f14ef
- (void)dealloc;	// IMP=0x00000000000f145f
- (id)initWithPolicies:(id)arg1;	// IMP=0x00000000000f137a

@end

