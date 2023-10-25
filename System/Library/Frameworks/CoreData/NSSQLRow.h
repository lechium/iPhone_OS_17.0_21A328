//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _CDSnapshot;

__attribute__((visibility("hidden")))
@interface NSSQLRow
{
    _CDSnapshot *_snapshot;	// 40 = 0x28
}

+ (unsigned int)newBatchRowAllocation:(id *)arg1 count:(unsigned int)arg2 forSQLEntity:(id)arg3 withOwnedObjectIDs:(id *)arg4 andTimestamp:(double)arg5;	// IMP=0x0010000000209699
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000209691
+ (void)initialize;	// IMP=0x0010000000209504
- (id)_snapshot_;	// IMP=0x000000000020b888
- (const id *)knownKeyValuesPointer;	// IMP=0x000000000020b875
- (unsigned int)_versionNumber;	// IMP=0x000000000020ac4c
- (void)setOptLock:(long long)arg1;	// IMP=0x000000000020ac38
- (unsigned long long)version;	// IMP=0x000000000020ac1c
- (id)valueForKey:(id)arg1;	// IMP=0x000000000020a74e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000020a526
- (void)setForeignOrderKeySlot:(unsigned int)arg1 orderKey:(unsigned int)arg2;	// IMP=0x000000000020a4fe
- (void)setForeignEntityKeySlot:(unsigned int)arg1 entityKey:(unsigned int)arg2;	// IMP=0x000000000020a4c9
- (void)setForeignKeySlot:(unsigned int)arg1 int64:(long long)arg2;	// IMP=0x000000000020a41a
- (void)setObjectID:(id)arg1;	// IMP=0x000000000020a3d4
- (id)objectID;	// IMP=0x000000000020a3bf
- (id)description;	// IMP=0x0000000000209d7f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000209d6d
- (id)copy;	// IMP=0x0000000000209c0b
- (id)newObjectIDForToOne:(id)arg1;	// IMP=0x0000000000209a03
- (void)dealloc;	// IMP=0x00000000002099f9
- (id)initWithSQLEntity:(id)arg1 ownedObjectID:(id)arg2 andTimestamp:(double)arg3;	// IMP=0x00000000002098ea
- (id)initWithSQLEntity:(id)arg1 objectID:(id)arg2;	// IMP=0x00000000002098a9

@end
