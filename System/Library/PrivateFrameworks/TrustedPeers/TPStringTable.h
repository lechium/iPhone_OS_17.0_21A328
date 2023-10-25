//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TPStringTable : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSHashTable *_table;	// 16 = 0x10
}

+ (id)defaultTable;	// IMP=0x00600000000356c4
- (void).cxx_destruct;	// IMP=0x0000000000035529
@property(retain) NSHashTable *table; // @synthesize table=_table;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)setWithArray:(id)arg1;	// IMP=0x00000000000353b0
- (id)stringWithString:(id)arg1;	// IMP=0x00000000000351d9
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000000000350c5
@property(readonly) unsigned long long _count;

@end
