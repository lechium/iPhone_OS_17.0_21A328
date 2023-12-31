//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSMultipleChoiceAnswerFormat.h>

@class NSObject, NSString;
@protocol PDDatabaseValue;

@interface CLSMultipleChoiceAnswerFormat (PDSyncableItem)
+ (id)recordType;	// IMP=0x002000000008002c
+ (long long)migrationOrder;	// IMP=0x0010000000135d15
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000135ba2
+ (id)entityName;	// IMP=0x00100000001358eb
@property(readonly, nonatomic) NSString *parentReferenceName;
@property(readonly, nonatomic) long long syncableItemType;
- (long long)syncOrder;	// IMP=0x0010000000080265
- (long long)syncBackend:(id)arg1;	// IMP=0x00100000000801a9
- (void)populate:(id)arg1;	// IMP=0x00100000000800f2
- (id)initWithCKRecord:(id)arg1;	// IMP=0x0010000000080039
- (_Bool)canCopyToDatabase:(id)arg1;	// IMP=0x00100000000c8bed
- (void)willBeDeletedFromDatabase:(id)arg1;	// IMP=0x0010000000135c3e
- (void)bindTo:(id)arg1;	// IMP=0x0010000000135a14
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x00100000001358f8

// Remaining properties
@property(readonly, nonatomic) unsigned long long changeHash;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDeleteTracked) _Bool deleteTracked;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
@property(readonly) Class superclass;
@end

