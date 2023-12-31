//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ANNotificationController, NSString, NSXPCListener;

@interface ANDaemon : NSObject
{
    NSXPCListener *_listener;	// 8 = 0x8
    ANNotificationController *_notificationController;	// 16 = 0x10
}

+ (id)_nameForProcessWithPID:(int)arg1;	// IMP=0x0020000000005458
+ (id)sharedInstance;	// IMP=0x0010000000004eec
- (void).cxx_destruct;	// IMP=0x00200000000054e5
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000000506f
- (void)start;	// IMP=0x0010000000005008
- (void)dealloc;	// IMP=0x0010000000004f97
- (id)init;	// IMP=0x0010000000004f41

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

