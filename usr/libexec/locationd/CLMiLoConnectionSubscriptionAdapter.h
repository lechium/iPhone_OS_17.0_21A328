//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CLMiLoConnectionSubscriptionAdapter : NSObject
{
    _Bool _valid;	// 8 = 0x8
    void *_subscription;	// 16 = 0x10
}

@property(nonatomic) void *subscription; // @synthesize subscription=_subscription;
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
- (void)onNotification:(int)arg1 withData:(id)arg2;	// IMP=0x00100000002a330a
- (void)onMiLoGenericEvent:(id)arg1;	// IMP=0x00100000002a30d1
- (void)onMiLoObservationMetaInfo:(id)arg1;	// IMP=0x00100000002a2d81
- (void)onMiLoConnectionStatusEventUpdate:(id)arg1;	// IMP=0x00100000002a2bbc
- (void)onMiLoDebugResponse:(id)arg1;	// IMP=0x00100000002a2982
- (void)onMiLoPredictionEventUpdate:(id)arg1;	// IMP=0x00100000002a27f8
- (void)onMiLoServiceEventUpdate:(id)arg1;	// IMP=0x00100000002a1d2d
- (id)initWithMiLoConnectionSubscription:(void *)arg1;	// IMP=0x00100000002a1cf0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

