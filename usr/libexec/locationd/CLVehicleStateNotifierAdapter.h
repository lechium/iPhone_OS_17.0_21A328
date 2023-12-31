//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLVehicleStateNotifierAdapter
{
}

+ (_Bool)isSupported;	// IMP=0x0020000000e9facc
+ (id)getSilo;	// IMP=0x0010000000e9f8b8
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000e9f89f
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000e9f842
- (void)fetchVehicularDndStateAndHintsAndOperatorStateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0020000000e9fdce
- (void)fetchVehicularDndOperatorStateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000e9fda2
- (void)fetchVehicularDndStateAndHintsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000e9fd49
- (void)fetchVehicularFalsePositiveSuppressionStatusWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000e9fcce
- (void)resetVehicularFalsePositiveSuppressionDnd;	// IMP=0x0010000000e9fb27
- (unsigned long long)syncgetVehicularDndOperatorState;	// IMP=0x0010000000e9fb0d
- (unsigned long long)syncgetVehicularDndHints;	// IMP=0x0010000000e9faf3
- (unsigned long long)syncgetVehicularDndState;	// IMP=0x0010000000e9fad9
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000e9faa4
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000e9fa77
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000e9fa4f
- (void *)adaptee;	// IMP=0x0010000000e9fa1c
- (void)endService;	// IMP=0x0010000000e9fa01
- (void)beginService;	// IMP=0x0010000000e9f951
- (id)init;	// IMP=0x0010000000e9f914

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

