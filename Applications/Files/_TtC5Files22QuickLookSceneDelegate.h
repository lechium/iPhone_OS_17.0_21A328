//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, UIWindow;

@interface _TtC5Files22QuickLookSceneDelegate : NSObject
{
    MISSING_TYPE *window;	// 8 = 0x8
    MISSING_TYPE *viewController;	// 16 = 0x10
    MISSING_TYPE *documentManager;	// 24 = 0x18
    MISSING_TYPE *currentQuickLookPreviewItemObserver;	// 32 = 0x20
    MISSING_TYPE *currentQuickLookURL;	// 1720 = 0x6b8
    MISSING_TYPE *isSharedScene;	// 5068308 = 0x4d5614
}

- (void).cxx_destruct;	// IMP=0x004000000032fe90
- (id)init;	// IMP=0x001000000032fdb0
- (id)stateRestorationActivityForScene:(id)arg1;	// IMP=0x001000000032fd50
- (void)scene:(id)arg1 openURLContexts:(id)arg2;	// IMP=0x001000000032fcc0
- (void)scene:(id)arg1 continueUserActivity:(id)arg2;	// IMP=0x001000000032fc60
- (void)sceneDidDisconnect:(id)arg1;	// IMP=0x001000000032fc10
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;	// IMP=0x001000000032f380
@property(nonatomic, retain) UIWindow *window; // @synthesize window;

@end

