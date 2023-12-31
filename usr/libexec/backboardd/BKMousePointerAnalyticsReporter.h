//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKMousePointerController, NSCalendar;
@protocol OS_dispatch_queue;

@interface BKMousePointerAnalyticsReporter : NSObject
{
    NSObject<OS_dispatch_queue> *_analyticsReportingQueue;	// 8 = 0x8
    NSCalendar *_gregorianCalendar;	// 16 = 0x10
    BKMousePointerController *_mousePointerController;	// 24 = 0x18
    double _lastReportedPeriodicTriggerTime;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000000bbe8
@property(retain, nonatomic) BKMousePointerController *mousePointerController; // @synthesize mousePointerController=_mousePointerController;
- (void)mousePointerGlobalDevicePreferencesDidChange:(id)arg1;	// IMP=0x001000000000bb51
- (void)availableDevicesDidChange;	// IMP=0x001000000000bab9
- (void)evaluatePeriodicReportingTrigger;	// IMP=0x001000000000b9f0
- (id)init;	// IMP=0x001000000000b8e6

@end

