//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIKBRTObject : NSObject
{
    NSMutableArray *_owner;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_syncQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000df8b66
- (id)nextEntry;	// IMP=0x0000000000df8a13
- (id)previousEntry;	// IMP=0x0000000000df88b0
- (void)setOwner:(id)arg1;	// IMP=0x0000000000df87aa
- (id)owner;	// IMP=0x0000000000df879c

@end

