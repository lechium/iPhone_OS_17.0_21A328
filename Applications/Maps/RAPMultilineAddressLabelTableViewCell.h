//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class NSLayoutConstraint, NSMutableArray, NSString, RAPAddressLayoutOptions, RAPSeparatorBar, TextViewWithPlaceholderText, UITableView, UITapGestureRecognizer, UITextField, UIView;
@protocol RAPAddressDelegate;

@interface RAPMultilineAddressLabelTableViewCell : UITableViewCell
{
    TextViewWithPlaceholderText *_freeformAddressTextView;	// 8 = 0x8
    UITextField *_floorTextField;	// 16 = 0x10
    UITextField *_unitTextField;	// 24 = 0x18
    UITextField *_buildingTextField;	// 32 = 0x20
    RAPSeparatorBar *_topHorizontalHairlineView;	// 40 = 0x28
    RAPSeparatorBar *_middleVerticalHairlineView;	// 48 = 0x30
    RAPSeparatorBar *_bottomHorizontalHairlineView;	// 56 = 0x38
    NSMutableArray *_constraints;	// 64 = 0x40
    NSMutableArray *_topToFirstBaselineConstraints;	// 72 = 0x48
    NSMutableArray *_lastBaselineToBottomConstraints;	// 80 = 0x50
    NSLayoutConstraint *_freeformTopConstraint;	// 88 = 0x58
    NSLayoutConstraint *_freeformBottomConstraint;	// 96 = 0x60
    NSMutableArray *_detailViews;	// 104 = 0x68
    UITapGestureRecognizer *_freeformGestureRecognizer;	// 112 = 0x70
    UIView *_containerView;	// 120 = 0x78
    _Bool _canEditFreeformAddress;	// 128 = 0x80
    _Bool _editableAndTappable;	// 129 = 0x81
    int _analyticTarget;	// 132 = 0x84
    RAPAddressLayoutOptions *_layoutOptions;	// 136 = 0x88
    id <RAPAddressDelegate> _delegate;	// 144 = 0x90
    NSString *_freeformAddress;	// 152 = 0x98
    UITableView *_parentTableView;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x0020000000361d51
@property(nonatomic) __weak UITableView *parentTableView; // @synthesize parentTableView=_parentTableView;
@property(nonatomic, getter=isEditableAndTappable) _Bool editableAndTappable; // @synthesize editableAndTappable=_editableAndTappable;
@property(nonatomic) _Bool canEditFreeformAddress; // @synthesize canEditFreeformAddress=_canEditFreeformAddress;
@property(copy, nonatomic) NSString *freeformAddress; // @synthesize freeformAddress=_freeformAddress;
@property(nonatomic) __weak id <RAPAddressDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) RAPAddressLayoutOptions *layoutOptions; // @synthesize layoutOptions=_layoutOptions;
@property(nonatomic) int analyticTarget; // @synthesize analyticTarget=_analyticTarget;
- (void)_recalculateConstraints;	// IMP=0x0010000000361941
- (void)_updateFonts;	// IMP=0x0010000000361832
- (void)_contentSizeDidChange;	// IMP=0x0010000000361804
- (void)_clearSubviews;	// IMP=0x00100000003616ca
- (void)_updateViews;	// IMP=0x00100000003614a0
- (void)_addressChanged;	// IMP=0x00100000003611a4
- (void)_updateFreeformCellHeightIfNeeded;	// IMP=0x0010000000360ffc
- (void)textViewDidEndEditing:(id)arg1;	// IMP=0x0010000000360f73
- (void)textViewDidChange:(id)arg1;	// IMP=0x0010000000360f45
- (void)textViewDidBeginEditing:(id)arg1;	// IMP=0x0010000000360f09
- (_Bool)textViewShouldBeginEditing:(id)arg1;	// IMP=0x0010000000360ef9
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;	// IMP=0x0010000000360d84
- (void)_scrollTextViewSelectedRangeVisible:(id)arg1;	// IMP=0x0010000000360aac
- (void)_freeformAddressFieldTapped:(id)arg1;	// IMP=0x0010000000360971
- (void)_updateConstraints;	// IMP=0x001000000035f693
- (void)initViews;	// IMP=0x001000000035ec6d
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x001000000035eba1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

