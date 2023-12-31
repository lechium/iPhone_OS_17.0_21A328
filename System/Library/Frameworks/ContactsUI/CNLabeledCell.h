//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNContactCell.h"

@class NSDictionary, NSString, UIImageView, UILabel, UIView;
@protocol ABText;

__attribute__((visibility("hidden")))
@interface CNLabeledCell : CNContactCell
{
    NSDictionary *_labelTextAttributes;	// 8 = 0x8
    NSDictionary *_valueTextAttributes;	// 16 = 0x10
    _Bool _labelViewNeedsHuggingContent;	// 24 = 0x18
    _Bool _valueViewNeedsHuggingContent;	// 25 = 0x19
    UIImageView *_chevron;	// 32 = 0x20
}

+ (_Bool)wantsHorizontalLayout;	// IMP=0x006000000021fbae
+ (_Bool)wantsStandardConstraints;	// IMP=0x006000000021fba6
+ (_Bool)wantsChevron;	// IMP=0x006000000021fb9e
- (void).cxx_destruct;	// IMP=0x000000000021faec
@property(readonly, nonatomic) UIImageView *chevron; // @synthesize chevron=_chevron;
@property(nonatomic) _Bool valueViewNeedsHuggingContent; // @synthesize valueViewNeedsHuggingContent=_valueViewNeedsHuggingContent;
@property(nonatomic) _Bool labelViewNeedsHuggingContent; // @synthesize labelViewNeedsHuggingContent=_labelViewNeedsHuggingContent;
- (void)tintColorDidChange;	// IMP=0x000000000021f9b1
@property(copy, nonatomic) NSDictionary *valueTextAttributes;
@property(copy, nonatomic) NSDictionary *labelTextAttributes;
@property(readonly, nonatomic) NSString *valueString;
@property(readonly, nonatomic) NSString *labelString;
@property(readonly, nonatomic) UILabel *standardValueView;
@property(readonly, nonatomic) UILabel *standardLabelView;
@property(readonly, nonatomic) UIView *rightMostView;
@property(readonly, nonatomic) UIView<ABText> *valueView;
@property(readonly, nonatomic) UIView<ABText> *labelView;
- (id)variableConstraintsForHorizontalLayout;	// IMP=0x000000000021f3a5
- (id)constantConstraintsForHorizontalLayout;	// IMP=0x000000000021e99c
- (id)variableConstraintsForVerticalLayout;	// IMP=0x000000000021e6c0
- (id)constantConstraintsForVerticalLayout;	// IMP=0x000000000021df04
- (id)variableConstraintsForStandardLayout;	// IMP=0x000000000021de7f
- (id)constantConstraintsForStandardLayout;	// IMP=0x000000000021ddfa
- (id)variableConstraints;	// IMP=0x000000000021dd1a
- (id)constantConstraints;	// IMP=0x000000000021dc3a
@property(readonly, nonatomic) double valueViewBottomMargin;
@property(readonly, nonatomic) double chevronWidth;
- (double)minCellHeight;	// IMP=0x000000000021dbf2
- (void)removeChevron;	// IMP=0x000000000021db0c
- (void)addChevron;	// IMP=0x000000000021da0c
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000021d7e1
- (_Bool)displaysCellSelectionState;	// IMP=0x000000000021d7cf
- (_Bool)allowsCellSelection;	// IMP=0x000000000021d7c7

@end

