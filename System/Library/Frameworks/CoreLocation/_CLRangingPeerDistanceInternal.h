//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber, _CLRangingPeer;

@interface _CLRangingPeerDistanceInternal : NSObject
{
    _CLRangingPeer *_peer;	// 8 = 0x8
    NSDate *_date;	// 16 = 0x10
    NSNumber *_distanceMeters;	// 24 = 0x18
    NSNumber *_accuracyMeters;	// 32 = 0x20
    _Bool _initiator;	// 40 = 0x28
    _Bool _shouldUnlock;	// 41 = 0x29
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001087c1
- (void)dealloc;	// IMP=0x0000000000108752
- (id)initWithPeer:(id)arg1 date:(id)arg2 distanceMeters:(id)arg3 accuracyMeters:(id)arg4 initiator:(_Bool)arg5 shouldUnlock:(_Bool)arg6;	// IMP=0x000000000010865a

@end

