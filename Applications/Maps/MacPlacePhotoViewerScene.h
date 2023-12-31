//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MacPlacePhotoViewerRootViewController, NSString, UIViewController, UIWindow;
@protocol MacPlacePhotoViewerSceneDelegate;

@interface MacPlacePhotoViewerScene : NSObject
{
    UIWindow *_window;	// 8 = 0x8
    MacPlacePhotoViewerRootViewController *_rootViewController;	// 16 = 0x10
    id <MacPlacePhotoViewerSceneDelegate> _delegate;	// 24 = 0x18
}

+ (void)teardownCurrentScene;	// IMP=0x002000000045dad4
+ (id)requestSceneActivation;	// IMP=0x001000000045da91
+ (id)sharedInstance;	// IMP=0x001000000045d9d2
- (void).cxx_destruct;	// IMP=0x002000000045e462
@property(nonatomic) __weak id <MacPlacePhotoViewerSceneDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MacPlacePhotoViewerRootViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(readonly, nonatomic) NSString *sceneTitle;
@property(readonly, nonatomic) UIViewController *topmostViewController;
- (void)sceneDidDisconnect:(id)arg1;	// IMP=0x001000000045e1c5
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;	// IMP=0x001000000045deca
- (void)_destroyCurrentSceneIfNeeded;	// IMP=0x001000000045dd77
- (void)_presentSceneWithRootViewController:(id)arg1 delegate:(id)arg2;	// IMP=0x001000000045dc53
- (void)openPhotoGalleryWithConfiguration:(id)arg1 sceneDelegate:(id)arg2 delegate:(id)arg3;	// IMP=0x001000000045db18
- (id)init;	// IMP=0x001000000045da27

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

