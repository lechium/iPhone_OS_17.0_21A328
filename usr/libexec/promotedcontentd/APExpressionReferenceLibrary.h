//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APUnfairRecursiveLock, NSMutableDictionary;
@protocol APExpressionStorageProtocol;

@interface APExpressionReferenceLibrary : NSObject
{
    NSMutableDictionary *_referenceCache;	// 8 = 0x8
    NSMutableDictionary *_unsavedReferences;	// 16 = 0x10
    APUnfairRecursiveLock *_lock;	// 24 = 0x18
    unsigned long long _updateCount;	// 32 = 0x20
    NSObject<APExpressionStorageProtocol> *_storage;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000000fb54
@property(retain, nonatomic) NSObject<APExpressionStorageProtocol> *storage; // @synthesize storage=_storage;
@property(nonatomic) unsigned long long updateCount; // @synthesize updateCount=_updateCount;
@property(retain, nonatomic) APUnfairRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *unsavedReferences; // @synthesize unsavedReferences=_unsavedReferences;
@property(retain, nonatomic) NSMutableDictionary *referenceCache; // @synthesize referenceCache=_referenceCache;
- (unsigned long long)referenceCount;	// IMP=0x001000000000f9b6
- (void)removeReferences:(id)arg1;	// IMP=0x001000000000f6dd
- (id)addReferences:(id)arg1;	// IMP=0x001000000000f4b5
- (id)addReference:(id)arg1;	// IMP=0x001000000000ef2b
- (id)_validateAndAddReference:(id)arg1 reference:(id)arg2;	// IMP=0x001000000000ecfa
- (id)referenceFromIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000e7e6
- (void)endUpdate;	// IMP=0x001000000000e739
- (void)beginUpdate;	// IMP=0x001000000000e69e
- (void)dealloc;	// IMP=0x001000000000e581
- (id)_createNodeFromDictionary:(id)arg1 identifier:(id)arg2 error:(id *)arg3;	// IMP=0x001000000000e32a
- (void)_persistNewReferences;	// IMP=0x001000000000e171
- (id)initWithStorage:(id)arg1;	// IMP=0x001000000000dfc7

@end

