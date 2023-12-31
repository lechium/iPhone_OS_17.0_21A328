//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE, NSArray, NSString, RAPPhotoPickerController, RAPReport, RAPUserResponseQuestion, UGCPhotoCarouselController, UIButton, UICollectionView, UIVisualEffectView, _TtC4Maps29RAPTextViewCollectionViewCell, _TtC4Maps31RAPNotificationDetailsViewModel;
@protocol RAPNotificationDetailsViewControllerDelegate;

@interface RAPNotificationDetailsViewController : UIViewController
{
    UIVisualEffectView *_blurView;	// 8 = 0x8
    NSArray *_notificationSummaryItems;	// 16 = 0x10
    RAPReport *_report;	// 24 = 0x18
    RAPUserResponseQuestion *_question;	// 32 = 0x20
    RAPPhotoPickerController *_photoPicker;	// 40 = 0x28
    UGCPhotoCarouselController *_photoCarouselController;	// 48 = 0x30
    _TtC4Maps29RAPTextViewCollectionViewCell *_textViewCell;	// 56 = 0x38
    id <RAPNotificationDetailsViewControllerDelegate> _delegate;	// 64 = 0x40
    _TtC4Maps31RAPNotificationDetailsViewModel *_viewModel;	// 72 = 0x48
    UICollectionView *_collectionView;	// 80 = 0x50
    UIButton *_actionButton;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x002000000025a803
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) _TtC4Maps31RAPNotificationDetailsViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <RAPNotificationDetailsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)descriptionCellLinkButtonClick:(id)arg1;	// IMP=0x001000000025a69f
- (void)textViewCellDidChangeWithTextViewCell:(id)arg1 validatedText:(id)arg2;	// IMP=0x001000000025a615
- (void)photoCarouselController:(id)arg1 requestsRemovingImageForIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000025a565
- (void)photoCarouselControllerRequestsAddingNewPhoto:(id)arg1;	// IMP=0x001000000025a4ee
- (void)macFooterViewBackButtonTapped:(id)arg1;	// IMP=0x001000000025a4e8
- (void)macFooterViewRightButtonTapped:(id)arg1;	// IMP=0x001000000025a4e2
- (void)macFooterViewLeftButtonTapped:(id)arg1;	// IMP=0x001000000025a4ce
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x001000000025a4c6
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x001000000025a4be
- (void)keyboardWillHide:(id)arg1;	// IMP=0x001000000025a40c
- (void)keyboardWillShow:(id)arg1;	// IMP=0x001000000025a0e7
- (MISSING_TYPE *)collectionView:cellForItemAtIndexPath: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000259c82
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0010000000259bc8
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0010000000259bbd
- (void)_setRAPRecordAsInReviewWithReportID:(id)arg1;	// IMP=0x0010000000259b95
- (void)_submitReport;	// IMP=0x001000000025978b
- (void)_updateSummarySection;	// IMP=0x001000000025961d
- (void)_dismissAndOpenReportsHome;	// IMP=0x001000000025946a
- (void)_performButtonAction:(int)arg1;	// IMP=0x0010000000259451
- (void)_send:(id)arg1;	// IMP=0x001000000025943f
- (void)_done:(id)arg1;	// IMP=0x00100000002593bf
- (void)_setupConstraints;	// IMP=0x0010000000258960
- (void)_setupViews;	// IMP=0x0010000000257fc7
- (void)_updateDoneButton;	// IMP=0x0010000000257e06
- (void)_setupHeaderButtons;	// IMP=0x0010000000257c12
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000257b46
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000257a6c
- (void)viewDidLoad;	// IMP=0x00100000002577dd
- (void)_initPhotoPicker;	// IMP=0x0010000000257508
- (_Bool)_supportEdit;	// IMP=0x00100000002574e2
- (id)initWithViewModel:(id)arg1 report:(id)arg2 question:(id)arg3;	// IMP=0x0010000000257397

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

