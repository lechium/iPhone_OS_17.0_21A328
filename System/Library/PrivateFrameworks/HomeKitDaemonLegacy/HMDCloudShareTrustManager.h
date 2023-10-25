//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMBCloudZone, HMBLocalZone, HMBShareUserID, HMDCloudShareMessenger, HMDCloudShareParticipantsManager, HMDCloudShareTrustManagerMetricsEventDispatcher, HMFTimer, NSObject, NSString;
@protocol HMDCloudShareTrustManagerDataSource, HMDCloudShareTrustManagerDelegate, HMDDatabase, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCloudShareTrustManager : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _ownedTrust;	// 12 = 0xc
    long long _configureState;	// 16 = 0x10
    id <HMDCloudShareTrustManagerDataSource> _dataSource;	// 24 = 0x18
    id <HMDCloudShareTrustManagerDelegate> _delegate;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    id <HMDDatabase> _database;	// 48 = 0x30
    HMDCloudShareMessenger *_cloudShareMessenger;	// 56 = 0x38
    HMBCloudZone *_cloudZone;	// 64 = 0x40
    HMBLocalZone *_localZone;	// 72 = 0x48
    HMDCloudShareParticipantsManager *_cloudShareParticipantManager;	// 80 = 0x50
    HMFTimer *_requestInviteTimer;	// 88 = 0x58
    HMDCloudShareTrustManagerMetricsEventDispatcher *_metricsEventDispatcher;	// 96 = 0x60
    HMBShareUserID *_ownerCloudShareID;	// 104 = 0x68
    CDUnknownBlockType _participantsManagerFactory;	// 112 = 0x70
    CDUnknownBlockType _requestInviteTimerFactory;	// 120 = 0x78
}

