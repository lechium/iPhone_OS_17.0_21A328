//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, MRDFastSyncGroupSessionParticipant, NSString;

@interface MRDFastSyncGroupSession : NSObject
{
    MISSING_TYPE *pushMessenger;	// 8 = 0x8
    MISSING_TYPE *sessionCancellables;	// 16 = 0x10
    MISSING_TYPE *cancellables;	// 24 = 0x18
    MISSING_TYPE *provider;	// 32 = 0x20
    MISSING_TYPE *groupSession;	// 40 = 0x28
    MISSING_TYPE *presenceDataSource;	// 48 = 0x30
    MISSING_TYPE *groupMessenger;	// 56 = 0x38
    MISSING_TYPE *executionQueue;	// 64 = 0x40
    MISSING_TYPE *notificationQueue;	// 72 = 0x48
    MISSING_TYPE *_state;	// 80 = 0x50
    MISSING_TYPE *leaderParticipant;	// 88 = 0x58
    MISSING_TYPE *delegate;	// 96 = 0x60
    MISSING_TYPE *isLeader;	// 104 = 0x68
    MISSING_TYPE *identifier;	// 112 = 0x70
    MISSING_TYPE *localParticipantIdentifier;	// 128 = 0x80
    MISSING_TYPE *leaderParticipantIdentifier;	// 144 = 0x90
    MISSING_TYPE *localFastSyncIdentifier;	// 160 = 0xa0
    MISSING_TYPE *leaderFastSyncIdentifier;	// 176 = 0xb0
    MISSING_TYPE *localHandle;	// 192 = 0xc0
    MISSING_TYPE *leaderHandle;	// 208 = 0xd0
    MISSING_TYPE *participantHandleToMediaRemoteIdentifierMap;	// 224 = 0xe0
    MISSING_TYPE *participantIdentityMap;	// 232 = 0xe8
    MISSING_TYPE *identities;	// 240 = 0xf0
    MISSING_TYPE *connectionManager;	// 248 = 0xf8
    MISSING_TYPE *localIdentity;	// 256 = 0x100
    MISSING_TYPE *prewarmedParticipantIdentifiers;	// 264 = 0x108
    MISSING_TYPE *presenceTask;	// 272 = 0x110
    MISSING_TYPE *observeSessionTask;	// 280 = 0x118
    MISSING_TYPE *leaderDiscoveryTimer;	// 288 = 0x120
    MISSING_TYPE *expectedRealtimeParticipants;	// 296 = 0x128
    MISSING_TYPE *isLowPowerMode;	// 304 = 0x130
    MISSING_TYPE *lowPowerCompletion;	// 312 = 0x138
    MISSING_TYPE *hasEncounteredLowPowerError;	// 328 = 0x148
    MISSING_TYPE *removedParticipantIdentityIdentifiers;	// 336 = 0x150
    MISSING_TYPE *participantHandleToPresenceTimeoutTimerMap;	// 344 = 0x158
    MISSING_TYPE *timedOutParticipantHandles;	// 352 = 0x160
}

+ (id)stateToString:(long long)arg1;	// IMP=0x0020000000155ad0
+ (id)joinSessionWithNearbyGroup:(id)arg1 asUser:(id)arg2 hostSigningKey:(id)arg3 delegate:(id)arg4;	// IMP=0x0010000000155930
+ (id)createSessionWithNearbyGroup:(id)arg1 asUser:(id)arg2 delegate:(id)arg3;	// IMP=0x00100000001558a0
- (void).cxx_destruct;	// IMP=0x00400000001580e0
- (id)init;	// IMP=0x001000000017b0c0
- (void)sendRemoteControlMessage:(id)arg1 to:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000017af70
- (void)exitLowPowerModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000001616f0
- (void)enterLowPowerModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000015ebc0
- (void)removeParticipantWithIdentifier:(id)arg1;	// IMP=0x001000000015c290
- (_Bool)shouldAutomaticallyApproveWithIdentity:(id)arg1;	// IMP=0x001000000015ab30
- (void)prepareForAddedMember;	// IMP=0x001000000015a870
- (void)cancelPrewarmedIdentifier:(id)arg1 forIdentity:(id)arg2;	// IMP=0x001000000015a3d0
- (id)prewarmForIdentity:(id)arg1;	// IMP=0x001000000015a1f0
- (void)end;	// IMP=0x001000000015a000
- (void)start;	// IMP=0x0010000000158320
- (void)dealloc;	// IMP=0x00100000001580c0
@property(nonatomic, readonly) NSString *identifier;
@property(nonatomic, retain) MRDFastSyncGroupSessionParticipant *leaderParticipant; // @synthesize leaderParticipant;
@property(nonatomic, readonly) MRDFastSyncGroupSessionParticipant *localParticipant;
@property(nonatomic, readonly) long long state;

@end

