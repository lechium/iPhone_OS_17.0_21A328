//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafetyMonitor/SMReceiverSessionStatus.h>

@class NSString;

@interface SMReceiverSessionStatus (RTCoreDataTransformable)
+ (id)createWithReceiverSessionStatusMO:(id)arg1;	// IMP=0x0010000000321ed1
+ (id)createWithManagedObject:(id)arg1;	// IMP=0x0010000000321d53
- (void)updateManagedObject:(id)arg1;	// IMP=0x0010000000322767
- (id)managedObjectWithContext:(id)arg1;	// IMP=0x00100000003226ca

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
