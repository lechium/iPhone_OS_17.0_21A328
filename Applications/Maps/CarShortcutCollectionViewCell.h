//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAShapeLayer, NSArray, NSString, UIColor, UIFocusEffect, UIView;
@protocol UIFocusEnvironment, UIFocusItemContainer;

@interface CarShortcutCollectionViewCell
{
    CAShapeLayer *_focusRingLayer;	// 8 = 0x8
    _Bool _focusOverridden;	// 16 = 0x10
}

+ (double)focusRingTopOverhang;	// IMP=0x0020000000790da9
+ (double)bottomMargin;	// IMP=0x0010000000790d9b
+ (double)textHorizontalMargin;	// IMP=0x0010000000790d92
+ (double)titleTopMargin;	// IMP=0x0010000000790d84
+ (id)subtitleFontWithTraitCollection:(id)arg1;	// IMP=0x0010000000790d6b
+ (id)titleFontWithTraitCollection:(id)arg1;	// IMP=0x0010000000790d52
+ (double)imageSize;	// IMP=0x0010000000790d44
+ (double)imageTopMargin;	// IMP=0x0010000000790d3b
+ (id)maximumContentSizeCategory;	// IMP=0x0010000000790d27
- (void).cxx_destruct;	// IMP=0x00200000007915a1
@property(nonatomic) _Bool focusOverridden; // @synthesize focusOverridden=_focusOverridden;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00100000007914c4
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000791405
- (void)didMoveToWindow;	// IMP=0x0010000000791397
@property(readonly, nonatomic) _Bool canBecomeFocused;
@property(readonly, nonatomic) UIColor *focusColor;
- (void)updateFocusRingColor;	// IMP=0x001000000079126b
- (void)_createFocusRingLayer;	// IMP=0x001000000079105a
- (void)_updateFocus;	// IMP=0x0010000000790f9e
- (void)prepareForReuse;	// IMP=0x0010000000790f5b
- (void)layoutSubviews;	// IMP=0x0010000000790e14
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000790db7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) UIFocusEffect *focusEffect;
@property(readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property(readonly, nonatomic) long long focusGroupPriority;
@property(readonly, nonatomic) id <UIFocusItemContainer> focusItemContainer;
@property(readonly, nonatomic) struct CGRect frame;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isTransparentFocusItem;
@property(readonly, nonatomic) __weak id <UIFocusEnvironment> parentFocusEnvironment;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
@property(readonly) Class superclass;

@end
