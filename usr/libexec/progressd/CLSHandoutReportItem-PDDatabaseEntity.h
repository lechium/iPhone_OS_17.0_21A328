//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ClassKit/CLSHandoutReportItem.h>

@class NSObject, NSString;
@protocol PDDatabaseValue;

@interface CLSHandoutReportItem (PDDatabaseEntity)
+ (id)identityColumnName;	// IMP=0x002000000016c944
+ (_Bool)migrateFromVersion:(unsigned long long)arg1 finalVersion:(out unsigned long long *)arg2 inDatabase:(id)arg3;	// IMP=0x001000000016c84c
+ (id)hashableColumnNames;	// IMP=0x001000000016c002
+ (id)entityName;	// IMP=0x001000000016bff5
@property(readonly, nonatomic) NSObject<PDDatabaseValue> *identityValue;
- (void)bindTo:(id)arg1;	// IMP=0x001000000016c47d
- (id)initWithDatabaseRow:(id)arg1;	// IMP=0x001000000016c0db
@property(readonly, nonatomic) unsigned long long changeHash;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic, getter=isDeleteTracked) _Bool deleteTracked;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

