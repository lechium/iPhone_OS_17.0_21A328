//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SUUICollectionViewCell.h"

@class NSString, SUUIButtonViewElement, SUUICellScrollView, SUUICheckboxInputViewElement, SUUIHorizontalLockupView, UIButton, UIColor, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface SUUIHorizontalLockupCollectionViewCell : SUUICollectionViewCell
{
    UIButton *_actionButton;	// 8 = 0x8
    SUUIButtonViewElement *_actionButtonViewElement;	// 16 = 0x10
    SUUICellScrollView *_actionsScrollView;	// 24 = 0x18
    struct UIEdgeInsets _contentInset;	// 32 = 0x20
    SUUICheckboxInputViewElement *_editModeCheckboxElement;	// 64 = 0x40
    UIImageView *_editModeControl;	// 72 = 0x48
    UIView *_highlightBackgroundView;	// 80 = 0x50
    SUUIHorizontalLockupView *_lockupView;	// 88 = 0x58
    UIColor *_lockupViewBackgroundColor;	// 96 = 0x60
}

+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;	// IMP=0x00100000002b4971
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00100000002b4958
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;	// IMP=0x00100000002b48c5
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;	// IMP=0x00100000002b48ac
+ (double)maximumPerspectiveHeightForSize:(struct CGSize)arg1;	// IMP=0x00100000002b481b
- (void).cxx_destruct;	// IMP=0x00000000002b6879
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void)_removeEditControlAnimated:(_Bool)arg1;	// IMP=0x00000000002b65c1
- (void)_reloadLockupViewBackgroundColor;	// IMP=0x00000000002b6423
- (void)_reloadHighlightBackgroundView;	// IMP=0x00000000002b619b
- (void)_reloadActionsScrollViewWithViewElement:(id)arg1 context:(id)arg2;	// IMP=0x00000000002b5d1f
- (_Bool)_isActionsScrollViewEnabled;	// IMP=0x00000000002b5cf8
- (id)_highlightBackgroundColor;	// IMP=0x00000000002b5c37
- (id)_editControlImage;	// IMP=0x00000000002b5a99
- (id)_attributedStringForActionButton:(id)arg1 context:(id)arg2;	// IMP=0x00000000002b5903
- (void)_addEditControlAnimated:(_Bool)arg1;	// IMP=0x00000000002b5580
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x00000000002b54b5
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000002b5243
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x00000000002b515c
- (void)_actionButtonAction:(id)arg1;	// IMP=0x00000000002b511b
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000002b50da
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x00000000002b5054
- (void)layoutSubviews;	// IMP=0x00000000002b4c95
- (void)setSelected:(_Bool)arg1;	// IMP=0x00000000002b4c46
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000002b4bf7
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x00000000002b4bda
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000002b4bbd
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;	// IMP=0x00000000002b4ba0
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;	// IMP=0x00000000002b498a
- (void)updateForChangedDistanceFromVanishingPoint;	// IMP=0x00000000002b488f
- (void)setVanishingPoint:(struct CGPoint)arg1;	// IMP=0x00000000002b4872
- (void)setPerspectiveTargetView:(id)arg1;	// IMP=0x00000000002b4834
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x00000000002b477c
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000002b46d9
@property(readonly, nonatomic, getter=isScrollingCellToHideActionButton) _Bool scrollingCellToHideActionButton;
- (_Bool)isDeleteButtonHidden;	// IMP=0x00000000002b45ba
- (void)hideDeleteButton;	// IMP=0x00000000002b4588
- (void)dealloc;	// IMP=0x00000000002b4515
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002b4420

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

