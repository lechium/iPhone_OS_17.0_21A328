//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, UIScene;

__attribute__((visibility("hidden")))
@interface UIAlertControllerStackManager : NSObject
{
    NSMutableArray *_alertControllerStack;	// 8 = 0x8
    NSMutableArray *_hiddenAlertControllers;	// 16 = 0x10
    UIScene *_scene;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000131f00
@property(nonatomic, getter=_scene, setter=_setScene:) __weak UIScene *_scene; // @synthesize _scene;
- (long long)_alertControllerStackCount;	// IMP=0x0000000000131ed9
- (_Bool)_alertControllerShouldBeTrackedInStack:(id)arg1;	// IMP=0x0000000000131df5
- (void)_didHideAlertController:(id)arg1;	// IMP=0x0000000000131d2f
- (void)_willHideAlertController:(id)arg1;	// IMP=0x0000000000131d29
- (void)_willShowAlertController:(id)arg1;	// IMP=0x0000000000131c63
- (id)_topAlertControllerInStack;	// IMP=0x0000000000131c4d
- (void)_removeAlertControllerFromStack:(id)arg1;	// IMP=0x0000000000131b88
- (void)_addAlertControllerToStack:(id)arg1;	// IMP=0x0000000000131ac3
- (void)_showHiddenStackedAlertControllers;	// IMP=0x0000000000131818
- (void)_hideStackedAlertControllers;	// IMP=0x00000000001315ad
- (void)_alertControllerDidDisappear:(id)arg1;	// IMP=0x000000000013154a
- (void)_alertControllerWillDisappear:(id)arg1;	// IMP=0x0000000000131457
- (void)_alertControllerDidAppear:(id)arg1;	// IMP=0x0000000000131451
- (void)_alertControllerWillAppear:(id)arg1;	// IMP=0x0000000000131346
- (id)initWithScene:(id)arg1;	// IMP=0x00000000001312a9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

