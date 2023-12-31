//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSQuestionStep.h>

@class NSObject, NSString;
@protocol PDDatabaseValue;

@interface CLSQuestionStep (PDSyncableItem)
+ (id)payloadsForObject:(id)arg1 withSyncItem:(id)arg2 database:(id)arg3;	// IMP=0x0020000000047750
+ (id)recordType;	// IMP=0x00100000000472b6
+ (long long)migrationOrder;	// IMP=0x001000000006c827
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x001000000006c339
+ (id)entityName;	// IMP=0x001000000006bf0c
- (id)payloadsWithClassIDs:(id)arg1 dependencies:(id)arg2;	// IMP=0x0010000000047ed2
@property(readonly, nonatomic) NSString *parentReferenceName;
@property(readonly, nonatomic) long long syncableItemType;
- (long long)syncOrder;	// IMP=0x0010000000047730
- (long long)syncBackend:(id)arg1;	// IMP=0x0010000000047674
- (void)populate:(id)arg1;	// IMP=0x00100000000474a0
- (id)initWithCKRecord:(id)arg1;	// IMP=0x00100000000472c3
- (void)willBeDeletedFromDatabase:(id)arg1;	// IMP=0x001000000006c3d5
- (void)bindTo:(id)arg1;	// IMP=0x001000000006c0e2
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x001000000006bf19
- (_Bool)canCopyToDatabase:(id)arg1;	// IMP=0x00100000000c8b43

// Remaining properties
@property(readonly, nonatomic) unsigned long long changeHash;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDeleteTracked) _Bool deleteTracked;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
@property(readonly) Class superclass;
@end

