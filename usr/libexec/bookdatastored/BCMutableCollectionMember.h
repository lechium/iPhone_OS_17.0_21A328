//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKRecord, NSData, NSDate, NSString;
@protocol BCCloudDataPrivacyDelegate;

@interface BCMutableCollectionMember
{
    int _sortOrder;	// 8 = 0x8
    NSString *_collectionMemberID;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000008d916
- (void).cxx_destruct;	// IMP=0x002000000008da91
@property(nonatomic) int sortOrder; // @synthesize sortOrder=_sortOrder;
@property(copy, nonatomic) NSString *collectionMemberID; // @synthesize collectionMemberID=_collectionMemberID;
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000008d9a3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000008d91e
- (id)configuredRecordFromAttributes;	// IMP=0x001000000008d872
- (id)zoneName;	// IMP=0x001000000008d85e
- (id)identifier;	// IMP=0x001000000008d84c
- (id)recordType;	// IMP=0x001000000008d83f
@property(readonly, copy) NSString *description;
- (id)initWithRecord:(id)arg1;	// IMP=0x001000000008d5fa
- (id)initWithCloudData:(id)arg1;	// IMP=0x001000000008d481
- (id)initWithCollectionMemberID:(id)arg1;	// IMP=0x001000000008d3bd

// Remaining properties
@property(readonly, copy, nonatomic) NSData *ckSystemFields;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) _Bool deletedFlag;
@property(readonly, nonatomic) long long editGeneration;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSDate *modificationDate;
@property(nonatomic) __weak id <BCCloudDataPrivacyDelegate> privacyDelegate;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long syncGeneration;
@property(readonly, copy, nonatomic) CKRecord *systemFields;

@end

