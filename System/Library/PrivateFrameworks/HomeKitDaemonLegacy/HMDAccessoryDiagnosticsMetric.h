//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccessory, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAccessoryDiagnosticsMetric : HMFObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    HMDAccessory *_accessory;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x00100000004eb13d
- (void).cxx_destruct;	// IMP=0x00000000004eb10e
@property(readonly) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (id)logIdentifier;	// IMP=0x00000000004eb02d
- (void)resetDiagnosticMetric;	// IMP=0x00000000004eafb4
- (void)collectAndSubmitMetric;	// IMP=0x00000000004eacf6
- (id)state;	// IMP=0x00000000004eace9
- (id)initWithAccessory:(id)arg1 workQueue:(id)arg2;	// IMP=0x00000000004eac4e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

