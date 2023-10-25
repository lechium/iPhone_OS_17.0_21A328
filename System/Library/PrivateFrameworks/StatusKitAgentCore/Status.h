//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface Status : NSManagedObject
{
}

+ (id)uniqueIdentifierKeyPath;	// IMP=0x004000000006f5db
+ (id)dateCreatedKeyPath;	// IMP=0x004000000006f5ce
+ (id)datePublishedKeyPath;	// IMP=0x004000000006f5c1
+ (id)channelIdentifierKeyPath;	// IMP=0x004000000006f5b4
+ (id)predicateForStatusUniqueIdentifier:(id)arg1;	// IMP=0x004000000006f682
+ (id)predicateForChannelIdentifier:(id)arg1;	// IMP=0x004000000006f5e8
+ (id)sortDescriptorForDateCreatedAscending:(_Bool)arg1;	// IMP=0x004000000006f789
+ (id)sortDescriptorForDatePublishedAscending:(_Bool)arg1;	// IMP=0x004000000006f71c
+ (id)fetchRequest;	// IMP=0x004000000007d116

// Remaining properties
@property(copy, nonatomic) NSString *channelIdentifier; // @dynamic channelIdentifier;
@property(copy, nonatomic) NSDate *dateCreated; // @dynamic dateCreated;
@property(copy, nonatomic) NSDate *dateExpired; // @dynamic dateExpired;
@property(copy, nonatomic) NSDate *datePublished; // @dynamic datePublished;
@property(copy, nonatomic) NSDate *dateReceived; // @dynamic dateReceived;
@property(retain, nonatomic) NSData *rawData; // @dynamic rawData;
@property(copy, nonatomic) NSString *uniqueIdentifier; // @dynamic uniqueIdentifier;

@end
