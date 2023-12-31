//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "EKPersistentObject.h"

@class EKChangeSet, EKReminderStore, NSArray;

__attribute__((visibility("hidden")))
@interface EKFrozenReminderObject : EKPersistentObject
{
    EKChangeSet *_changeSet;	// 8 = 0x8
    EKReminderStore *_reminderStore;	// 16 = 0x10
    id _remObject;	// 24 = 0x18
    NSArray *_path;	// 32 = 0x20
}

+ (Class)meltedClass;	// IMP=0x006000000004ad36
+ (Class)frozenClass;	// IMP=0x006000000004ad1c
+ (_Bool)canCommitSelf;	// IMP=0x006000000004ac66
+ (id)uniqueIdentifierForREMObject:(id)arg1;	// IMP=0x006000000004abe9
- (void).cxx_destruct;	// IMP=0x000000000004af57
@property(copy, nonatomic) NSArray *path; // @synthesize path=_path;
- (_Bool)existsInStore;	// IMP=0x000000000004af2d
- (unsigned long long)hash;	// IMP=0x000000000004aee9
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004ada4
- (int)entityType;	// IMP=0x000000000004ad99
- (_Bool)isNew;	// IMP=0x000000000004ad66
- (_Bool)isEqual:(id)arg1 ignoringProperties:(id)arg2;	// IMP=0x000000000004ad5a
- (_Bool)isCompletelyEqual:(id)arg1;	// IMP=0x000000000004ad4e
- (_Bool)isPropertyUnavailable:(id)arg1;	// IMP=0x000000000004ad2e
- (id)frozenObject;	// IMP=0x000000000004ad25
- (id)existingMeltedObject;	// IMP=0x000000000004ad14
- (id)changeSet;	// IMP=0x000000000004ad0c
- (id)semanticIdentifier;	// IMP=0x000000000004acfa
- (id)uniqueIdentifier;	// IMP=0x000000000004acf2
- (_Bool)isPartialObject;	// IMP=0x000000000004acea
- (_Bool)isFrozen;	// IMP=0x000000000004ace2
- (id)updateParentToCommitSelf:(id)arg1;	// IMP=0x000000000004ac6e
- (_Bool)_applyChangesToSaveRequest:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004ab73
@property(readonly, nonatomic) EKChangeSet *uncommittedChanges;
- (id)valueForSingleValueKey:(id)arg1 backingValue:(CDUnknownBlockType)arg2;	// IMP=0x000000000004aabe
- (id)updatedFrozenObjectWithChanges:(id)arg1 updatedChildren:(id)arg2;	// IMP=0x000000000004a929
- (id)updatedFrozenObjectWithChanges:(id)arg1;	// IMP=0x000000000004a915
- (id)remObjectID;	// IMP=0x000000000004a8f8
- (id)REMObject;	// IMP=0x000000000004a8e3
- (id)initWithREMObject:(id)arg1 inStore:(id)arg2 withChanges:(id)arg3;	// IMP=0x000000000004a756
- (id)initWithREMObject:(id)arg1 inStore:(id)arg2;	// IMP=0x000000000004a741

@end

