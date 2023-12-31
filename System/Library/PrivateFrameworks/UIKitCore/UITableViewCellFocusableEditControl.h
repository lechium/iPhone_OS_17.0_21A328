//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITableViewCellEditControl.h"

@class _UIFloatingContentView;

__attribute__((visibility("hidden")))
@interface UITableViewCellFocusableEditControl : UITableViewCellEditControl
{
    _UIFloatingContentView *_focusedFloatingContentView;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000123b671
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000123b581
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000123b47b
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000123b388
- (_Bool)_shouldHandlePressEvent:(id)arg1;	// IMP=0x000000000123b380
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x000000000123b306
- (_Bool)wantsImageShadow;	// IMP=0x000000000123b2fe
- (_Bool)wantsMaskingWhileAnimatingDisabled;	// IMP=0x000000000123b2e1
- (void)setSelected:(_Bool)arg1;	// IMP=0x000000000123b262
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000123b1e3
- (void)layoutSubviews;	// IMP=0x000000000123b16e
- (id)_currentImage;	// IMP=0x000000000123b130
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000123b0da
- (void)_updateFloatingViewForCurrentTraits;	// IMP=0x000000000123af31
- (void)_ensureFocusedFloatingContentView;	// IMP=0x000000000123af2b

@end

