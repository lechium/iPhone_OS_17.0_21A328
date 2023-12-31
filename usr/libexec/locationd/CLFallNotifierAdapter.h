//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLFallNotifierAdapter
{
}

+ (_Bool)isSupported;	// IMP=0x00200000005fe7f0
+ (id)getSilo;	// IMP=0x00100000005fe5dc
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000005fe5c3
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000005fe566
- (void)onClientAnomalyEventSubscriptionRequest:(id)arg1;	// IMP=0x00200000005feb9a
- (void)setHgalCaptureMode:(unsigned char)arg1;	// IMP=0x00100000005fe9c5
- (void)simulateEvent:(unsigned long long)arg1;	// IMP=0x00100000005fe7f8
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x00100000005fe7c8
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000005fe79b
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x00100000005fe773
- (void *)adaptee;	// IMP=0x00100000005fe740
- (void)endService;	// IMP=0x00100000005fe725
- (void)beginService;	// IMP=0x00100000005fe675
- (id)init;	// IMP=0x00100000005fe638

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

