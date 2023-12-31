//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVObservationController, AVPictureInPicturePrerollAttributes, AVPictureInPictureViewController, AVPlayerController, AVPlayerControllerTimeResolver, AVSecondScreenConnection, NSString, NSTimer, PGPictureInPictureProxy, UIWindow;
@protocol AVPictureInPictureContentSource, AVPictureInPicturePlatformAdapterDelegate;

__attribute__((visibility("hidden")))
@interface AVPictureInPicturePlatformAdapter : NSObject
{
    AVPlayerControllerTimeResolver *_timeResolver;	// 8 = 0x8
    _Bool _allowsPictureInPicturePlayback;	// 16 = 0x10
    _Bool _alwaysStartsAutomaticallyWhenEnteringBackground;	// 17 = 0x11
    _Bool _canStartAutomaticallyWhenEnteringBackground;	// 18 = 0x12
    _Bool _canPausePlaybackWhenClosingPictureInPicture;	// 19 = 0x13
    _Bool _requiresLinearPlayback;	// 20 = 0x14
    _Bool _microphoneEnabled;	// 21 = 0x15
    _Bool _managesWiredSecondScreenPlayback;	// 22 = 0x16
    _Bool _anyPictureInPictureActive;	// 23 = 0x17
    _Bool _scrubbingOrSeeking;	// 24 = 0x18
    _Bool _scrubbing;	// 25 = 0x19
    _Bool _seeking;	// 26 = 0x1a
    _Bool _interruptedForAudioSession;	// 27 = 0x1b
    _Bool _wasPlayingWhenSuspended;	// 28 = 0x1c
    _Bool _routingVideoToHostedWindow;	// 29 = 0x1d
    id <AVPictureInPicturePlatformAdapterDelegate> _delegate;	// 32 = 0x20
    AVPlayerController *_playerController;	// 40 = 0x28
    long long _controlsStyle;	// 48 = 0x30
    AVPictureInPicturePrerollAttributes *_prerollAttributes;	// 56 = 0x38
    NSString *_activitySessionIdentifier;	// 64 = 0x40
    long long _backgroundPlaybackPolicy;	// 72 = 0x48
    AVPictureInPictureViewController *_pictureInPictureViewController;	// 80 = 0x50
    long long _status;	// 88 = 0x58
    PGPictureInPictureProxy *_pegasusProxy;	// 96 = 0x60
    NSTimer *_layoutCheckTimer;	// 104 = 0x68
    AVSecondScreenConnection *_secondScreenConnection;	// 112 = 0x70
    UIWindow *_sourceWindowWhenPictureInPictureStarted;	// 120 = 0x78
    id <AVPictureInPictureContentSource> _contentSourceAwaitingInvalidation;	// 128 = 0x80
    id <AVPictureInPictureContentSource> _contentSourceAwaitingSetup;	// 136 = 0x88
    long long _observedTimeControlStatus;	// 144 = 0x90
    double _rateWhenScrubbingOrSeekingBegan;	// 152 = 0x98
    id <AVPictureInPictureContentSource> _source;	// 160 = 0xa0
    AVObservationController *_observationController;	// 168 = 0xa8
    struct CGRect _videoRectInScreen;	// 176 = 0xb0
}

