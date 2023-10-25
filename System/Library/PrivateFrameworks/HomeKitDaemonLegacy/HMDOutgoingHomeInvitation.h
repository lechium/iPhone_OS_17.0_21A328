//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDUser, NSArray, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDOutgoingHomeInvitation
{
    struct os_unfair_lock_s _lock;	// 72 = 0x48
    NSArray *_operationIdentifiers;	// 80 = 0x50
    NSUUID *_uuid;	// 88 = 0x58
    HMDUser *_user;	// 96 = 0x60
    NSString *_inviteeDestinationAddress;	// 104 = 0x68
    NSUUID *_messageIdentifier;	// 112 = 0x70
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000009de5d
- (void).cxx_destruct;	// IMP=0x000000000009d5fc
@property(readonly, nonatomic) NSUUID *messageIdentifier; // @synthesize messageIdentifier=_messageIdentifier;
@property(retain, nonatomic) NSString *inviteeDestinationAddress; // @synthesize inviteeDestinationAddress=_inviteeDestinationAddress;
@property(retain, nonatomic) HMDUser *user; // @synthesize user=_user;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;	// IMP=0x000000000009d11a
- (id)emptyModelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x000000000009d05e
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x000000000009cf07
- (void)_transactionOutgoingInvitationUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x000000000009c941
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x000000000009c8b2
- (void)processUserManagementOperationIdentifiers:(id)arg1;	// IMP=0x000000000009c739
- (void)updateUserManagementOperations:(id)arg1;	// IMP=0x000000000009c10f
@property(retain, nonatomic) NSArray *operationIdentifiers; // @synthesize operationIdentifiers=_operationIdentifiers;
@property(readonly, nonatomic) NSArray *operations;
- (void)updateInvitationState:(long long)arg1;	// IMP=0x000000000009bf25
- (void)notifyStateChangedForMessage:(id)arg1;	// IMP=0x000000000009bb63
- (_Bool)refreshDisplayName;	// IMP=0x000000000009ba44
- (void)updateUser:(id)arg1;	// IMP=0x000000000009ba3e
- (id)describeWithFormat;	// IMP=0x000000000009b907
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000009b2c3
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000009aca1
@property(readonly, nonatomic) NSArray *accessoryInvitationsInformation;
- (void)cancel;	// IMP=0x000000000009a986
@property(readonly, nonatomic, getter=isComplete) _Bool complete;
@property(readonly, nonatomic) _Bool responseReceived;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)shortDescription;	// IMP=0x000000000009a5d5
- (id)initWithUUID:(id)arg1 invitee:(id)arg2 invitationState:(long long)arg3 forHome:(id)arg4 expiryDate:(id)arg5 messageIdentifier:(id)arg6;	// IMP=0x000000000009a44f
- (id)initWithInvitee:(id)arg1 invitationState:(long long)arg2 forHome:(id)arg3 expiryDate:(id)arg4 messageIdentifier:(id)arg5;	// IMP=0x000000000009a426

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
