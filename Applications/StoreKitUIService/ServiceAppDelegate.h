//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

@class NSString, UIWindow;

@interface ServiceAppDelegate : UIResponder
{
    UIWindow *window;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000001233b
@property(retain, nonatomic) UIWindow *window; // @synthesize window;
- (_Bool)_handleSafariScriptDataUpdate:(id)arg1;	// IMP=0x001000000001204c
- (_Bool)_handleUniversalLinkInURLComponents:(id)arg1 forApplication:(id)arg2;	// IMP=0x0010000000011f5d
- (_Bool)_handleUniversalLinkInUserActivity:(id)arg1 forApplication:(id)arg2;	// IMP=0x0010000000011e3e
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000011e23
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;	// IMP=0x0010000000010bde

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
