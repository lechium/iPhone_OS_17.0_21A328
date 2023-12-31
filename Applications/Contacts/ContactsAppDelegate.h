//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

@class CNCapabilitiesManager, ContactsSceneDelegate, NSBundle, NSString, UIWindow;
@protocol CNSchedulerProvider;

@interface ContactsAppDelegate : UIResponder
{
    UIWindow *_window;	// 8 = 0x8
    CNCapabilitiesManager *_capabilitiesManager;	// 16 = 0x10
    NSBundle *_mainBundle;	// 24 = 0x18
    id <CNSchedulerProvider> _schedulerProvider;	// 32 = 0x20
}

+ (id)log;	// IMP=0x0020000000002b2a
- (void).cxx_destruct;	// IMP=0x0020000000003287
@property(readonly, nonatomic) id <CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property(readonly, nonatomic) NSBundle *mainBundle; // @synthesize mainBundle=_mainBundle;
@property(readonly, nonatomic) CNCapabilitiesManager *capabilitiesManager; // @synthesize capabilitiesManager=_capabilitiesManager;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (_Bool)application:(id)arg1 runTest:(id)arg2 options:(id)arg3;	// IMP=0x001000000000319f
- (id)application:(id)arg1 configurationForConnectingSceneSession:(id)arg2 options:(id)arg3;	// IMP=0x001000000000318a
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x00100000000030e8
- (_Bool)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0010000000002f6a
@property(readonly, nonatomic) ContactsSceneDelegate *mainSceneDelegate;
- (id)initWithCapabilitiesManager:(id)arg1 mainBundle:(id)arg2 schedulerProvider:(id)arg3;	// IMP=0x0010000000002c5a
- (id)init;	// IMP=0x0010000000002b86

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

