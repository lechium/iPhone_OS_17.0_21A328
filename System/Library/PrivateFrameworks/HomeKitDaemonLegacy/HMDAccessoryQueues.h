//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface HMDAccessoryQueues : HMFObject
{
    NSMutableDictionary *queues;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000006c28de
@property(retain, nonatomic) NSMutableDictionary *queues; // @synthesize queues;
- (id)getAccessoryForContext:(id)arg1 fromQueue:(id)arg2;	// IMP=0x00000000006c263e
- (int)countForQueue:(id)arg1;	// IMP=0x00000000006c259f
- (id)whichQueueForAccessory:(id)arg1;	// IMP=0x00000000006c237c
- (_Bool)_inQueue:(id)arg1 queue:(id)arg2;	// IMP=0x00000000006c2191
- (id)popAccessoryFromQueue:(id)arg1;	// IMP=0x00000000006c2060
- (void)removeAccessory:(id)arg1;	// IMP=0x00000000006c1e14
- (id)getContextForAccessory:(id)arg1;	// IMP=0x00000000006c1bae
- (void)addAccessory:(id)arg1 toQueue:(id)arg2 context:(id)arg3;	// IMP=0x00000000006c1a9f
- (_Bool)createQueue:(id)arg1;	// IMP=0x00000000006c19be
- (id)init;	// IMP=0x00000000006c1953
- (void)enumerateQueue:(id)arg1 enumerateAccessory:(CDUnknownBlockType)arg2;	// IMP=0x00000000006c28f1

@end

