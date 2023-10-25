//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMAccessoryCapabilities, HMResidentCapabilities, NSString, NSUUID;
@protocol HMDCapabilitiesControllerDataSource, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCapabilitiesController : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSUUID *_homeUUID;	// 16 = 0x10
    NSUUID *_accessoryUUID;	// 24 = 0x18
    HMAccessoryCapabilities *_currentAccessoryCapabilitiesInternal;	// 32 = 0x20
    HMResidentCapabilities *_currentResidentCapabilitiesInternal;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    id <HMDCapabilitiesControllerDataSource> _dataSource;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x001000000080a6c5
- (void).cxx_destruct;	// IMP=0x0000000000809194
- (_Bool)areCurrentResidentCapabilitiesPresentAndDifferent:(id)arg1;	// IMP=0x00000000008090f9
- (_Bool)areCurrentAccessoryCapabilitiesPresentAndDifferent:(id)arg1;	// IMP=0x000000000080905e
- (void)didRemoveCurrentAccessory:(id)arg1;	// IMP=0x0000000000808fcc
- (void)currentAccessoryDidBecomeAvailable;	// IMP=0x0000000000808f78
- (void)didFinishConfiguringHomes;	// IMP=0x0000000000808f66
- (id)encodedCurrentResidentCapabilities;	// IMP=0x0000000000808ef1
- (id)encodedCurrentAccessoryCapabilities;	// IMP=0x0000000000808e7c
- (id)currentResidentCapabilities;	// IMP=0x0000000000808e72
- (id)currentAccessoryCapabilities;	// IMP=0x0000000000808e68
- (void)updateCurrentAccessoryCapabilities;	// IMP=0x0000000000808b68
- (id)initWithQueue:(id)arg1 dataSource:(id)arg2;	// IMP=0x0000000000808a69
- (id)logIdentifier;	// IMP=0x0000000000808a22

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