+ (id)logCategory;	// IMP=0x001000000027fdbc
- (void).cxx_destruct;	// IMP=0x000000000027e737
@property(copy) CDUnknownBlockType requestInviteTimerFactory; // @synthesize requestInviteTimerFactory=_requestInviteTimerFactory;
@property(copy) CDUnknownBlockType participantsManagerFactory; // @synthesize participantsManagerFactory=_participantsManagerFactory;
@property(retain) HMBShareUserID *ownerCloudShareID; // @synthesize ownerCloudShareID=_ownerCloudShareID;
@property(retain) HMDCloudShareTrustManagerMetricsEventDispatcher *metricsEventDispatcher; // @synthesize metricsEventDispatcher=_metricsEventDispatcher;
@property(retain) HMFTimer *requestInviteTimer; // @synthesize requestInviteTimer=_requestInviteTimer;
@property(retain) HMDCloudShareParticipantsManager *cloudShareParticipantManager; // @synthesize cloudShareParticipantManager=_cloudShareParticipantManager;
@property(retain) HMBLocalZone *localZone; // @synthesize localZone=_localZone;
@property(retain) HMBCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property(readonly, getter=isOwnedTrust) _Bool ownedTrust; // @synthesize ownedTrust=_ownedTrust;
@property(readonly) HMDCloudShareMessenger *cloudShareMessenger; // @synthesize cloudShareMessenger=_cloudShareMessenger;
@property(readonly) id <HMDDatabase> database; // @synthesize database=_database;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property __weak id <HMDCloudShareTrustManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak id <HMDCloudShareTrustManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)timerDidFire:(id)arg1;	// IMP=0x000000000027e1b6
- (void)_cancelRequestInviteTimer;	// IMP=0x000000000027e161
- (void)_startRequestInviteTimer;	// IMP=0x000000000027dea3
- (id)attributeDescriptions;	// IMP=0x000000000027dd14
- (id)logIdentifier;	// IMP=0x000000000027dcb5
- (void)_didRemoveZone;	// IMP=0x000000000027db2b
- (void)database:(id)arg1 didRemoveZoneWithName:(id)arg2 isPrivate:(_Bool)arg3;	// IMP=0x000000000027da0d
- (void)_didCreateZone;	// IMP=0x000000000027d803
- (void)database:(id)arg1 didCreateZoneWithName:(id)arg2 isPrivate:(_Bool)arg3;	// IMP=0x000000000027d6e5
- (struct CloudShareTrustManagerTrustStatusCounts)trustStatusCountsForCloudShareTrustManagerMetricsEventDispatcher:(id)arg1;	// IMP=0x000000000027d6c6
- (long long)trustConfigureStateForCloudShareTrustManagerMetricsEventDispatcher:(id)arg1;	// IMP=0x000000000027d6b4
- (_Bool)isFromOwnerForCloudShareTrustManagerMetricsEventDispatcher:(id)arg1;	// IMP=0x000000000027d6a2
- (id)homeForCloudShareTrustManagerMetricsEventDispatcher:(id)arg1;	// IMP=0x000000000027d643
- (struct CloudShareTrustManagerTrustStatusCounts)trustStatusCounts;	// IMP=0x000000000027d0cb
- (_Bool)isFromOwner;	// IMP=0x000000000027d029
- (_Bool)canUseUntrustedAccountHandlesForParticipantManager:(id)arg1;	// IMP=0x000000000027d021
- (void)manager:(id)arg1 didRevokeShareAccessForUser:(id)arg2;	// IMP=0x000000000027d01b
- (void)manager:(id)arg1 didRequestSendForInvitation:(id)arg2 toDevice:(id)arg3;	// IMP=0x000000000027cf84
- (void)manager:(id)arg1 didRequestSendForInvitation:(id)arg2 toUser:(id)arg3;	// IMP=0x000000000027ceec
- (_Bool)manager:(id)arg1 shouldShareWithUser:(id)arg2;	// IMP=0x000000000027ce3e
- (void)messengerDidReceiveShareAccessRevocation:(id)arg1;	// IMP=0x000000000027ce38
- (void)messenger:(id)arg1 didReceiveInvitationData:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000027c9bf
- (void)messenger:(id)arg1 didReceiveInvitationRequestFromUser:(id)arg2 device:(id)arg3;	// IMP=0x000000000027c7f4
- (id)localZone:(id)arg1 didProcessModelUpdate:(id)arg2;	// IMP=0x000000000027c6cc
- (id)localZone:(id)arg1 didProcessModelDeletion:(id)arg2;	// IMP=0x000000000027c5a4
- (id)localZone:(id)arg1 didProcessModelCreation:(id)arg2;	// IMP=0x000000000027c47c
- (void)cloudZone:(id)arg1 didRemoveParticipantWithClientIdentifier:(id)arg2;	// IMP=0x000000000027c351
- (void)cloudZone:(id)arg1 didUpdateParticipantWithClientIdentifier:(id)arg2;	// IMP=0x000000000027c0c7
@property long long configureState; // @synthesize configureState=_configureState;
- (void)_homeDidBecomeTrustZoneCapable:(id)arg1;	// IMP=0x000000000027bd41
- (void)homeDidBecomeTrustZoneCapable:(id)arg1;	// IMP=0x000000000027bc89
- (void)sendShareInvitation:(id)arg1 toUser:(id)arg2 device:(id)arg3;	// IMP=0x000000000027b752
- (void)discoverUntrustedUsers;	// IMP=0x000000000027b0fc
- (void)updateCloudShareIDForUser:(id)arg1;	// IMP=0x000000000027ada0
- (void)updateCloudShareIDForAllUsers;	// IMP=0x000000000027abe9
- (void)updateCurrentUserCloudShareID;	// IMP=0x000000000027aa5d
- (void)removeTrust;	// IMP=0x000000000027a607
- (_Bool)isTrustConfigured;	// IMP=0x000000000027a5ed
- (void)_finishConfigure;	// IMP=0x000000000027a472
- (void)_configureOwnerCloudShareIDWithCloudZone:(id)arg1;	// IMP=0x000000000027a234
- (void)_configureWithFetchZoneResult:(id)arg1 error:(id)arg2;	// IMP=0x0000000000279c97
- (void)_requestShareInvitationForSharedZone;	// IMP=0x0000000000279974
- (void)_configureWithSharedZone;	// IMP=0x0000000000279669
- (void)_configureWithOwnedZone;	// IMP=0x0000000000279523
- (void)_configure;	// IMP=0x000000000027926b
- (void)configure;	// IMP=0x0000000000279184
- (id)initWithDatabase:(id)arg1 isOwnedTrust:(_Bool)arg2 queue:(id)arg3 shareMessenger:(id)arg4 ownerCloudShareID:(id)arg5 logEventSubmitter:(id)arg6 dailyScheduler:(id)arg7;	// IMP=0x0000000000278f53

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
