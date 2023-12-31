//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSContext.h>

@class NSObject, NSString;
@protocol PDDatabaseValue;

@interface CLSContext (PDSyncableItem)
+ (id)recordType;	// IMP=0x0020000000117c8c
+ (long long)migrationOrder;	// IMP=0x0010000000170351
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x001000000016f36e
+ (id)entityName;	// IMP=0x001000000016e686
@property(readonly, nonatomic) NSString *parentReferenceName;
@property(readonly, nonatomic) long long syncableItemType;
- (long long)syncOrder;	// IMP=0x0010000000118d1b
- (void)populate:(id)arg1;	// IMP=0x001000000011871d
- (_Bool)shouldInsertInDatabase:(id)arg1;	// IMP=0x001000000011864e
- (id)initWithCKRecord:(id)arg1;	// IMP=0x0010000000117c99
- (void)willBeDeletedFromDatabase:(id)arg1;	// IMP=0x001000000017035c
@property(readonly, nonatomic) unsigned long long changeHash;
- (void)bindTo:(id)arg1;	// IMP=0x001000000016ec2a
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x001000000016e693

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDeleteTracked) _Bool deleteTracked;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
@property(readonly) Class superclass;
@end

