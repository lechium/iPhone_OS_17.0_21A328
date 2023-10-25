//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DRDispatchTimer, NSMutableDictionary, NSMutableSet, NSString, UIWindow;
@protocol DRPasteAnnouncing;

@interface DRAppDelegate : NSObject
{
    id <DRPasteAnnouncing> _pasteAnnouncer;	// 8 = 0x8
    DRDispatchTimer *_launchWatchdogTimer;	// 16 = 0x10
    NSMutableDictionary *_activatedSceneGroupByDisplayIdentifier;	// 24 = 0x18
    NSMutableSet *_displaysThatFinishedSceneCreation;	// 32 = 0x20
    NSMutableDictionary *_windowScenesByDisplayIdentifier;	// 40 = 0x28
    NSMutableDictionary *_sceneDelegateByDisplayIdentifier;	// 48 = 0x30
    NSMutableDictionary *_virtualHIDServiceByDisplayIdentifier;	// 56 = 0x38
    NSMutableDictionary *_layoutMonitorByDisplayIdentifier;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000003f7d
- (void)scene:(id)arg1 didReceiveActions:(id)arg2;	// IMP=0x0010000000003f77
- (void)scene:(id)arg1 didUpdateWithDiff:(id)arg2 transitionContext:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000003e8d
- (void)_sceneDidDisconnect:(id)arg1;	// IMP=0x0010000000003bdd
- (void)_sceneWillConnect:(id)arg1;	// IMP=0x00100000000037c8
- (id)_contentViewControllerForInteractionWindow:(id)arg1;	// IMP=0x0010000000003704
- (id)_sourceInteractionWindowForDragSession:(id)arg1;	// IMP=0x00100000000035d5
- (id)displayIdentifierForSceneIdentifier:(id)arg1;	// IMP=0x00100000000033cf
- (id)allDisplayIdentifiers;	// IMP=0x00100000000033b9
- (id)virtualHIDServiceForWindow:(id)arg1;	// IMP=0x0010000000003331
- (id)targetViewControllerForSession:(id)arg1;	// IMP=0x001000000000327e
- (id)sourceViewControllerForSession:(id)arg1;	// IMP=0x001000000000321f
- (id)sourceDisplayIdentifierForDragSession:(id)arg1;	// IMP=0x00100000000031aa
- (id)sourceScreenForDragSession:(id)arg1;	// IMP=0x0010000000003130
- (id)contentWindowForHardwareDisplayIdentifier:(id)arg1;	// IMP=0x0010000000003084
- (id)touchTrackingWindowForHardwareDisplayIdentifier:(id)arg1;	// IMP=0x0010000000002fd8
- (id)activatedSceneGroupForDisplayIdentifier:(id)arg1;	// IMP=0x0010000000002efc
- (void)_setEventFetchThreadPriorityWhenPossible;	// IMP=0x0010000000002e26
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0010000000002d57
- (id)init;	// IMP=0x0010000000002aad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end
