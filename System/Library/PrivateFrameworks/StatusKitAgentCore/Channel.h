//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface Channel : NSManagedObject
{
}

+ (id)channelTypeKeyPath;	// IMP=0x0040000000010878
+ (id)presenceIdentifierKeyPath;	// IMP=0x004000000001086b
+ (id)dateChannelCreatedKeyPath;	// IMP=0x004000000001085e
+ (id)encryptionKeysKeyPath;	// IMP=0x0040000000010851
+ (id)statusTypeKeyPath;	// IMP=0x0040000000010844
+ (id)decomissionedKeyPath;	// IMP=0x0040000000010837
+ (id)personalKeyPath;	// IMP=0x004000000001082a
+ (id)identifierKeyPath;	// IMP=0x004000000001081d
+ (id)predicateForCreationDateNotNil;	// IMP=0x0040000000010c89
+ (id)predicateForChannelIdentifier:(id)arg1;	// IMP=0x0040000000010bef
+ (id)predicateForPresenceIdentifier:(id)arg1;	// IMP=0x0040000000010b55
+ (id)predicateForChannelTypePresence;	// IMP=0x0040000000010adb
+ (id)predicateForChannelTypeStatus;	// IMP=0x0040000000010a61
+ (id)predicateForDecomissioned:(_Bool)arg1;	// IMP=0x00400000000109c0
+ (id)predicateForPersonal:(_Bool)arg1;	// IMP=0x004000000001091f
+ (id)predicateForStatusTypeIdentifier:(id)arg1;	// IMP=0x0040000000010885
+ (id)sortDescriptorForCreationDateAscending:(_Bool)arg1;	// IMP=0x0040000000010e43
+ (id)sortDescriptorForChannelIdentifierOrderedAscending:(_Bool)arg1;	// IMP=0x0040000000010dd6
+ (id)sortDescriptorForPersonalOrderedAscending:(_Bool)arg1;	// IMP=0x0040000000010d69
+ (id)sortDescriptorForStatusTypeIdentifierOrderedAscending:(_Bool)arg1;	// IMP=0x0040000000010cfc
+ (id)fetchRequest;	// IMP=0x004000000007cff6

// Remaining properties
@property(retain, nonatomic) NSData *channelToken; // @dynamic channelToken;
@property(nonatomic) short channelType; // @dynamic channelType;
@property(retain, nonatomic) NSData *currentOutgoingRatchetState; // @dynamic currentOutgoingRatchetState;
@property(copy, nonatomic) NSDate *dateChannelCreated; // @dynamic dateChannelCreated;
@property(nonatomic) _Bool decomissioned; // @dynamic decomissioned;
@property(retain, nonatomic) NSSet *generatedEncryptionKeys; // @dynamic generatedEncryptionKeys;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSSet *invitedUsers; // @dynamic invitedUsers;
@property(retain, nonatomic) NSData *membershipKey; // @dynamic membershipKey;
@property(retain, nonatomic) NSData *peerKey; // @dynamic peerKey;
@property(nonatomic) _Bool personal; // @dynamic personal;
@property(copy, nonatomic) NSString *presenceIdentifier; // @dynamic presenceIdentifier;
@property(retain, nonatomic) NSSet *receivedInvitations; // @dynamic receivedInvitations;
@property(retain, nonatomic) NSData *serverKey; // @dynamic serverKey;
@property(copy, nonatomic) NSString *serviceIdentifier; // @dynamic serviceIdentifier;
@property(copy, nonatomic) NSString *statusType; // @dynamic statusType;

@end

