//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

@class FACircleStateController, FamilyRootViewController, NSString, UIWindow;

@interface UISceneDelegate : UIResponder
{
    FACircleStateController *_currentFamilyCircleStateController;	// 8 = 0x8
    FamilyRootViewController *rootViewController;	// 16 = 0x10
    UIWindow *_window;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000002923
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (_Bool)_handleFamilyURLComponents:(id)arg1 eventType:(id)arg2;	// IMP=0x0010000000002535
- (_Bool)_handleFamilyURL:(id)arg1;	// IMP=0x001000000000221f
- (void)sceneDidEnterBackground:(id)arg1;	// IMP=0x00100000000021c3
- (void)sceneWillEnterForeground:(id)arg1;	// IMP=0x0010000000002167
- (void)sceneWillResignActive:(id)arg1;	// IMP=0x001000000000210b
- (void)sceneDidBecomeActive:(id)arg1;	// IMP=0x00100000000020af
- (void)sceneDidDisconnect:(id)arg1;	// IMP=0x0010000000002053
- (void)scene:(id)arg1 openURLContexts:(id)arg2;	// IMP=0x0010000000001f3c
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;	// IMP=0x0010000000001c5d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
