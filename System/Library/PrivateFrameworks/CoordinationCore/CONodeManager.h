//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class COBallotBrowser, COConstituent, COElectionInfo, COExecutionContext, COMeshNode, NSArray, NSError, NSMutableArray, NSMutableDictionary, NSSet, NSString;
@protocol CONodeManagerDelegate, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface CONodeManager : NSObject
{
    _Bool _started;	// 8 = 0x8
    _Bool _isInElection;	// 9 = 0x9
    id <CONodeManagerDelegate> _delegate;	// 16 = 0x10
    COExecutionContext *_executionContext;	// 24 = 0x18
    COConstituent *_leader;	// 32 = 0x20
    NSSet *_acceptableCommands;	// 40 = 0x28
    COBallotBrowser *_ballotBrowser;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_electionElapsedTimer;	// 56 = 0x38
    unsigned long long _electionPrevious;	// 64 = 0x40
    unsigned long long _electionStart;	// 72 = 0x48
    unsigned long long _electionEnd;	// 80 = 0x50
    unsigned long long _longestBackOff;	// 88 = 0x58
    COConstituent *_longestBackedOffConstituent;	// 96 = 0x60
    NSMutableDictionary *_browsersObservers;	// 104 = 0x68
    NSMutableDictionary *_nodeControllers;	// 112 = 0x70
    COElectionInfo *_electionInfo;	// 120 = 0x78
    NSError *_error;	// 128 = 0x80
    NSMutableArray *_pendingDiscoveryRecords;	// 136 = 0x88
    NSMutableDictionary *_leaderCommands;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000000064200
@property(retain, nonatomic) NSMutableDictionary *leaderCommands; // @synthesize leaderCommands=_leaderCommands;
@property(retain, nonatomic) NSMutableArray *pendingDiscoveryRecords; // @synthesize pendingDiscoveryRecords=_pendingDiscoveryRecords;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) COElectionInfo *electionInfo; // @synthesize electionInfo=_electionInfo;
@property(retain, nonatomic) NSMutableDictionary *nodeControllers; // @synthesize nodeControllers=_nodeControllers;
@property(readonly, nonatomic) NSMutableDictionary *browsersObservers; // @synthesize browsersObservers=_browsersObservers;
@property(nonatomic) _Bool isInElection; // @synthesize isInElection=_isInElection;
@property(retain, nonatomic) COConstituent *longestBackedOffConstituent; // @synthesize longestBackedOffConstituent=_longestBackedOffConstituent;
@property(nonatomic) unsigned long long longestBackOff; // @synthesize longestBackOff=_longestBackOff;
@property(nonatomic) unsigned long long electionEnd; // @synthesize electionEnd=_electionEnd;
@property(nonatomic) unsigned long long electionStart; // @synthesize electionStart=_electionStart;
@property(nonatomic) unsigned long long electionPrevious; // @synthesize electionPrevious=_electionPrevious;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *electionElapsedTimer; // @synthesize electionElapsedTimer=_electionElapsedTimer;
@property(retain, nonatomic) COBallotBrowser *ballotBrowser; // @synthesize ballotBrowser=_ballotBrowser;
@property(retain, nonatomic) NSSet *acceptableCommands; // @synthesize acceptableCommands=_acceptableCommands;
@property(retain, nonatomic) COConstituent *leader; // @synthesize leader=_leader;
@property(copy, nonatomic) COExecutionContext *executionContext; // @synthesize executionContext=_executionContext;
@property(nonatomic) __weak id <CONodeManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_logElectionSummary;	// IMP=0x000000000006390b
- (id)_constituentCharacteristics:(id)arg1;	// IMP=0x000000000006388a
- (void)_checkForElectionCompletion:(id)arg1 nodeController:(id)arg2;	// IMP=0x0000000000063136
- (void)_nodeStartedElection:(id)arg1 withElectionInfo:(id)arg2;	// IMP=0x0000000000062ea4
- (void)_nodeBecameInactive:(id)arg1 withReason:(long long)arg2;	// IMP=0x0000000000062ada
- (void)_nodeStopped:(id)arg1 withReason:(long long)arg2;	// IMP=0x0000000000062924
- (void)_handleLostRecord:(id)arg1;	// IMP=0x00000000000627fe
- (void)_handleDiscoveryRecord:(id)arg1;	// IMP=0x00000000000621b7
- (void)_informControllersAboutNewElectionInfo;	// IMP=0x0000000000062047
- (void)_reportLostLeader:(id)arg1 withReason:(long long)arg2;	// IMP=0x000000000006105e
- (void)_handleEnqueuedCommandsForLostNode:(id)arg1 error:(id)arg2;	// IMP=0x0000000000060cc9
- (_Bool)_updateBallot:(id)arg1;	// IMP=0x00000000000609f1
- (void)_resetBallot;	// IMP=0x00000000000607e4
- (void)_bumpGeneration;	// IMP=0x000000000006062d
- (void)backedOffNodeMovedOutOfElection:(id)arg1;	// IMP=0x000000000006050f
- (void)nodeController:(id)arg1 didReceiveOnDemandNodeCreationRequest:(id)arg2;	// IMP=0x00000000000604a6
- (void)nodeController:(id)arg1 didRemoveTransport:(id)arg2 withError:(id)arg3;	// IMP=0x000000000005fc5e
- (void)nodeController:(id)arg1 didAddTransport:(id)arg2;	// IMP=0x000000000005f956
- (void)nodeController:(id)arg1 didUpdateRemoteConstituent:(id)arg2 to:(id)arg3;	// IMP=0x000000000005f48f
- (void)nodeController:(id)arg1 didReceiveError:(id)arg2 forCommand:(id)arg3;	// IMP=0x000000000005f252
- (void)nodeController:(id)arg1 didReceiveRequest:(id)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x000000000005f05f
- (void)nodeController:(id)arg1 didReceiveCommand:(id)arg2;	// IMP=0x000000000005eee4
- (void)nodeController:(id)arg1 didReceiveElectionCmd:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005e3bc
- (void)nodeController:(id)arg1 didUpdateState:(long long)arg2 to:(long long)arg3 reason:(long long)arg4 withLastSentElectionInfo:(id)arg5;	// IMP=0x000000000005dfc4
- (void)_didLoseRecord:(id)arg1;	// IMP=0x000000000005de96
- (void)_didDiscoverRecord:(id)arg1;	// IMP=0x000000000005de1c
- (id)activeNodesWithSelfNode:(_Bool)arg1;	// IMP=0x000000000005db89
@property(readonly, nonatomic) NSArray *nodes;
- (id)nodeControllerForIDS:(id)arg1;	// IMP=0x000000000005d926
- (id)nodeControllerForConstituent:(id)arg1;	// IMP=0x000000000005d6af
@property(readonly, nonatomic) COMeshNode *nodeForMe;
@property(readonly, nonatomic) COConstituent *me;
- (void)pingLeader;	// IMP=0x000000000005d4b6
- (void)sendCommand:(id)arg1;	// IMP=0x000000000005cf3a
- (void)sendCommands:(id)arg1;	// IMP=0x000000000005cd92
- (void)removeBrowser:(id)arg1;	// IMP=0x000000000005ccfa
- (void)addBrowser:(id)arg1;	// IMP=0x000000000005cc39
- (void)stopWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000005c052
- (void)start;	// IMP=0x000000000005baba
@property(readonly, copy) NSString *description;
- (id)shortDescription;	// IMP=0x000000000005b927
- (id)initWithExecutionContext:(id)arg1;	// IMP=0x000000000005b7f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

