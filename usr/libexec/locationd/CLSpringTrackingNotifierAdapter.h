//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLSpringTrackingNotifierAdapter
{
}

+ (id)getSilo;	// IMP=0x0010000000d3e646
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000d3e62d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000d3e5d0
+ (_Bool)isSupported;	// IMP=0x0010000000d3eecb
- (void)querySinceRecord:(struct CLSpringTrackerEntry)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0020000000d3ecfe
- (int)syncgetStopTracking;	// IMP=0x0010000000d3eb22
- (int)syncgetStartTracking;	// IMP=0x0010000000d3e879
- (_Bool)syncgetIsTracking;	// IMP=0x0010000000d3e85a
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000d3e832
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000d3e805
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000d3e7dd
- (void *)adaptee;	// IMP=0x0010000000d3e7aa
- (void)endService;	// IMP=0x0010000000d3e78f
- (void)beginService;	// IMP=0x0010000000d3e6df
- (id)init;	// IMP=0x0010000000d3e6a2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

