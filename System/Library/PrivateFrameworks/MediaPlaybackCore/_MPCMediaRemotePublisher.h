//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlaybackEngine, MPLibraryAddStatusObserver, MPNowPlayingInfoCenter, MPRemoteCommandCenter, MSVBlockGuard, NSArray, NSDictionary, NSString, _MPCMediaRemotePublisher_Swift;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _MPCMediaRemotePublisher : NSObject
{
    MPLibraryAddStatusObserver *_libraryAddStatusObserver;	// 8 = 0x8
    struct os_unfair_lock_s _libraryAddStatusObserverLock;	// 16 = 0x10
    NSArray *_accounts;	// 24 = 0x18
    _Bool _activeAccountAllowsSubscriptionPlayback;	// 32 = 0x20
    _Bool _activeAccountRequiresAuthorizationTokensForPlayback;	// 33 = 0x21
    NSString *_activeAccountStoreFrontIdentifier;	// 40 = 0x28
    _Bool _hasBeganFastForward;	// 48 = 0x30
    _Bool _hasBeganRewind;	// 49 = 0x31
    NSObject<OS_dispatch_source> *_nextPreviousTrackCooldownTimer;	// 56 = 0x38
    long long _deferredTrackChangeDelta;	// 64 = 0x40
    NSArray *_lastCommandDescriptions;	// 72 = 0x48
    MSVBlockGuard *_setPlaybackQueueExtendedTimeGuard;	// 80 = 0x50
    _Bool _initializedSupportedCommands;	// 88 = 0x58
    _Bool _engineRestoringState;	// 89 = 0x59
    _Bool _mediaServerAvailable;	// 90 = 0x5a
    MPCPlaybackEngine *_playbackEngine;	// 96 = 0x60
    MPNowPlayingInfoCenter *_infoCenter;	// 104 = 0x68
    MPRemoteCommandCenter *_commandCenter;	// 112 = 0x70
    NSString *_hostingSharedSessionID;	// 120 = 0x78
    _MPCMediaRemotePublisher_Swift *_swift;	// 128 = 0x80
    NSDictionary *_lastPerformanceMetrics;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x000000000017140d
@property(retain, nonatomic) NSDictionary *lastPerformanceMetrics; // @synthesize lastPerformanceMetrics=_lastPerformanceMetrics;
@property(nonatomic, getter=isMediaServerAvailable) _Bool mediaServerAvailable; // @synthesize mediaServerAvailable=_mediaServerAvailable;
@property(nonatomic, getter=isEngineRestoringState) _Bool engineRestoringState; // @synthesize engineRestoringState=_engineRestoringState;
@property(readonly, nonatomic) _MPCMediaRemotePublisher_Swift *swift; // @synthesize swift=_swift;
@property(readonly, copy, nonatomic) NSString *hostingSharedSessionID; // @synthesize hostingSharedSessionID=_hostingSharedSessionID;
@property(readonly, nonatomic) MPRemoteCommandCenter *commandCenter; // @synthesize commandCenter=_commandCenter;
@property(readonly, nonatomic) MPNowPlayingInfoCenter *infoCenter; // @synthesize infoCenter=_infoCenter;
@property(nonatomic, getter=hasInitializedSupportedCommands) _Bool initializedSupportedCommands; // @synthesize initializedSupportedCommands=_initializedSupportedCommands;
@property(readonly, nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
- (unsigned long long)vocalAttenuationUnavailabilityReasons;	// IMP=0x00000000001711a6
- (void)performSetQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000017109f
- (void)performSetQueueWithIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000170fdc
- (void)_performCommandEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000016bf59
- (void)_beginBackgroundTaskUntilPlayCommandWithCommand:(id)arg1 timeout:(double)arg2;	// IMP=0x000000000016be94
- (void)_performDebugEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000016bac4
- (void)_updateSupportedCommands;	// IMP=0x000000000016618e
- (void)_updateLaunchCommands;	// IMP=0x0000000000166147
- (id)_supportedSessionTypes;	// IMP=0x0000000000165e99
- (id)_exportableSessionTypes;	// IMP=0x0000000000165a06
- (void)_enqueueFallbackIntentIfNeededForCommandEvent:(id)arg1 play:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001655e3
- (void)deactivateAudioSessionIfIdle:(long long)arg1;	// IMP=0x0000000000165575
- (void)becomeActiveIfNeededWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000165007
- (void)_hostingSharedSessionDidChange:(id)arg1;	// IMP=0x0000000000164fc0
- (void)_likedStateChangedNotification:(id)arg1;	// IMP=0x0000000000164fae
- (void)_durationAvailableNotification:(id)arg1;	// IMP=0x0000000000164f9c
- (void)_commandEventDidTimeoutNotification:(id)arg1;	// IMP=0x0000000000164e38
- (void)nowPlayingInfoCenter:(id)arg1 didEndLyricsEvent:(id)arg2;	// IMP=0x000000000016481e
- (void)nowPlayingInfoCenter:(id)arg1 didBeginLyricsEvent:(id)arg2;	// IMP=0x000000000016469e
- (void)invalidateSessionTypesWithReason:(id)arg1;	// IMP=0x00000000001645cb
- (void)invalidateQueueTypesWithReason:(id)arg1;	// IMP=0x00000000001644f8
- (void)engine:(id)arg1 didChangeQueueController:(id)arg2;	// IMP=0x00000000001644c6
- (void)engine:(id)arg1 didReceivePickedRouteChange:(id)arg2;	// IMP=0x00000000001644b4
- (void)engineDidUnblockVocalAttenuation:(id)arg1;	// IMP=0x00000000001644a2
- (void)engineDidBlockVocalAttenuation:(id)arg1;	// IMP=0x00000000001643d7
- (void)engineDidChangeVocalAttenuationLevel:(id)arg1;	// IMP=0x00000000001643c5
- (void)engineDidChangeVocalAttenuationState:(id)arg1;	// IMP=0x00000000001643b3
- (void)engineDidResetMediaServices:(id)arg1;	// IMP=0x00000000001643a9
- (void)engineDidLoseMediaServices:(id)arg1;	// IMP=0x000000000016439f
- (void)engineDidEndStateRestoration:(id)arg1;	// IMP=0x0000000000164395
- (void)engineWillBeginStateRestoration:(id)arg1;	// IMP=0x000000000016438b
- (void)engine:(id)arg1 didChangeCurrentItemVariantID:(id)arg2;	// IMP=0x0000000000164379
- (void)engine:(id)arg1 didChangeActionAtQueueEnd:(long long)arg2;	// IMP=0x0000000000164318
- (void)engine:(id)arg1 didChangeShuffleType:(long long)arg2;	// IMP=0x00000000001642c8
- (void)engine:(id)arg1 didChangeRepeatType:(long long)arg2;	// IMP=0x0000000000164278
- (void)engine:(id)arg1 didChangeQueueWithReason:(id)arg2;	// IMP=0x0000000000164198
- (void)engine:(id)arg1 didChangeToState:(unsigned long long)arg2;	// IMP=0x000000000016417f
- (void)engine:(id)arg1 didAchieveLikelyToKeepUpWithItem:(id)arg2;	// IMP=0x000000000016416d
- (void)engine:(id)arg1 didChangeToItem:(id)arg2;	// IMP=0x000000000016412f
- (void)accountManager:(id)arg1 didChangeAccounts:(id)arg2;	// IMP=0x0000000000163ea5
- (void)updatePlaybackMetrics:(id)arg1;	// IMP=0x0000000000163d3c
- (void)_leaveSharedSessionWithCommandID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000163a9b
- (void)leaveSharedSessionWithCommandID:(id)arg1 remoteControlInterface:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001637d6
- (void)getShouldRestoreStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001636e1
- (void)reportUserBackgroundedApplication;	// IMP=0x0000000000163651
- (void)publishIfNeeded;	// IMP=0x0000000000162410
- (void)becomeActive;	// IMP=0x00000000001623fa
- (void)dealloc;	// IMP=0x0000000000162371
- (id)initWithPlaybackEngine:(id)arg1;	// IMP=0x0000000000161fa2
- (id)participantsForNowPlayingInfoCenter:(id)arg1;	// IMP=0x000000000017957c
- (void)nowPlayingInfoCenter:(id)arg1 didEndMigrationWithIdentifier:(id)arg2 error:(id)arg3;	// IMP=0x00000000001792ee
- (void)nowPlayingInfoCenter:(id)arg1 willBeginSessionMigrationWithIdentifier:(id)arg2;	// IMP=0x00000000001791da
- (void)nowPlayingInfoCenter:(id)arg1 getTransportablePlaybackSessionRepresentationForRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000179120
- (id)nowPlayingInfoCenter:(id)arg1 lyricsForContentItem:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000178fc4
- (id)nowPlayingInfoCenter:(id)arg1 artworkCatalogForContentItem:(id)arg2;	// IMP=0x0000000000178e69
- (id)nowPlayingInfoCenter:(id)arg1 infoForContentItem:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000178cae
- (id)nowPlayingInfoCenter:(id)arg1 remoteArtworkForContentItem:(id)arg2 format:(id)arg3 size:(struct CGSize)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000178ae4
- (id)nowPlayingInfoCenter:(id)arg1 artworkForContentItem:(id)arg2 size:(struct CGSize)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000178939
- (id)nowPlayingInfoCenter:(id)arg1 contentItemForID:(id)arg2;	// IMP=0x000000000017887a
- (id)nowPlayingInfoCenter:(id)arg1 contentItemIDsFromOffset:(long long)arg2 toOffset:(long long)arg3 nowPlayingIndex:(long long *)arg4;	// IMP=0x00000000001787cf
- (id)nowPlayingInfoCenter:(id)arg1 contentItemIDForOffset:(long long)arg2;	// IMP=0x000000000017873e
- (id)playbackQueueIdentifierForNowPlayingInfoCenter:(id)arg1;	// IMP=0x00000000001786c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
