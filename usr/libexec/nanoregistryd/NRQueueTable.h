//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface NRQueueTable : NSObject
{
    NSObject<OS_dispatch_queue> *_queueTableQueue;	// 8 = 0x8
    NSMutableDictionary *_queueTable;	// 16 = 0x10
}

+ (id)sharedTable;	// IMP=0x0040000000023774
- (void).cxx_destruct;	// IMP=0x0020000000024005
- (void)removeQueue:(id)arg1;	// IMP=0x0010000000023f1c
- (id)queueWithDispatchQueue:(id)arg1;	// IMP=0x0010000000023c1b
- (void)enumerateQueuesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000002396a
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x00100000000237c9
- (id)init;	// IMP=0x00100000000236c9

@end

