//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface GKChallengeService
{
}

+ (unsigned long long)requiredEntitlements;	// IMP=0x0020000000086971
+ (Class)interfaceClass;	// IMP=0x0010000000086960
- (oneway void)abortChallenges:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x002000000008b68d
- (oneway void)issueChallenge:(id)arg1 toPlayers:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008b2a1
- (oneway void)getChallengeDetailsForChallengeIDs:(id)arg1 receiverID:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000893f5
- (oneway void)getChallengeDetailsForChallengeIDs:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000893de
- (oneway void)getChallengesForGameDescriptor:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008843c
- (void)loadChallengesForGameDescriptor:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000087d0f
- (void)fetchChallengesForGameDescriptor:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000087979
- (void)_updateGamesForChallenges:(id)arg1 dispatchGroup:(id)arg2;	// IMP=0x00100000000875f3
- (void)_determineCompatibleGamesForChallenges:(id)arg1 dispatchGroup:(id)arg2;	// IMP=0x0010000000087061
- (id)_filterChallenges:(id)arg1 compatibleWithBundleID:(id)arg2;	// IMP=0x0010000000086eeb
- (void)_updatePlayersForChallenges:(id)arg1 dispatchGroup:(id)arg2;	// IMP=0x001000000008697c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
