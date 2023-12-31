//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionViewCell.h>

@class UIColor, UIView, UIVisualEffectView, _UIFloatingContentView;
@protocol VUIBaseListViewCellDelegate;

__attribute__((visibility("hidden")))
@interface VUIBaseListViewCell : UICollectionViewCell
{
    UIColor *_backgroundColor;	// 8 = 0x8
    UIColor *_highlightedBackgroundColor;	// 16 = 0x10
    UIVisualEffectView *_backgroundVisualEffectView;	// 24 = 0x18
    _Bool _visualEffectViewBackgroundEnabled;	// 32 = 0x20
    _Bool _disabled;	// 33 = 0x21
    _Bool _shouldAppearSelected;	// 34 = 0x22
    _UIFloatingContentView *_floatingView;	// 40 = 0x28
    id <VUIBaseListViewCellDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000001da726
@property(nonatomic) _Bool shouldAppearSelected; // @synthesize shouldAppearSelected=_shouldAppearSelected;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) __weak id <VUIBaseListViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) _UIFloatingContentView *floatingView; // @synthesize floatingView=_floatingView;
@property(nonatomic) _Bool visualEffectViewBackgroundEnabled; // @synthesize visualEffectViewBackgroundEnabled=_visualEffectViewBackgroundEnabled;
- (void)_updateSelectedBackgroundColor;	// IMP=0x00000000001da55e
- (unsigned long long)_floatingViewControlState;	// IMP=0x00000000001da51f
- (void)prepareForReuse;	// IMP=0x00000000001da4c7
- (void)layoutSubviews;	// IMP=0x00000000001da3bd
- (id)contentView;	// IMP=0x00000000001da380
@property(readonly, nonatomic) UIView *vuiContentView;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000001da261
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000001da154
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000001da010
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001d9e65
- (void)setSelected:(_Bool)arg1;	// IMP=0x00000000001d9e51
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000001d9caa
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000001d9aad
- (void)updateFloatingViewControlStateForPreviouslyFocusedView:(id)arg1;	// IMP=0x00000000001d99d9
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;	// IMP=0x00000000001d9971
- (_Bool)canBecomeFocused;	// IMP=0x00000000001d995c
- (void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000001d982b
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000001d9817
- (_Bool)_descendantsShouldHighlight;	// IMP=0x00000000001d978e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001d95c5

@end

