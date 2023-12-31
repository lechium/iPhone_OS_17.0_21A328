//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EscrowRequestController, NSString;

@interface EscrowRequestServer : NSObject
{
    EscrowRequestController *_controller;	// 8 = 0x8
}

+ (id)request:(id *)arg1;	// IMP=0x002000000003f5b8
+ (id)server;	// IMP=0x001000000003f588
- (void).cxx_destruct;	// IMP=0x002000000003f31b
@property(retain) EscrowRequestController *controller; // @synthesize controller=_controller;
- (void)setupAnalytics;	// IMP=0x001000000003f293
- (void)escrowCompletedWithinLastSeconds:(double)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003ef97
- (void)storePrerecordsInEscrow:(CDUnknownBlockType)arg1;	// IMP=0x001000000003eed7
- (void)resetAllRequests:(CDUnknownBlockType)arg1;	// IMP=0x001000000003eabb
- (void)fetchRequestStatuses:(CDUnknownBlockType)arg1;	// IMP=0x001000000003e5c4
- (void)triggerEscrowUpdate:(id)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000003e49e
- (void)fetchRequestWaitingOnPasscode:(CDUnknownBlockType)arg1;	// IMP=0x001000000003df70
- (void)fetchPrerecord:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000003dcbb
- (void)cachePrerecord:(id)arg1 serializedPrerecord:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000003d9eb
- (_Bool)escrowCompletedWithinLastSeconds:(double)arg1;	// IMP=0x001000000003d8ed
- (_Bool)pendingEscrowUpload:(id *)arg1;	// IMP=0x001000000003d52f
- (id)fetchStatuses:(id *)arg1;	// IMP=0x001000000003d3e9
- (_Bool)triggerEscrowUpdate:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x001000000003d280
- (_Bool)triggerEscrowUpdate:(id)arg1 error:(id *)arg2;	// IMP=0x001000000003d269
- (id)initWithLockStateTracker:(id)arg1;	// IMP=0x001000000003d1e7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

