//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, UGCAddPhotosController, UGCCommunityAcknowledgementViewController, UGCSubmissionLookupResult, UIViewController, _TtC4Maps26UGCSubmissionLookupManager;
@protocol UGCPOIEnrichmentEditor;

@interface UGCRatingsAndPhotosCoordinator
{
    UIViewController<UGCPOIEnrichmentEditor> *_ratingContributionsViewController;	// 8 = 0x8
    UGCCommunityAcknowledgementViewController *_thankYouVC;	// 16 = 0x10
    UGCAddPhotosController *_photoPicker;	// 24 = 0x18
    _TtC4Maps26UGCSubmissionLookupManager *_lookupManager;	// 32 = 0x20
    _Bool _shouldShowThankYouScreen;	// 40 = 0x28
    _Bool _userHasDeletedSubmission;	// 41 = 0x29
    _Bool _hasPhotoPickerEmphasis;	// 42 = 0x2a
    _Bool _suppressRatings;	// 43 = 0x2b
    long long _initialOverallState;	// 48 = 0x30
    NSArray *_initialPhotosWithMetadata;	// 56 = 0x38
    long long _preferredSourceType;	// 64 = 0x40
    UGCSubmissionLookupResult *_existingSubmission;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000b05ee6
@property(retain, nonatomic) UGCSubmissionLookupResult *existingSubmission; // @synthesize existingSubmission=_existingSubmission;
@property(nonatomic) long long preferredSourceType; // @synthesize preferredSourceType=_preferredSourceType;
@property(nonatomic) _Bool suppressRatings; // @synthesize suppressRatings=_suppressRatings;
@property(nonatomic) _Bool hasPhotoPickerEmphasis; // @synthesize hasPhotoPickerEmphasis=_hasPhotoPickerEmphasis;
@property(retain, nonatomic) NSArray *initialPhotosWithMetadata; // @synthesize initialPhotosWithMetadata=_initialPhotosWithMetadata;
@property(nonatomic) long long initialOverallState; // @synthesize initialOverallState=_initialOverallState;
- (void)presentationControllerWillDismiss:(id)arg1;	// IMP=0x0010000000b05dfb
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;	// IMP=0x0010000000b05d89
- (void)_dismissPOIEnrichmentEditorWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000b059a6
- (void)_failWithAccountErrorWithPresentingViewController:(id)arg1;	// IMP=0x0010000000b058b7
- (void)_failLookupWithError:(id)arg1;	// IMP=0x0010000000b0579c
- (id)addPhotosControllerRequestsAnchoringBarButtonItem:(id)arg1;	// IMP=0x0010000000b0578a
- (id)addPhotosControllerRequestsAnchoringView:(id)arg1;	// IMP=0x0010000000b05778
- (void)_dismissPhotoPickerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000b05600
- (void)takePhotoController:(id)arg1 didSelectPhotosWithMetadata:(id)arg2;	// IMP=0x0010000000b054db
- (void)takePhotoControllerDidCancel:(id)arg1;	// IMP=0x0010000000b053e8
- (void)_presentFailedToSubmitAlertForResponse:(id)arg1 withPresentingViewController:(id)arg2;	// IMP=0x0010000000b053d1
- (void)poiEnrichmenEditorDidCancel:(id)arg1;	// IMP=0x0010000000b05364
- (void)_presentThirdPartyPhotoSharePromptIfNecessaryForReviewedPlace:(id)arg1;	// IMP=0x0010000000b05231
- (void)_presentPushNotificationPromptIfNecessary;	// IMP=0x0010000000b0503e
- (int)_generateEntryPointForAnalytics:(long long)arg1;	// IMP=0x0010000000b05023
- (void)captureAnalyticsForRatingsForm:(id)arg1 photosForm:(id)arg2;	// IMP=0x0010000000b0451a
- (void)poiEnrichmentEditor:(id)arg1 didSelectTermsOfServiceURL:(id)arg2;	// IMP=0x0010000000b044af
- (void)submissionCompletionWithViewController:(id)arg1 enrichmentForm:(id)arg2 policy:(long long)arg3 newReviewedPlace:(id)arg4 response:(id)arg5 error:(id)arg6;	// IMP=0x0010000000b03e2b
- (void)poiEnrichmentEditor:(id)arg1 finishedFillingEnrichmentForm:(id)arg2;	// IMP=0x0010000000b03923
@property(readonly, nonatomic) _Bool isEditingSubmission;
- (id)_createPOIEnrichmentFormWithContext;	// IMP=0x0010000000b034df
- (void)_presentPOIEnrichmentViewController;	// IMP=0x0010000000b031fe
- (void)_presentPhotoPickerWithMaxCount:(unsigned long long)arg1;	// IMP=0x0010000000b030ef
- (void)_handleLookupSubmissionCompletion:(id)arg1 lookupError:(id)arg2;	// IMP=0x0010000000b02f3a
- (void)_startRatingsAndPhotosFlowWithSubmissionLookup;	// IMP=0x0010000000b02c47
- (void)_startPOIEnrichmentFlow;	// IMP=0x0010000000b02a36
- (void)_startRatingsAndPhotosFlowDependentUponReviewedPlaceLookup;	// IMP=0x0010000000b0288c
- (void)_startRatingsAndPhotosFlowRequiringInformedConsent;	// IMP=0x0010000000b02708
- (void)_startRatingsAndPhotosFlowWithInformedConsentIfNeeded;	// IMP=0x0010000000b02690
- (void)_dismissPlacecardWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000b024df
@property(readonly, nonatomic) _Bool shouldDismissPlacecard;
- (void)_macOSBasedPresentation;	// IMP=0x0010000000b02374
- (void)_iosBasedPresentation;	// IMP=0x0010000000b02362
- (void)present;	// IMP=0x0010000000b022ef
- (id)init;	// IMP=0x0010000000b022b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

