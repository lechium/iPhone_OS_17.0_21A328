//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NSNumber, NSString, SUUIButtonViewElement, UIButton, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface SUUIPageTitledDividerCollectionViewCell : UICollectionViewCell
{
    double _buttonContentHorizontalPadding;	// 8 = 0x8
    SUUIButtonViewElement *_buttonViewElement;	// 16 = 0x10
    struct UIEdgeInsets _contentEdgeInsets;	// 24 = 0x18
    struct UIEdgeInsets _contentInset;	// 56 = 0x38
    UIButton *_dividerButton;	// 88 = 0x58
    NSNumber *_dividerButtonImageRequestIdentifier;	// 96 = 0x60
    UILabel *_dividerLabel;	// 104 = 0x68
    struct UIEdgeInsets _imageVerticalPadding;	// 112 = 0x70
    struct UIEdgeInsets _internalHorizontalMargins;	// 144 = 0x90
    UIView *_leftLine;	// 176 = 0xb0
    UIView *_rightLine;	// 184 = 0xb8
    struct UIEdgeInsets _titleVerticalPadding;	// 192 = 0xc0
    double _topEdgeInset;	// 224 = 0xe0
}

+ (struct UIEdgeInsets)_titleVerticalPaddingForViewElement:(id)arg1;	// IMP=0x00100000001b2b8f
+ (struct UIEdgeInsets)_imageVerticalPaddingForViewElement:(id)arg1;	// IMP=0x00100000001b2a9b
+ (struct UIEdgeInsets)_contentEdgeInsetsForViewElement:(id)arg1;	// IMP=0x00100000001b29e6
+ (id)_attributedStringForViewElementText:(id)arg1 style:(id)arg2 context:(id)arg3;	// IMP=0x00100000001b2879
+ (id)_attributedStringForDividerTitle:(id)arg1 context:(id)arg2;	// IMP=0x00100000001b273b
+ (id)_attributedStringForButtonViewElement:(id)arg1 context:(id)arg2;	// IMP=0x00100000001b25e6
+ (double)viewElementInsetDividerHeight:(id)arg1;	// IMP=0x00100000001b0c95
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x00100000001b09aa
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 dividerTitle:(id)arg2 context:(id)arg3;	// IMP=0x00100000001b08f7
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00100000001b08f1
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x00100000001b085e
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x00100000001b0856
- (void).cxx_destruct;	// IMP=0x00000000001b2e5b
@property(nonatomic) double topEdgeInset; // @synthesize topEdgeInset=_topEdgeInset;
- (id)_imageForImageViewElement:(id)arg1 returningRequestIdentifier:(out id *)arg2 context:(id)arg3;	// IMP=0x00000000001b2cf0
- (void)_buttonAction:(id)arg1;	// IMP=0x00000000001b25a0
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000001b2512
- (void)layoutSubviews;	// IMP=0x00000000001b1e7f
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x00000000001b1dee
@property(copy, nonatomic) NSString *dividerTitle;
- (void)setColoringWithColorScheme:(id)arg1;	// IMP=0x00000000001b19c7
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x00000000001b19a2
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000001b199a
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x00000000001b18dd
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x00000000001b1885
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00000000001b0d1d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001b06c5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

