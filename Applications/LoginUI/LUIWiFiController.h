//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIViewController;

@interface LUIWiFiController : NSObject
{
}

+ (id)sharedController;	// IMP=0x0020000000044391
- (void)_wifiNetworkJoinFinished:(id)arg1;	// IMP=0x002000000004457d
- (void)_wifiNetworkJoinStarted:(id)arg1;	// IMP=0x00100000000444a7
- (void)done:(id)arg1;	// IMP=0x0010000000044463
@property(readonly, nonatomic) UIViewController *viewController;

@end