+ (id)imageSymbolConfiguration;	// IMP=0x001000000002ae29
+ (id)stopPictureInPictureButtonImageName;	// IMP=0x001000000002ae0a
+ (id)startPictureInPictureButtonImageName;	// IMP=0x001000000002adeb
+ (_Bool)isPictureInPictureSupported;	// IMP=0x001000000002adc0
- (void).cxx_destruct;	// IMP=0x000000000002932d
@property(nonatomic, getter=isRoutingVideoToHostedWindow) _Bool routingVideoToHostedWindow; // @synthesize routingVideoToHostedWindow=_routingVideoToHostedWindow;
@property(readonly, nonatomic) AVObservationController *observationController; // @synthesize observationController=_observationController;
@property(nonatomic) __weak id <AVPictureInPictureContentSource> source; // @synthesize source=_source;
@property(nonatomic) _Bool wasPlayingWhenSuspended; // @synthesize wasPlayingWhenSuspended=_wasPlayingWhenSuspended;
@property(nonatomic, getter=isInterruptedForAudioSession) _Bool interruptedForAudioSession; // @synthesize interruptedForAudioSession=_interruptedForAudioSession;
@property(nonatomic) double rateWhenScrubbingOrSeekingBegan; // @synthesize rateWhenScrubbingOrSeekingBegan=_rateWhenScrubbingOrSeekingBegan;
@property(nonatomic, getter=isSeeking) _Bool seeking; // @synthesize seeking=_seeking;
@property(nonatomic, getter=isScrubbing) _Bool scrubbing; // @synthesize scrubbing=_scrubbing;
@property(nonatomic, getter=isScrubbingOrSeeking) _Bool scrubbingOrSeeking; // @synthesize scrubbingOrSeeking=_scrubbingOrSeeking;
@property(nonatomic) long long observedTimeControlStatus; // @synthesize observedTimeControlStatus=_observedTimeControlStatus;
@property(nonatomic) __weak id <AVPictureInPictureContentSource> contentSourceAwaitingSetup; // @synthesize contentSourceAwaitingSetup=_contentSourceAwaitingSetup;
@property(nonatomic) __weak id <AVPictureInPictureContentSource> contentSourceAwaitingInvalidation; // @synthesize contentSourceAwaitingInvalidation=_contentSourceAwaitingInvalidation;
@property(nonatomic) __weak UIWindow *sourceWindowWhenPictureInPictureStarted; // @synthesize sourceWindowWhenPictureInPictureStarted=_sourceWindowWhenPictureInPictureStarted;
@property(retain, nonatomic) AVSecondScreenConnection *secondScreenConnection; // @synthesize secondScreenConnection=_secondScreenConnection;
@property(readonly, nonatomic) NSTimer *layoutCheckTimer; // @synthesize layoutCheckTimer=_layoutCheckTimer;
@property(nonatomic) struct CGRect videoRectInScreen; // @synthesize videoRectInScreen=_videoRectInScreen;
@property(readonly, nonatomic) PGPictureInPictureProxy *pegasusProxy; // @synthesize pegasusProxy=_pegasusProxy;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic, getter=isAnyPictureInPictureActive) _Bool anyPictureInPictureActive; // @synthesize anyPictureInPictureActive=_anyPictureInPictureActive;
@property(readonly, nonatomic) AVPictureInPictureViewController *pictureInPictureViewController; // @synthesize pictureInPictureViewController=_pictureInPictureViewController;
@property(nonatomic) long long backgroundPlaybackPolicy; // @synthesize backgroundPlaybackPolicy=_backgroundPlaybackPolicy;
@property(copy, nonatomic) NSString *activitySessionIdentifier; // @synthesize activitySessionIdentifier=_activitySessionIdentifier;
@property(nonatomic) _Bool managesWiredSecondScreenPlayback; // @synthesize managesWiredSecondScreenPlayback=_managesWiredSecondScreenPlayback;
@property(retain, nonatomic) AVPictureInPicturePrerollAttributes *prerollAttributes; // @synthesize prerollAttributes=_prerollAttributes;
@property(nonatomic, getter=isMicrophoneEnabled) _Bool microphoneEnabled; // @synthesize microphoneEnabled=_microphoneEnabled;
@property(nonatomic) long long controlsStyle; // @synthesize controlsStyle=_controlsStyle;
@property(nonatomic) _Bool requiresLinearPlayback; // @synthesize requiresLinearPlayback=_requiresLinearPlayback;
@property(nonatomic) _Bool canPausePlaybackWhenClosingPictureInPicture; // @synthesize canPausePlaybackWhenClosingPictureInPicture=_canPausePlaybackWhenClosingPictureInPicture;
@property(nonatomic) _Bool canStartAutomaticallyWhenEnteringBackground; // @synthesize canStartAutomaticallyWhenEnteringBackground=_canStartAutomaticallyWhenEnteringBackground;
@property(nonatomic) _Bool alwaysStartsAutomaticallyWhenEnteringBackground; // @synthesize alwaysStartsAutomaticallyWhenEnteringBackground=_alwaysStartsAutomaticallyWhenEnteringBackground;
@property(nonatomic) _Bool allowsPictureInPicturePlayback; // @synthesize allowsPictureInPicturePlayback=_allowsPictureInPicturePlayback;
@property(retain, nonatomic) AVPlayerController *playerController; // @synthesize playerController=_playerController;
@property(nonatomic) __weak id <AVPictureInPicturePlatformAdapterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_setupPipAdapter;	// IMP=0x00000000000290cf
- (void)_removeSecondScreenConnection;	// IMP=0x0000000000028e9c
- (void)pictureInPictureViewControllerViewWillDisappear:(id)arg1;	// IMP=0x0000000000028d9c
- (void)pictureInPictureViewControllerViewDidAppear:(id)arg1;	// IMP=0x0000000000028c99
- (_Bool)pictureInPictureProxyCanIssueOptionalCommand:(id)arg1;	// IMP=0x0000000000028c7c
- (void)pictureInPictureProxy:(id)arg1 didReceiveTestingCommand:(id)arg2;	// IMP=0x0000000000028b0c
- (void)pictureInPictureProxy:(id)arg1 didReceivePlaybackCommand:(id)arg2;	// IMP=0x0000000000028414
- (void)pictureInPictureProxy:(id)arg1 didUpdateResourcesUsageReductionReasons:(unsigned long long)arg2 oldReasons:(unsigned long long)arg3;	// IMP=0x00000000000282fb
- (id)pictureInPictureProxyViewControllerWindowForTransitionAnimation:(id)arg1;	// IMP=0x00000000000282ab
- (long long)pictureInPictureProxyInterfaceOrientationForTransitionAnimation:(id)arg1;	// IMP=0x000000000002823d
- (void)pictureInPictureProxyPictureInPictureInterruptionEnded:(id)arg1;	// IMP=0x0000000000028141
- (void)pictureInPictureProxyPictureInPictureInterruptionBegan:(id)arg1;	// IMP=0x0000000000028045
- (void)pictureInPictureProxy:(id)arg1 didStopPictureInPictureWithAnimationType:(long long)arg2 reason:(long long)arg3;	// IMP=0x0000000000027f22
- (void)pictureInPictureProxy:(id)arg1 willStopPictureInPictureWithAnimationType:(long long)arg2 reason:(long long)arg3;	// IMP=0x0000000000027d9e
- (void)pictureInPictureProxy:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000027c42
- (void)pictureInPictureProxy:(id)arg1 failedToStartPictureInPictureWithAnimationType:(long long)arg2 error:(id)arg3;	// IMP=0x0000000000027b27
- (void)pictureInPictureProxy:(id)arg1 didStartPictureInPictureWithAnimationType:(long long)arg2;	// IMP=0x0000000000027a35
- (void)pictureInPictureProxy:(id)arg1 willStartPictureInPictureWithAnimationType:(long long)arg2;	// IMP=0x000000000002791c
- (struct CGRect)pictureInPictureProxyViewFrameForTransitionAnimation:(id)arg1;	// IMP=0x00000000000278ed
- (void)_startObservingForPlaybackStateUpdates;	// IMP=0x0000000000027579
- (void)_startObservation;	// IMP=0x0000000000027166
- (void)_createProxyIfNeeded;	// IMP=0x0000000000026ed6
- (void)_updateProxyPlaybackState;	// IMP=0x0000000000026d02
- (long long)_proxyControlsStyle;	// IMP=0x0000000000026cd6
- (void)_updatePictureInPictureShouldStartWhenEnteringBackground;	// IMP=0x0000000000026908
- (_Bool)_isFullScreen;	// IMP=0x0000000000026640
- (void)updateLayoutDependentBehaviors;	// IMP=0x0000000000026573
@property(readonly, nonatomic, getter=isSystemPictureInPicturePossible) _Bool systemPictureInPicturePossible;
@property(readonly, nonatomic) _Bool canAnimatePictureInPictureTransition;
- (void)stopPictureInPictureAndRestoreUserInterface:(_Bool)arg1;	// IMP=0x0000000000025a8c
- (void)startPictureInPicture;	// IMP=0x00000000000258c1
- (void)dealloc;	// IMP=0x0000000000025844
- (id)initWithSource:(id)arg1;	// IMP=0x0000000000025642
@property(readonly, nonatomic, getter=isContentSourceSupported) _Bool contentSourceSupported;
- (void)_setRoutingVideoToHostedWindow:(_Bool)arg1 pictureInPictureViewController:(id)arg2 source:(id)arg3;	// IMP=0x00000000000d2216
- (void)_updateStatusUsingProposedStatus:(long long)arg1;	// IMP=0x00000000000d19fe
- (void)_updateStatus;	// IMP=0x00000000000d19cd
- (void)_setStatusAndNotifyDelegateIfNeeded:(long long)arg1;	// IMP=0x00000000000d18ab

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

