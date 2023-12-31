//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _CDContextualChangeRegistration, geo_isolater;
@protocol OS_dispatch_source;

@interface MCPOIBusynessAppLaunchMonitor : NSObject
{
    geo_isolater *_isolater;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_sigUsr1Source;	// 16 = 0x10
    _CDContextualChangeRegistration *_changeRegistration;	// 24 = 0x18
}

+ (id)_contextStorePredicate;	// IMP=0x00200000000083a7
+ (void)_processLaunch;	// IMP=0x0010000000008273
+ (id)sharedAppLaunchMonitor;	// IMP=0x0010000000007df5
- (void).cxx_destruct;	// IMP=0x0020000000008877
- (void)stopMonitoring;	// IMP=0x0010000000008767
- (void)_createContextStoreRegistrationIfNecessary;	// IMP=0x0010000000008115
- (void)startMonitoring;	// IMP=0x0010000000008014
- (id)init;	// IMP=0x0010000000007e4a

@end

