//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable, _UISelectorSet;

__attribute__((visibility("hidden")))
@interface _UISelectorDictionary : NSObject
{
    NSMapTable *_map;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000079f085
- (id)description;	// IMP=0x000000000079f06f
- (unsigned long long)hash;	// IMP=0x000000000079f059
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000079f002
- (void)enumerateSelectorsAndObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000079ef63
- (void)removeObjectsForSelectors:(id)arg1;	// IMP=0x000000000079eef8
- (void)addEntriesFromDictionary:(id)arg1;	// IMP=0x000000000079ee8d
- (void)removeObjectForSelector:(SEL)arg1;	// IMP=0x000000000079ee7c
- (void)setObject:(id)arg1 forSelector:(SEL)arg2;	// IMP=0x000000000079ee6b
- (id)objectForSelector:(SEL)arg1;	// IMP=0x000000000079ee5a
@property(readonly, nonatomic) NSArray *allObjects;
@property(readonly, nonatomic) _UISelectorSet *allSelectors;
@property(readonly, nonatomic) unsigned long long count;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000079ed31
- (id)initWithMapping:(CDUnknownBlockType)arg1 objects:(id)arg2;	// IMP=0x000000000079ebb2
- (id)init;	// IMP=0x000000000079ea85
- (id)initWithMap:(id)arg1;	// IMP=0x000000000079ea1a

@end

