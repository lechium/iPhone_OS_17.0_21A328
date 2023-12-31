//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSScoreItem.h>

@class NSObject, NSString;
@protocol PDDatabaseValue;

@interface CLSScoreItem (PDInsightEventGenerating)
+ (long long)migrationOrder;	// IMP=0x00200000000abe1d
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000abd82
+ (id)entityName;	// IMP=0x00100000000aba85
+ (int)entityType;	// IMP=0x00100000000c9a48
+ (int)syncType;	// IMP=0x00100000000c9a3d
+ (id)recordType;	// IMP=0x00100000000d4eb8
- (id)generateInsightEventsWithDatabase:(id)arg1;	// IMP=0x001000000007db92
- (void)bindTo:(id)arg1;	// IMP=0x00100000000abbfd
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x00100000000aba92
@property(readonly, nonatomic) NSString *parentReferenceName;
@property(readonly, nonatomic) long long syncableItemType;
- (long long)syncOrder;	// IMP=0x00100000000d51f5
- (void)populate:(id)arg1;	// IMP=0x00100000000d5075
- (id)initWithCKRecord:(id)arg1;	// IMP=0x00100000000d4ec5
- (void)_populateReportItem:(id)arg1;	// IMP=0x00100000001a09af
- (id)generateReportFromDataInDatabase:(id)arg1;	// IMP=0x00100000001a0977

// Remaining properties
@property(readonly, nonatomic) unsigned long long changeHash;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDeleteTracked) _Bool deleteTracked;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
@property(readonly) Class superclass;
@end

