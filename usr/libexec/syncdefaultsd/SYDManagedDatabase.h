//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSSet, NSString;

@interface SYDManagedDatabase : NSManagedObject
{
}


// Remaining properties
@property(retain, nonatomic) NSString *acAccountIdentifier; // @dynamic acAccountIdentifier;
@property(nonatomic) _Bool didMigrateFromPlists; // @dynamic didMigrateFromPlists;
@property(nonatomic) short failedMigrationCount; // @dynamic failedMigrationCount;
@property(retain, nonatomic) NSSet *stores; // @dynamic stores;
@property(retain, nonatomic) NSData *syncEngineMetadata; // @dynamic syncEngineMetadata;
@property(retain, nonatomic) NSData *syncEngineStateSerialization; // @dynamic syncEngineStateSerialization;
@end

