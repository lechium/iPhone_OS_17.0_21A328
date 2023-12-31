//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIMenuController.h"

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface _UICalloutBarMenuController : UIMenuController
{
    struct CGRect _targetRect;	// 24 = 0x18
    UIView *_targetView;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000ebb239
- (id)_asCalloutBarDelegate;	// IMP=0x0000000000ebb230
- (void)calloutBar:(id)arg1 didFinishAnimation:(id)arg2;	// IMP=0x0000000000ebb014
- (void)calloutBar:(id)arg1 willStartAnimation:(id)arg2;	// IMP=0x0000000000ebae58
- (_Bool)_updateAnimated:(_Bool)arg1 checkVisible:(_Bool)arg2;	// IMP=0x0000000000eba80c
- (void)_reparentCalloutBarIfNeeded;	// IMP=0x0000000000eba6ed
- (struct CGRect)menuFrame;	// IMP=0x0000000000eba64c
- (void)update;	// IMP=0x0000000000eba630
- (id)menuItems;	// IMP=0x0000000000eba5d9
- (void)setMenuItems:(id)arg1;	// IMP=0x0000000000eba55f
- (struct CGRect)_targetRect;	// IMP=0x0000000000eba53f
- (id)_targetView;	// IMP=0x0000000000eba526
- (void)_setTargetRect:(struct CGRect)arg1 inView:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000eba49d
- (void)setTargetRect:(struct CGRect)arg1 inView:(id)arg2;	// IMP=0x0000000000eba3ee
- (void)_windowWillRotate:(id)arg1;	// IMP=0x0000000000eba3dc
- (void)hideMenu;	// IMP=0x0000000000eba3a4
- (void)hideMenuFromView:(id)arg1;	// IMP=0x0000000000eba306
- (void)showMenuFromView:(id)arg1 rect:(struct CGRect)arg2;	// IMP=0x0000000000eba13c
- (void)setMenuVisible:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000eba118
- (void)_hideMenuAnimated:(_Bool)arg1;	// IMP=0x0000000000eba08e
- (void)_showMenuAnimated:(_Bool)arg1;	// IMP=0x0000000000eb9e87
- (_Bool)_menuHidden;	// IMP=0x0000000000eb9dce
- (_Bool)isMenuVisible;	// IMP=0x0000000000eb9d13
- (void)_removeWindowWillRotateObserver;	// IMP=0x0000000000eb9cb3
- (void)dealloc;	// IMP=0x0000000000eb9c31

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

