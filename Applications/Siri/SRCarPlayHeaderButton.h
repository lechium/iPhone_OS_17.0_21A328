//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIButton.h>

@class SRCarPlayFocusView, UIView;

@interface SRCarPlayHeaderButton : UIButton
{
    unsigned long long _accessoryViewPlacement;	// 8 = 0x8
    UIView *_accessoryView;	// 16 = 0x10
    SRCarPlayFocusView *_focusView;	// 24 = 0x18
}

+ (id)_systemImageWithName:(id)arg1;	// IMP=0x004000000000cb32
+ (id)buttonWithTitle:(id)arg1 systemImageNamed:(id)arg2 placement:(unsigned long long)arg3;	// IMP=0x001000000000b9d0
+ (id)buttonWithTitle:(id)arg1 accessoryView:(id)arg2 placement:(unsigned long long)arg3;	// IMP=0x001000000000b748
- (void).cxx_destruct;	// IMP=0x002000000000cbfc
- (void)_updateSubviewAlphasForFocusedState:(_Bool)arg1 selected:(_Bool)arg2;	// IMP=0x001000000000c9b0
- (id)_subviewCompositingFilterForUserInterfaceStyle:(long long)arg1 focused:(_Bool)arg2;	// IMP=0x001000000000c988
- (void)_updateCompositingFilterForUserInterfaceStyle:(long long)arg1 focused:(_Bool)arg2;	// IMP=0x001000000000c8b7
- (id)_subviewTintColorForFocusedState:(_Bool)arg1 selectedState:(_Bool)arg2;	// IMP=0x001000000000c86e
- (void)_updateSubviewsAppearanceForFocusedState:(_Bool)arg1 selectedState:(_Bool)arg2;	// IMP=0x001000000000c7b2
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x001000000000c757
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x001000000000c6fc
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x001000000000c551
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x001000000000c4f6
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x001000000000c49b
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x001000000000c2f1
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x001000000000c280
- (_Bool)canBecomeFocused;	// IMP=0x001000000000c262
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x001000000000c1f1
- (void)layoutSubviews;	// IMP=0x001000000000bd10
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x001000000000bc3f
- (void)updateAccessoryViewWithSystemImageNamed:(id)arg1;	// IMP=0x001000000000bb3b
- (struct CGSize)accessoryViewSizeThatFits:(struct CGSize)arg1;	// IMP=0x001000000000bb2a
- (void)setAccessoryViewTintColor:(id)arg1;	// IMP=0x001000000000bac1
- (id)focusView;	// IMP=0x001000000000baac
@property(readonly, nonatomic) UIView *accessoryView;

@end

