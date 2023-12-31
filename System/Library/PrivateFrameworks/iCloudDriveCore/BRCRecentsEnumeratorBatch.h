//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet;
@protocol NSFileProviderEnumerationObserver, NSFileProviderItem, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCRecentsEnumeratorBatch : NSObject
{
    NSMutableOrderedSet<NSFileProviderItem> *_toIndexItems;	// 8 = 0x8
    NSMutableOrderedSet *_deletedItemIDs;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    id <NSFileProviderEnumerationObserver> _observer;	// 32 = 0x20
    unsigned long long _rank;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001d061d
@property(nonatomic) unsigned long long rank; // @synthesize rank=_rank;
- (void)listItems:(CDUnknownBlockType)arg1;	// IMP=0x00000000001d057a
- (id)description;	// IMP=0x00000000001d04fb
- (unsigned long long)batchCount;	// IMP=0x00000000001d042e
- (void)addDeletionOfFileObjectID:(id)arg1 rank:(unsigned long long)arg2;	// IMP=0x00000000001d03ed
- (void)addIndexOfItem:(id)arg1;	// IMP=0x00000000001d00da
- (id)init;	// IMP=0x00000000001d003d

@end

