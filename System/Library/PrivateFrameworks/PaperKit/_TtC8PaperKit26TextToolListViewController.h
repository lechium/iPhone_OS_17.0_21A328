//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8PaperKit26TextToolListViewController : UIViewController
{
    MISSING_TYPE *stackView;	// 8 = 0x8
    MISSING_TYPE *contentSizeObserver;	// 16 = 0x10
    MISSING_TYPE *minimumItemHeight;	// 24 = 0x18
    MISSING_TYPE *minimumPreferredContentSizeWidth;	// 32 = 0x20
    MISSING_TYPE *delegate;	// 40 = 0x28
    MISSING_TYPE *autoFillFormListItemVisible;	// 56 = 0x38
    MISSING_TYPE *addStickerListItemVisible;	// 57 = 0x39
    MISSING_TYPE *addShapeListItemVisible;	// 58 = 0x3a
    MISSING_TYPE *opacityItemVisible;	// 59 = 0x3b
    MISSING_TYPE *descriptionItemVisible;	// 60 = 0x3c
    MISSING_TYPE *$__lazy_storage_$_listItemViews;	// 64 = 0x40
    MISSING_TYPE *$__lazy_storage_$_addTextBoxListItemView;	// 72 = 0x48
    MISSING_TYPE *$__lazy_storage_$_autoFillFormListItemView;	// 80 = 0x50
    MISSING_TYPE *$__lazy_storage_$_addSignatureListItemView;	// 88 = 0x58
    MISSING_TYPE *$__lazy_storage_$_addStickerListItemView;	// 96 = 0x60
    MISSING_TYPE *$__lazy_storage_$_opacityListItemView;	// 104 = 0x68
    MISSING_TYPE *$__lazy_storage_$_descriptionListItemView;	// 112 = 0x70
    MISSING_TYPE *$__lazy_storage_$_addShapeListItemView;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000000306a80
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000306a20
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000306820
- (void)didTapAddStickerListItemView:(id)arg1 forEvent:(id)arg2;	// IMP=0x0000000000306540
- (void)didTapDescriptionListItemView:(id)arg1 forEvent:(id)arg2;	// IMP=0x00000000003064b0
- (void)didTapOpacityListItemView:(id)arg1 forEvent:(id)arg2;	// IMP=0x0000000000306490
- (void)didTapAddShapeListItemView:(id)arg1 forEvent:(id)arg2;	// IMP=0x0000000000306470
- (void)didTapAutoFillFormListItemView:(id)arg1 forEvent:(id)arg2;	// IMP=0x0000000000306430
- (void)didTapAddSignatureListItemView:(id)arg1 forEvent:(id)arg2;	// IMP=0x0000000000306410
- (void)didTapAddTextBoxListItemView:(id)arg1 forEvent:(id)arg2;	// IMP=0x00000000003063f0
- (void)updatePreferredContentSize;	// IMP=0x0000000000306290
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000305ab0
- (void)viewIsAppearing:(_Bool)arg1;	// IMP=0x0000000000305a50
- (void)viewDidLoad;	// IMP=0x0000000000305a20

@end

