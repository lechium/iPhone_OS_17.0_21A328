//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, SASRequestOptions, SRCompactAutoDismissController, SRCompactViewController, SiriDismissalOptions, SiriSharedUICompactViewModelController;
@protocol AFUIBugReportPresenting, SiriUIPresentationDataSource, SiriUIPresentationDelegate;

@interface SRCompactPresentation : NSObject
{
    SRCompactViewController *_compactViewController;	// 8 = 0x8
    id <AFUIBugReportPresenting> _bugReportingPresenter;	// 16 = 0x10
    SRCompactAutoDismissController *_autoDismissController;	// 24 = 0x18
    _Bool _hasPresentedContent;	// 32 = 0x20
    _Bool _userCancelledRequestViaOrbViewTap;	// 33 = 0x21
    _Bool _hasOmittedDialogFromPresenting;	// 34 = 0x22
    _Bool _isPresentingSystemUI;	// 35 = 0x23
    _Bool _shouldResumeMediaOnIdle;	// 36 = 0x24
    _Bool _requestIsWiredMicOrBTHeadsetOrWx;	// 37 = 0x25
    _Bool _recordingFromWxDevice;	// 38 = 0x26
    _Bool _shouldPauseAutoDismissal;	// 39 = 0x27
    _Bool _hasPendingAutoDismissal;	// 40 = 0x28
    NSString *_responseMode;	// 48 = 0x30
    long long _initialRequestSource;	// 56 = 0x38
    long long _lastDismissalReason;	// 64 = 0x40
    SiriDismissalOptions *_lastDismissalOptions;	// 72 = 0x48
    NSNumber *_delayDismissalMs;	// 80 = 0x50
    _Bool _shouldMuteSiriFeedbackBanner;	// 88 = 0x58
    id <SiriUIPresentationDataSource> _dataSource;	// 96 = 0x60
    id <SiriUIPresentationDelegate> _delegate;	// 104 = 0x68
    SiriSharedUICompactViewModelController *_activeViewModelController;	// 112 = 0x70
    long long _inputType;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x002000000002ddbb
@property(nonatomic, getter=_inputType, setter=_setInputType:) long long inputType; // @synthesize inputType=_inputType;
@property(retain, nonatomic) SiriSharedUICompactViewModelController *activeViewModelController; // @synthesize activeViewModelController=_activeViewModelController;
@property(nonatomic) __weak id <SiriUIPresentationDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SiriUIPresentationDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (_Bool)alwaysShowRecognizedSpeech;	// IMP=0x001000000002dd0e
- (long long)_viewModelInputTypeForRequestInputType:(long long)arg1;	// IMP=0x001000000002dcf4
- (void)_dismissVideoPlayerViewController;	// IMP=0x001000000002dbdf
- (void)playbackDidFailForVideoPlayerViewController:(id)arg1;	// IMP=0x001000000002dbcd
- (void)playbackDidFinishForVideoPlayerViewController:(id)arg1;	// IMP=0x001000000002dbbb
- (void)modalContainerViewControllerViewDidDisappear:(id)arg1;	// IMP=0x001000000002db50
- (void)modalContainerViewControllerViewWillDisappear:(id)arg1;	// IMP=0x001000000002dae5
- (void)autoDismissControllerRequestsStopAttending:(id)arg1;	// IMP=0x001000000002da99
- (void)autoDismissControllerRequestsDismissal:(id)arg1;	// IMP=0x001000000002d9a5
- (void)_showFullScreenDimmingLayer;	// IMP=0x001000000002d8f1
- (id)dismissalUserInfo;	// IMP=0x001000000002d808
- (void)siriDidHidePasscodeUnlock;	// IMP=0x001000000002d7f0
- (void)siriWillShowPasscodeUnlockAndCancelRequest:(_Bool)arg1;	// IMP=0x001000000002d7d5
- (_Bool)shouldUseEventDrivenIdleAndQuietUpdates;	// IMP=0x001000000002d7cd
- (void)didReceiveOrbViewTapToCancelRequest;	// IMP=0x001000000002d7c3
- (void)siriIsIdleAndQuietStatusDidChange:(_Bool)arg1 isAttending:(_Bool)arg2;	// IMP=0x001000000002d4a3
@property(readonly, copy, nonatomic, getter=_activeRequestOptions) SASRequestOptions *activeRequestOptions;
- (void)compactViewControllerCancelHIDEventDefferal:(id)arg1;	// IMP=0x001000000002d3f8
- (void)compactViewControllerRequestsHIDEventDefferal:(id)arg1;	// IMP=0x001000000002d3ac
- (void)viewController:(id)arg1 didFinishEditingUtteranceWithText:(id)arg2 originalUserUtterance:(id)arg3 selectionResults:(id)arg4;	// IMP=0x001000000002d10a
- (void)viewController:(id)arg1 siriRequestEnteredWithText:(id)arg2;	// IMP=0x001000000002d09f
- (void)compactViewControllerDidEndEditing:(id)arg1;	// IMP=0x001000000002d053
- (void)compactViewController:(id)arg1 willBeginEditingOfType:(long long)arg2;	// IMP=0x001000000002cffa
- (void)compactViewController:(id)arg1 requestsKeyboardWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002cf8f
- (_Bool)bugReportPresenterShouldPromptUserForScreenshotPermission:(id)arg1;	// IMP=0x001000000002cf87
- (void)bugReportPresenterRequestsSiriSessionToFinishCurrentRequest:(id)arg1;	// IMP=0x001000000002cecc
- (void)bugReportPresenterRequestsInvalidateAutoDismissal:(id)arg1;	// IMP=0x001000000002ce36
- (void)bugReportPresenter:(id)arg1 setStatusViewHidden:(_Bool)arg2;	// IMP=0x001000000002cde7
- (id)bugReportPresenterRequestsPresentingView:(id)arg1;	// IMP=0x001000000002cdd1
- (double)bugReportPresenterRequestsLastPresentationTime:(id)arg1;	// IMP=0x001000000002cdbb
- (id)bugReportPresenterRequestsBugReportPrefixForTitle:(id)arg1;	// IMP=0x001000000002cd37
- (id)bugReportPresenterRequestsBugReportKeywordIdentifiers:(id)arg1;	// IMP=0x001000000002ccd0
- (id)bugReportPresenterRequestsActiveConversation:(id)arg1;	// IMP=0x001000000002ccbe
- (void)bugReportPresenter:(id)arg1 setBugReportingAvailable:(_Bool)arg2;	// IMP=0x001000000002cc6f
- (void)bugReportPresenter:(id)arg1 requestsToTakeScreenshotWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002cc04
- (void)bugReportPresenter:(id)arg1 requestsToPresentViewController:(id)arg2;	// IMP=0x001000000002cbe3
- (void)bugReportPresenter:(id)arg1 requestsToPerformAceCommand:(id)arg2;	// IMP=0x001000000002cb72
- (void)bugReportPresenter:(id)arg1 requestsToOpenURL:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002cae1
- (void)bugReportPresenter:(id)arg1 requestsToHandlePasscodeUnlockWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000002ca76
- (void)_setupBugReportingPresenterIfNecessary;	// IMP=0x001000000002ca3e
- (void)didReceiveReportBugAction;	// IMP=0x001000000002ca0b
- (void)didReceiveBugButtonLongPress;	// IMP=0x001000000002c9d8
- (id)_analytics;	// IMP=0x001000000002c9bf
- (void)userDrilledIntoSnippet;	// IMP=0x001000000002c982
- (void)compactViewController:(id)arg1 viewDidDisappearForAceObject:(id)arg2;	// IMP=0x001000000002c8c9
- (void)compactViewController:(id)arg1 viewDidAppearForAceObject:(id)arg2;	// IMP=0x001000000002c85e
- (void)siriCompactViewController:(id)arg1 willDismissViewController:(id)arg2;	// IMP=0x001000000002c7f3
- (void)didBeginProcessingConversationItems;	// IMP=0x001000000002c7b6
- (void)siriCompactViewController:(id)arg1 willPresentViewController:(id)arg2;	// IMP=0x001000000002c74b
- (id)effectiveCoreLocationBundleForCompactViewController:(id)arg1;	// IMP=0x001000000002c6ec
- (void)didPresentContentForCompactViewController:(id)arg1;	// IMP=0x001000000002c606
- (void)cancelRequestForViewController:(id)arg1;	// IMP=0x001000000002c5ba
- (void)stopRecordingForViewController:(id)arg1;	// IMP=0x001000000002c56e
- (void)endSiriSessionForViewController:(id)arg1 withDismissalReason:(long long)arg2;	// IMP=0x001000000002c51d
- (void)viewController:(id)arg1 reduceOrbOpacity:(_Bool)arg2;	// IMP=0x001000000002c4ce
- (void)viewController:(id)arg1 requestsHostBackgroundBlurVisible:(_Bool)arg2 reason:(long long)arg3 fence:(id)arg4;	// IMP=0x001000000002c44e
- (void)viewControllerViewWillDisappear:(id)arg1;	// IMP=0x001000000002c438
- (void)compactViewController:(id)arg1 setStatusViewHidden:(_Bool)arg2;	// IMP=0x001000000002c3e9
- (void)compactViewController:(id)arg1 handleStartLocalRequest:(id)arg2 turnIdentifier:(id)arg3;	// IMP=0x001000000002c31f
- (void)userTouchedSnippet;	// IMP=0x001000000002c2e2
- (void)viewControllerDidPresentUserInterface:(id)arg1;	// IMP=0x001000000002c2ac
- (id)localeForCompactViewController:(id)arg1;	// IMP=0x001000000002c24d
- (unsigned long long)lockStateForCompactViewController:(id)arg1;	// IMP=0x001000000002c1fa
- (void)stopSpeakingForCompactViewController:(id)arg1;	// IMP=0x001000000002c1ae
- (void)compactViewController:(id)arg1 speakText:(id)arg2 isPhonetic:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000002c10e
- (void)viewController:(id)arg1 performAceCommands:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002bb7a
- (void)viewController:(id)arg1 openURL:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000002bae9
- (struct CGRect)effectiveContentFrame;	// IMP=0x001000000002ba8f
- (struct CGSize)maxSizeForSnippet;	// IMP=0x001000000002ba79
- (void)tapToEditPresented;	// IMP=0x001000000002ba2d
- (double)expectedContentWidth;	// IMP=0x001000000002b9d6
- (void)siriWillBeginTearDownForDismissalReason:(long long)arg1 withOriginalDismissalOptions:(id)arg2;	// IMP=0x001000000002b928
- (void)setTopContentInset:(double)arg1 animated:(_Bool)arg2;	// IMP=0x001000000002b912
- (void)setBottomContentInset:(double)arg1;	// IMP=0x001000000002b8fc
- (_Bool)hasContentAtPoint:(struct CGPoint)arg1;	// IMP=0x001000000002b7f4
- (void)handleRequestEndBehavior:(id)arg1 isAttending:(_Bool)arg2;	// IMP=0x001000000002b5ca
- (void)immersiveExperienceRequestedForViewModelController:(id)arg1;	// IMP=0x001000000002b570
- (id)compactViewModelController:(id)arg1 requestsTranscriptItemForAceObject:(id)arg2;	// IMP=0x001000000002b4cc
- (_Bool)siriDeviceLockedForViewModelController:(id)arg1;	// IMP=0x001000000002b475
- (_Bool)compactViewModelControllerShouldAlwaysShowRecognizedSpeech:(id)arg1;	// IMP=0x001000000002b463
- (void)compactViewModelController:(id)arg1 didProcessConversationItemsWithIdentifiers:(id)arg2;	// IMP=0x001000000002b3f8
- (long long)inputTypeForCompactViewModelController:(id)arg1;	// IMP=0x001000000002b3c7
- (void)_activeConversationDidChange;	// IMP=0x001000000002b2d1
- (void)siriDidTransitionFromState:(long long)arg1 event:(long long)arg2;	// IMP=0x001000000002b0d3
- (_Bool)didReceiveUpdateVisualResponseCommand:(id)arg1;	// IMP=0x001000000002b0bd
- (void)didPresentSystemUI;	// IMP=0x001000000002b02d
- (void)resetViewsAndClearASR:(_Bool)arg1;	// IMP=0x001000000002b017
- (void)didOmitDialogFromPresenting;	// IMP=0x001000000002b00d
- (void)showFullScreenEffect:(id)arg1;	// IMP=0x001000000002aff7
- (void)siriDidTapOutsideContent;	// IMP=0x001000000002afe1
- (void)siriDidUpdateASRWithRecognition:(id)arg1;	// IMP=0x001000000002afcb
- (void)siriDidStopSpeakingWithIdentifier:(id)arg1 speechQueueIsEmpty:(_Bool)arg2;	// IMP=0x001000000002afb5
- (void)siriDidStartSpeakingWithIdentifier:(id)arg1;	// IMP=0x001000000002af9f
- (void)siriDidDeactivateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000002af15
- (int)viewRegionForPresentedAceObject:(id)arg1;	// IMP=0x001000000002aeff
- (_Bool)supportsVisualPresentationForConversationItem:(id)arg1;	// IMP=0x001000000002aebe
- (void)handlePlayContentCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002aaef
- (_Bool)shouldResumeInterruptedAudioPlayback;	// IMP=0x001000000002aae7
- (_Bool)shouldResumeInterruptedAudioPlaybackForAttendingState:(_Bool)arg1;	// IMP=0x001000000002a9c6
- (void)speechRecordingDidBeginOnRecordRoute:(id)arg1;	// IMP=0x001000000002a90b
- (void)siriDidStartNewConversationWithIdentifier:(id)arg1;	// IMP=0x001000000002a81c
- (void)siriDidActivateFromSource:(long long)arg1;	// IMP=0x001000000002a6b9
- (void)siriResponseModeDidChange:(unsigned long long)arg1;	// IMP=0x001000000002a5d6
- (void)siriRequestWillStartWithRequestOptions:(id)arg1;	// IMP=0x001000000002a4c6
- (void)activeRequestOptionsDidChange;	// IMP=0x001000000002a43c
- (void)dealloc;	// IMP=0x001000000002a3fa
- (void)didReceiveRevealRecognizedSpeechCommand:(id)arg1;	// IMP=0x001000000002a233
- (void)conversation:(id)arg1 didChangeWithTransaction:(id)arg2;	// IMP=0x001000000002a1ca
- (id)viewController;	// IMP=0x001000000002a1bc
- (void)configureForRequestOptions:(id)arg1;	// IMP=0x001000000002a0ea
- (id)_activeConversation;	// IMP=0x001000000002a040
- (id)_identifierOfPreviousConversation;	// IMP=0x0010000000029f47
- (id)_conversationIdentifiers;	// IMP=0x0010000000029ee8
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2;	// IMP=0x0010000000029d5e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
