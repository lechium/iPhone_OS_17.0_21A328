//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class NSString;

@interface CLRunningAggregatorAWD : CLIntersiloService
{
    _Bool fHasRun;	// 8 = 0x8
    _Bool fInSession;	// 9 = 0x9
    struct deque<std::pair<double, double>, std::allocator<std::pair<double, double>>> fStepWindow;	// 16 = 0x10
    struct unique_ptr<CLStepCountNotifier_Type::Client, std::default_delete<CLStepCountNotifier_Type::Client>> fStepCountClient;	// 64 = 0x40
}

+ (id)getSilo;	// IMP=0x002000000090321a
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000903201
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000009031a4
- (id).cxx_construct;	// IMP=0x002000000090391f
- (void).cxx_destruct;	// IMP=0x00100000009038e3
- (void)checkForRunningThreshold;	// IMP=0x0010000000903727
- (void)clearStepArray;	// IMP=0x00100000009036b0
- (void)ageOutStepArray;	// IMP=0x0010000000903630
- (void)updateSession:(long long)arg1;	// IMP=0x00100000009035e8
- (void)onStepNotification:(int)arg1 data:(union NotificationData)arg2;	// IMP=0x0010000000903482
- (_Bool)syncgetCompanionOnlyNoGPSRun;	// IMP=0x001000000090346e
- (void)endService;	// IMP=0x001000000090341f
- (void)beginService;	// IMP=0x00100000009032b3
- (id)init;	// IMP=0x0010000000903276

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

