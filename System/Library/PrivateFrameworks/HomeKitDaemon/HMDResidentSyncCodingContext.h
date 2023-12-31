//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDDeviceAddress, NSSet, _MKFUser;

__attribute__((visibility("hidden")))
@interface HMDResidentSyncCodingContext : NSObject
{
    NSSet *_relevantTriggers;	// 8 = 0x8
    NSSet *_relevantBulletinRegistrations;	// 16 = 0x10
    _Bool _targetIsResident;	// 24 = 0x18
    _MKFUser *_targetUser;	// 32 = 0x20
    HMDDeviceAddress *_targetDeviceAddress;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000821877
@property(readonly, nonatomic) HMDDeviceAddress *targetDeviceAddress; // @synthesize targetDeviceAddress=_targetDeviceAddress;
@property(readonly, nonatomic) _Bool targetIsResident; // @synthesize targetIsResident=_targetIsResident;
@property(readonly, nonatomic) _MKFUser *targetUser; // @synthesize targetUser=_targetUser;
- (id)initWithTargetUser:(id)arg1 targetIsResident:(_Bool)arg2 targetDeviceAddress:(id)arg3;	// IMP=0x0000000000821790

@end

