//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class Channel, NSData, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface ReceivedInvitation : NSManagedObject
{
}

+ (id)statusTypeIdentifierKeyPath;	// IMP=0x00400000000563fe
+ (id)senderHandleKeyPath;	// IMP=0x00400000000563f1
+ (id)dateInvitationCreatedKeyPath;	// IMP=0x00400000000563e4
+ (id)predicateForStatusTypeIdentifier:(id)arg1;	// IMP=0x0040000000056507
+ (id)predicateForSenderHandleString:(id)arg1;	// IMP=0x004000000005646d
+ (id)predicateForSenderHandle:(id)arg1;	// IMP=0x004000000005640b
+ (id)sortDescriptorForSenderHandleOrderedAscending:(_Bool)arg1;	// IMP=0x004000000005660e
+ (id)sortDescriptorForDateInvitationCreatedOrderedAscending:(_Bool)arg1;	// IMP=0x00400000000565a1
+ (id)fetchRequest;	// IMP=0x004000000007d0d6

// Remaining properties
@property(retain, nonatomic) Channel *channel; // @dynamic channel;
@property(retain, nonatomic) NSData *channelToken; // @dynamic channelToken;
@property(copy, nonatomic) NSDate *dateInvitationCreated; // @dynamic dateInvitationCreated;
@property(retain, nonatomic) NSData *incomingRatchetState; // @dynamic incomingRatchetState;
@property(copy, nonatomic) NSString *invitationIdentifier; // @dynamic invitationIdentifier;
@property(retain, nonatomic) NSData *invitationPayload; // @dynamic invitationPayload;
@property(copy, nonatomic) NSString *invitedHandle; // @dynamic invitedHandle;
@property(retain, nonatomic) NSData *peerKey; // @dynamic peerKey;
@property(copy, nonatomic) NSString *presenceIdentifier; // @dynamic presenceIdentifier;
@property(copy, nonatomic) NSString *senderHandle; // @dynamic senderHandle;
@property(retain, nonatomic) NSData *serverKey; // @dynamic serverKey;
@property(copy, nonatomic) NSString *statusTypeIdentifier; // @dynamic statusTypeIdentifier;

@end

