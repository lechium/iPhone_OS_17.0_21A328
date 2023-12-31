//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class CKDeviceToDeviceShareInvitationToken, HMDHome, HMFTimer, HMHomeInvitationData, NSArray, NSDate, NSObject, NSString, NSURL, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDHomeInvitation : HMFObject
{
    long long _invitationState;	// 8 = 0x8
    HMDHome *_home;	// 16 = 0x10
    HMHomeInvitationData *_invitationData;	// 24 = 0x18
    NSUUID *_idsInvitationUUID;	// 32 = 0x20
    NSURL *_shareURL;	// 40 = 0x28
    CKDeviceToDeviceShareInvitationToken *_shareToken;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_clientQueue;	// 56 = 0x38
    CDUnknownBlockType _resolutionHandler;	// 64 = 0x40
    CDUnknownBlockType _expirationHandler;	// 72 = 0x48
    HMFTimer *_timer;	// 80 = 0x50
    NSArray *_operations;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000af2aa
- (void).cxx_destruct;	// IMP=0x00000000000aef39
@property(retain, nonatomic) NSArray *operations; // @synthesize operations=_operations;
@property(retain, nonatomic) HMFTimer *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) CDUnknownBlockType expirationHandler; // @synthesize expirationHandler=_expirationHandler;
@property(copy, nonatomic) CDUnknownBlockType resolutionHandler; // @synthesize resolutionHandler=_resolutionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(retain, nonatomic) CKDeviceToDeviceShareInvitationToken *shareToken; // @synthesize shareToken=_shareToken;
@property(retain, nonatomic) NSURL *shareURL; // @synthesize shareURL=_shareURL;
@property(retain, nonatomic) NSUUID *idsInvitationUUID; // @synthesize idsInvitationUUID=_idsInvitationUUID;
@property(retain, nonatomic) HMHomeInvitationData *invitationData; // @synthesize invitationData=_invitationData;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(nonatomic) long long invitationState; // @synthesize invitationState=_invitationState;
- (id)describeWithFormat;	// IMP=0x00000000000aec3e
- (void)_resolve:(_Bool)arg1;	// IMP=0x00000000000aea33
- (void)_clearTimer;	// IMP=0x00000000000ae97d
- (void)_configureTimer;	// IMP=0x00000000000ae831
- (void)expire;	// IMP=0x00000000000ae63d
- (void)decline;	// IMP=0x00000000000ae629
- (void)accept;	// IMP=0x00000000000ae612
- (void)updateTimer:(unsigned long long)arg1 clientQueue:(id)arg2;	// IMP=0x00000000000ae4ed
- (void)updateInvitationState:(long long)arg1;	// IMP=0x00000000000ae4a1
- (void)notifyStateChangedForMessage:(id)arg1;	// IMP=0x00000000000ae49b
@property(readonly, nonatomic, getter=isDeclined) _Bool declined;
@property(readonly, nonatomic, getter=isAccepted) _Bool accepted;
@property(readonly, nonatomic, getter=isPending) _Bool pending;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
@property(copy, nonatomic) NSDate *endDate;
@property(readonly, copy, nonatomic) NSDate *startDate;
@property(readonly, copy, nonatomic) NSUUID *identifier;
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000000ae23e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ae12e
- (id)initWithCoder:(id)arg1 invitationData:(id)arg2;	// IMP=0x00000000000ae022
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ae00e
- (_Bool)refreshDisplayName;	// IMP=0x00000000000ae006
- (id)initWithInvitationData:(id)arg1 forHome:(id)arg2;	// IMP=0x00000000000adf54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

