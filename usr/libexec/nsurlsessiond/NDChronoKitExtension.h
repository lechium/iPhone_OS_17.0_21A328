//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString;
@protocol OS_dispatch_source;

@interface NDChronoKitExtension
{
    NSObject<OS_dispatch_source> *_delayTimer;	// 40 = 0x28
}

+ (id)requestDelayQueue;	// IMP=0x002000000004f446
- (void).cxx_destruct;	// IMP=0x002000000004f270
- (void)extensionWasRemovedFromScreen:(id)arg1;	// IMP=0x001000000004f23a
- (void)removeObserver:(id)arg1;	// IMP=0x001000000004f0f8
- (void)addObserver:(id)arg1;	// IMP=0x001000000004eecc
- (_Bool)isHandlingBackgroundURLSessionWithIdentifier:(id)arg1 withSessionUUID:(id)arg2;	// IMP=0x001000000004ee0b
- (_Bool)backgroundUpdatesEnabled;	// IMP=0x001000000004ee03
- (_Bool)canBeSuspended;	// IMP=0x001000000004edfb
- (_Bool)shouldElevateDiscretionaryPriority;	// IMP=0x001000000004edf3
- (_Bool)wakeForSessionIdentifier:(id)arg1 withSessionUUID:(id)arg2 wakeRequirement:(long long)arg3;	// IMP=0x001000000004ecc6
- (_Bool)supportsWakes;	// IMP=0x001000000004ecbe
- (id)containerURL;	// IMP=0x001000000004ec4a
- (void)_onqueue_resetRequestDelay;	// IMP=0x001000000004ebf4
- (void)setupDelayTimer;	// IMP=0x001000000004eb1d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

