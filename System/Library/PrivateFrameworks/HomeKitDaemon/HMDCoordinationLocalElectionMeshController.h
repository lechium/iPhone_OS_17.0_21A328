//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoordinationCore/COMeshController.h>

@class NSArray, NSString;
@protocol HMDLocalElectionMeshControllerDelegate, HMDLocalElectionMeshNode;

__attribute__((visibility("hidden")))
@interface HMDCoordinationLocalElectionMeshController : COMeshController
{
    id <HMDLocalElectionMeshControllerDelegate> delegate;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x0010000000aece05
- (void).cxx_destruct;	// IMP=0x0000000000aec311
@property(nonatomic) __weak id <HMDLocalElectionMeshControllerDelegate> delegate; // @synthesize delegate;
- (void)meshControllerDidUpdatesNodes;	// IMP=0x0000000000aec26d
- (void)meshControllerDidStartElection;	// IMP=0x0000000000aec1f6
- (void)meshControllerDidElectLeader;	// IMP=0x0000000000aec17f
- (id)logIdentifier;	// IMP=0x0000000000aec113
- (id)debugDescriptionForMeshState;	// IMP=0x0000000000aec075
- (id)debugDescriptionForControllerType;	// IMP=0x0000000000aebf60
@property(readonly) NSArray *meshNodes;
@property(readonly) id <HMDLocalElectionMeshNode> leaderNode;
@property(readonly) _Bool isProcessing;
@property(readonly) _Bool isLeader;
- (void)sendPingRequestToNode:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000aebb09
- (id)meshNodeFor:(id)arg1;	// IMP=0x0000000000aeba03
- (void)sendPingNotificationToFollowersWithPrimaryResident:(id)arg1;	// IMP=0x0000000000aeb964
- (void)sendPingCommandToLeaderWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000aeb887
- (void)stop;	// IMP=0x0000000000aeb829
- (void)startMeshWithName:(id)arg1;	// IMP=0x0000000000aeb7a2
- (void)_setupMessageRegistrations;	// IMP=0x0000000000aeb617
- (id)initWithQueue:(id)arg1;	// IMP=0x0000000000aeb505

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

