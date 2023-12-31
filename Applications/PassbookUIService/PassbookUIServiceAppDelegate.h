//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIResponder.h>

@class NSString, PKPassLibrary, UIWindow;

@interface PassbookUIServiceAppDelegate : UIResponder
{
    PKPassLibrary *_passLibrary;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000002a5c
- (void)buildMenuWithBuilder:(id)arg1;	// IMP=0x0010000000002a3d
- (void)_openURLInSafari:(id)arg1;	// IMP=0x001000000000280e
- (_Bool)_handleIssuerBindingRequestWithIssuerData:(id)arg1 signature:(id)arg2;	// IMP=0x0010000000002767
- (_Bool)_handleURLWithHost:(id)arg1 components:(id)arg2 path:(id)arg3 query:(id)arg4;	// IMP=0x00100000000024ba
- (_Bool)_handleUniversalLinkWithUserActivity:(id)arg1;	// IMP=0x0010000000002057
- (id)_componentsForURL:(id)arg1;	// IMP=0x0010000000001ffc
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000001f6b
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;	// IMP=0x0010000000001dc4
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0010000000001c9c
- (_Bool)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;	// IMP=0x0010000000001c23

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

