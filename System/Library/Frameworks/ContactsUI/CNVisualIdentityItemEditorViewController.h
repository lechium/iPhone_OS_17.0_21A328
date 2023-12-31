//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class CNPhotoPickerProviderItem, CNPhotoPickerVariantsManager, CNVisualIdentityEditablePrimaryAvatarViewController, CNVisualIdentityItemEditorSegmentedControl, NSArray, NSLayoutConstraint, NSString, UICollectionView, UIView;
@protocol CNVisualIdentityItemEditorViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNVisualIdentityItemEditorViewController : UIViewController
{
    _Bool _canCancel;	// 8 = 0x8
    _Bool _canBeginEditing;	// 9 = 0x9
    id <CNVisualIdentityItemEditorViewControllerDelegate> _delegate;	// 16 = 0x10
    NSString *_doneButtonTitle;	// 24 = 0x18
    CNVisualIdentityEditablePrimaryAvatarViewController *_editableAvatarViewController;	// 32 = 0x20
    CNVisualIdentityItemEditorSegmentedControl *_segmentedControl;	// 40 = 0x28
    NSLayoutConstraint *_avatarViewSizeConstraint;	// 48 = 0x30
    NSLayoutConstraint *_avatarViewTopConstraint;	// 56 = 0x38
    NSLayoutConstraint *_segmentedControlHeightConstraint;	// 64 = 0x40
    UICollectionView *_styleCollectionView;	// 72 = 0x48
    UIView *_styleDividerView;	// 80 = 0x50
    CNPhotoPickerVariantsManager *_variantsManager;	// 88 = 0x58
    NSArray *_variantProviderItems;	// 96 = 0x60
    CNPhotoPickerProviderItem *_providerItem;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000016a406
@property(nonatomic) _Bool canBeginEditing; // @synthesize canBeginEditing=_canBeginEditing;
@property(retain, nonatomic) CNPhotoPickerProviderItem *providerItem; // @synthesize providerItem=_providerItem;
@property(retain, nonatomic) NSArray *variantProviderItems; // @synthesize variantProviderItems=_variantProviderItems;
@property(retain, nonatomic) CNPhotoPickerVariantsManager *variantsManager; // @synthesize variantsManager=_variantsManager;
@property(retain, nonatomic) UIView *styleDividerView; // @synthesize styleDividerView=_styleDividerView;
@property(retain, nonatomic) UICollectionView *styleCollectionView; // @synthesize styleCollectionView=_styleCollectionView;
@property(retain, nonatomic) NSLayoutConstraint *segmentedControlHeightConstraint; // @synthesize segmentedControlHeightConstraint=_segmentedControlHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *avatarViewTopConstraint; // @synthesize avatarViewTopConstraint=_avatarViewTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *avatarViewSizeConstraint; // @synthesize avatarViewSizeConstraint=_avatarViewSizeConstraint;
@property(retain, nonatomic) CNVisualIdentityItemEditorSegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(retain, nonatomic) CNVisualIdentityEditablePrimaryAvatarViewController *editableAvatarViewController; // @synthesize editableAvatarViewController=_editableAvatarViewController;
@property(nonatomic) _Bool canCancel; // @synthesize canCancel=_canCancel;
@property(retain, nonatomic) NSString *doneButtonTitle; // @synthesize doneButtonTitle=_doneButtonTitle;
@property(nonatomic) __weak id <CNVisualIdentityItemEditorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (double)styleContainerTopMargin;	// IMP=0x000000000016a174
- (double)segmentedControlTopMargin;	// IMP=0x000000000016a0e6
- (double)fontSizeForContainerSize:(double)arg1;	// IMP=0x000000000016a07b
- (double)textFieldFontSize;	// IMP=0x000000000016a04d
- (double)editableAvatarViewEdgeLength;	// IMP=0x0000000000169fbf
- (_Bool)editableAvatarViewControllerShouldBecomeFirstResponder:(id)arg1;	// IMP=0x0000000000169fad
- (void)editableAvatarViewController:(id)arg1 didUpdateWithProviderItem:(id)arg2;	// IMP=0x0000000000169f07
- (void)providerItemDidUpdate:(id)arg1;	// IMP=0x0000000000169e03
- (void)generateProviderItems;	// IMP=0x0000000000169cc1
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x0000000000169bd0
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000169a5a
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000016988b
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0000000000169847
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0000000000169831
- (void)didTapSegmentedControl:(id)arg1;	// IMP=0x0000000000169760
- (void)didTapDone;	// IMP=0x00000000001696a8
- (void)didTapCancel;	// IMP=0x0000000000169613
- (_Bool)isEmojiProviderItemType;	// IMP=0x00000000001695ca
- (id)updatedProviderItem;	// IMP=0x00000000001694c1
- (long long)numberOfItemsPerRow;	// IMP=0x000000000016943d
- (void)updateFlowLayoutItemSize;	// IMP=0x000000000016930c
- (_Bool)shouldShowStyleCollectionView;	// IMP=0x00000000001692c3
- (void)hideStyleCollectionView;	// IMP=0x0000000000169242
- (void)setUpFirstResponderForProviderItem:(id)arg1;	// IMP=0x00000000001691cc
- (void)setupViewWithProviderItem:(id)arg1;	// IMP=0x00000000001690ac
- (void)setupStyleCollectionView;	// IMP=0x0000000000168435
- (void)setupSegmentedControl;	// IMP=0x0000000000167de5
- (void)switchEditorToMode:(unsigned long long)arg1;	// IMP=0x0000000000167d5a
- (_Bool)shouldBeginEditing;	// IMP=0x0000000000167c35
- (void)beginEditingAvatar;	// IMP=0x0000000000167bdc
- (void)forceEmojiKeyboardIfNeeded;	// IMP=0x0000000000167af2
- (void)didTapEditableAvatar:(id)arg1;	// IMP=0x0000000000167a00
- (void)setupEditableAvatarViewController;	// IMP=0x0000000000167335
- (void)updateDoneButtonEnabledStateForText:(id)arg1;	// IMP=0x0000000000167284
- (void)setupBarButtonItems;	// IMP=0x0000000000167014
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000166f84
- (_Bool)editorViewOverlapsWindowBasedKeyboardRect:(struct CGRect)arg1;	// IMP=0x0000000000166ed8
- (double)editorViewBottomYForAvatarSize:(double)arg1 withContainerTopMargin:(double)arg2;	// IMP=0x0000000000166d6e
- (void)adjustAvatarViewConstraintsForKeyboardFrame:(struct CGRect)arg1;	// IMP=0x0000000000166a3e
- (void)keyboardWillShow:(id)arg1;	// IMP=0x000000000016697a
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000166939
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000001668b6
- (void)viewDidLoad;	// IMP=0x000000000016677c
- (id)initWithProviderItem:(id)arg1 variantsManager:(id)arg2;	// IMP=0x00000000001666bf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

