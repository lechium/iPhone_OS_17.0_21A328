//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AAAFoundation/AAFAnalyticsEvent.h>

@interface AAFAnalyticsEvent (AuthKit)
+ (id)ak_analyticsEventWithEventName:(id)arg1 account:(id)arg2 error:(id)arg3;	// IMP=0x005000000006946a
+ (id)ak_analyticsEventWithEventName:(id)arg1 error:(id)arg2;	// IMP=0x00500000000693a5
- (void)ak_updateWithAuthenticationResults:(id)arg1 authContext:(id)arg2 error:(id)arg3;	// IMP=0x00100000000695dc
- (void)ak_updateTelemetryIdWithAccount:(id)arg1;	// IMP=0x0010000000069527
@end

