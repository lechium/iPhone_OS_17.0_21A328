//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MUSizeLayout, MacFooterView, MapsProgressBarModalView, NSString, UGCPOIEnrichmentForm, UGCPOIEnrichmentHeaderView, UGCPOIEnrichmentViewController, UIVisualEffectView;
@protocol UGCPOIEnrichmentEditorDelegate;

@interface MacUGCPOIEnrichmentEditorViewController : UIViewController
{
    UIVisualEffectView *_blurView;	// 8 = 0x8
    UGCPOIEnrichmentHeaderView *_macHeaderView;	// 16 = 0x10
    MacFooterView *_submitButtonsFooterView;	// 24 = 0x18
    UGCPOIEnrichmentViewController *_contentViewController;	// 32 = 0x20
    UGCPOIEnrichmentForm *_poiEnrichmentForm;	// 40 = 0x28
    MapsProgressBarModalView *;	// 48 = 0x30
    MUSizeLayout *_sizeLayout;	// 56 = 0x38
    _Bool _suppressRatings;	// 64 = 0x40
    id <UGCPOIEnrichmentEditorDelegate> _delegate;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000003d2350
@property(nonatomic) _Bool suppressRatings; // @synthesize suppressRatings=_suppressRatings;
@property(nonatomic) __weak id <UGCPOIEnrichmentEditorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)macFooterViewRightButtonTapped:(id)arg1;	// IMP=0x00100000003d2301
- (void)macFooterViewLeftButtonTapped:(id)arg1;	// IMP=0x00100000003d22ef
- (void)macFooterViewBackButtonTapped:(id)arg1;	// IMP=0x00100000003d22e9
- (void)formDidChange:(id)arg1;	// IMP=0x00100000003d2279
- (void)willBeginSubmissionWithProgress:(id)arg1;	// IMP=0x00100000003d20aa
- (void)submissionFinishedWithError:(id)arg1;	// IMP=0x00100000003d1f0c
- (void)_animteProgressViewWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000003d1de2
- (void)sendButtonPressed;	// IMP=0x00100000003d1d73
- (void)cancelButtonPressed;	// IMP=0x00100000003d1d0f
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000003d1b31
- (void)viewDidLoad;	// IMP=0x00100000003d14de
- (void)loadView;	// IMP=0x00100000003d1435
- (id)initWithPOIEnrichmentForm:(id)arg1 delegate:(id)arg2 presentationContext:(long long)arg3;	// IMP=0x00100000003d133d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

