//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafetyMonitor/SMReceiverContact.h>

@class NSString;

@interface SMReceiverContact (RTCoreDataTransformable)
+ (id)createWithReceiverContactMO:(id)arg1;	// IMP=0x00100000004b3894
+ (id)createWithManagedObject:(id)arg1;	// IMP=0x00100000004b3716
- (void)updateManagedObject:(id)arg1;	// IMP=0x00100000004b3e65
- (id)managedObjectWithContext:(id)arg1;	// IMP=0x00100000004b3dc8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
