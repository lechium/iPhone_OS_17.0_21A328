//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, MRDCommandClientRestriction, MRDPhoneCallObserver, MSVSystemDialog, NSArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface MRDRemoteControlServer : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSMutableDictionary *_commandQueuesForDisplayIDs;	// 16 = 0x10
    NSMutableSet *_pendingSendPlaybackSessionDisplayIDs;	// 24 = 0x18
    NSMutableDictionary *_remoteControlContexts;	// 32 = 0x20
    MRDPhoneCallObserver *_callObserver;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_remoteAlertWorkerQueue;	// 48 = 0x30
    int _fadeOutNotificationToken;	// 56 = 0x38
    NSMutableDictionary *_redirectionCache;	// 64 = 0x40
    MSVSystemDialog *_remoteControlDialog;	// 72 = 0x48
    MRDCommandClientRestriction *_commandClientsRestriction;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000019602
@property(retain, nonatomic) MRDCommandClientRestriction *commandClientsRestriction; // @synthesize commandClientsRestriction=_commandClientsRestriction;
- (id)_attributedCommand:(id)arg1 forClient:(id)arg2;	// IMP=0x001000000001901e
- (id)_onQueue_presentDialogWithTitle:(id)arg1 message:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000018dfc
- (void)_cleanUpPersistedSessionForSessionPreloadCommand:(id)arg1;	// IMP=0x0010000000018d58
- (id)_persistPlaybackSessionAndUpdateOptionsForSessionPreloadCommand:(id)arg1 forClient:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000018811
- (id)_populateApplicationSpecificDataForPrepareForSetQueueCommand:(id)arg1 forClient:(id)arg2;	// IMP=0x0010000000017fe6
- (void)_performCommandProcessingAfterSend:(id)arg1;	// IMP=0x0010000000017f99
- (id)_resolveCommandBeforeSend:(id)arg1 toClient:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000017ea4
- (id)_effectiveContextIDForCommand:(id)arg1;	// IMP=0x0010000000017db7
- (_Bool)_isCommandCacheable:(unsigned int)arg1;	// IMP=0x0010000000017d96
- (_Bool)_isCommandCacheCreating:(unsigned int)arg1;	// IMP=0x0010000000017d7a
- (MISSING_TYPE *)_createBroadcastCommandPlayerPathForClient: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000017cb4
- (id)_createBroadcastCommandResponseFromStatuses:(id)arg1 forClient:(id)arg2;	// IMP=0x0010000000017924
- (_Bool)_applicationIsRunning:(id)arg1;	// IMP=0x001000000001775b
- (void)_shouldIgnoreCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001728f
- (id)_contextuallyAwareDestinationAppDisplayIDForCommand:(id)arg1;	// IMP=0x001000000001701a
- (id)_remoteControlContextForCommand:(id)arg1;	// IMP=0x0010000000016db9
- (id)_destinationClientForRemoteControlCommand:(id)arg1;	// IMP=0x0010000000016b10
- (id)_resolvedLocalDeviceDestinationAppDisplayIdentifierForCommand:(id)arg1;	// IMP=0x00100000000169ae
- (id)_enqueuedCommandsForDisplayID:(id)arg1;	// IMP=0x001000000001686a
- (void)_clearAllQueuedCommandsForReason:(id)arg1;	// IMP=0x00100000000163d4
- (_Bool)_clearQueuedCommand:(id)arg1 forUnavailableApplicationWithDisplayID:(id)arg2;	// IMP=0x0010000000016206
- (void)_sendQueuedCommandsForDestinationClient:(id)arg1;	// IMP=0x0010000000015e1e
- (void)_enqueueCommand:(id)arg1 forUnavailableApplicationWithDisplayID:(id)arg2;	// IMP=0x0010000000015868
- (void)_enqueueCommand:(id)arg1 forApplication:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000015110
- (void)_sendRemoteControlCommand:(id)arg1 toDestinationClient:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000149a4
- (void)_sendRemoteControlCommand:(id)arg1 toDestinationClient:(id)arg2 withLegacyCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000014884
- (void)_sendExternalCommand:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000146d0
- (void)_sendLocalCommand:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000013fb9
- (void)_forwardCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000013ee9
- (void)phoneCallObserver:(id)arg1 callDidChange:(id)arg2;	// IMP=0x0010000000013e73
- (void)_handlePlayerIsPlayingDidChangeNotification:(id)arg1;	// IMP=0x0010000000013cd9
- (void)_clientDidConnectNotification:(id)arg1;	// IMP=0x0010000000013c8a
- (void)_handleRestrictCommandClientsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000001371b
- (void)_handleTriggerAudioFadeMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000012cd1
- (void)_handleSendPlaybackSessionMigrateEndMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000012b58
- (void)_handleSendPlaybackSessionMigrateBeginMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000129d7
- (void)_handleSendPlaybackSessionMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000120a0
- (void)_handleGetPendingCommandsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000011bb7
- (void)_handlePresentMediaControlsLanguageOptionsCommandMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000118ab
- (void)_handleDismissMediaControlsCommandMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000001176e
- (void)_handlePresentMediaControlsCommandMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000011585
- (void)_handlePrewarmMediaControlsCommandMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000112dc
- (void)_handleBroadcastCommandMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000000110b4
- (void)_handleSendCommandMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000010bce
- (void)collectDiagnostic:(id)arg1;	// IMP=0x0010000000010abd
- (void)handleXPCMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000010a2d
@property(readonly, nonatomic) NSArray *remoteControlClients;
- (void)clearContextsForClient:(id)arg1;	// IMP=0x00100000000104ef
- (void)sendRemoteControlCommand:(id)arg1 toClients:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000f839
- (void)broadcastRemoteControlCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000f730
- (void)broadcastRemoteControlCommand:(id)arg1;	// IMP=0x001000000000f71c
- (void)_sendRemoteControlCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000e330
- (void)sendRemoteControlCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000de93
- (void)sendRemoteControlCommand:(id)arg1;	// IMP=0x001000000000de7f
- (void)dealloc;	// IMP=0x001000000000ddf6
- (id)init;	// IMP=0x001000000000dc05

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
