//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, REMCDBaseSection, REMCDReminder, REMCDRootEntityObject, REMCDSavedAttachment, REMCDSavedReminder, REMCDTemplate;
@protocol ICCloudObject;

@interface REMCKCloudState : NSManagedObject
{
}

+ (id)defaultRelationshipKeyPathsForPrefetching;	// IMP=0x00100000000751f9
+ (id)fetchRequest;	// IMP=0x001000000007885f
- (_Bool)isInCloud;	// IMP=0x00400000000751e7
@property(readonly, nonatomic) NSManagedObject<ICCloudObject> *cloudObject;

// Remaining properties
@property(nonatomic) long long currentLocalVersion; // @dynamic currentLocalVersion;
@property(nonatomic) _Bool inCloud; // @dynamic inCloud;
@property(nonatomic) long long latestVersionSyncedToCloud; // @dynamic latestVersionSyncedToCloud;
@property(copy, nonatomic) NSDate *localVersionDate; // @dynamic localVersionDate;
@property(retain, nonatomic) REMCDRootEntityObject *object; // @dynamic object;
@property(retain, nonatomic) REMCDReminder *reminder; // @dynamic reminder;
@property(retain, nonatomic) REMCDSavedAttachment *savedAttachment; // @dynamic savedAttachment;
@property(retain, nonatomic) REMCDSavedReminder *savedReminder; // @dynamic savedReminder;
@property(retain, nonatomic) REMCDBaseSection *section; // @dynamic section;
@property(retain, nonatomic) REMCDTemplate *template; // @dynamic template;

@end
