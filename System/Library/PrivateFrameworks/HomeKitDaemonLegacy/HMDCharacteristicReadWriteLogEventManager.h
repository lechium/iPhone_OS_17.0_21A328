//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface HMDCharacteristicReadWriteLogEventManager : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_consecutiveFailureCountByHMDAccessoryUUID;	// 16 = 0x10
    NSMutableDictionary *_timeOfFirstFailureByHMDAccessoryUUID;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0040000000870945
- (void).cxx_destruct;	// IMP=0x000000000087091d
@property(readonly, nonatomic) NSMutableDictionary *timeOfFirstFailureByHMDAccessoryUUID; // @synthesize timeOfFirstFailureByHMDAccessoryUUID=_timeOfFirstFailureByHMDAccessoryUUID;
@property(readonly, nonatomic) NSMutableDictionary *consecutiveFailureCountByHMDAccessoryUUID; // @synthesize consecutiveFailureCountByHMDAccessoryUUID=_consecutiveFailureCountByHMDAccessoryUUID;
- (double)timeIntervalSinceFirstFailureForAccessoryUUID:(id)arg1;	// IMP=0x00000000008707df
- (unsigned long long)consecutiveFailureCountForAccessoryUUID:(id)arg1;	// IMP=0x000000000087071f
- (void)handleSubmittedErrorCode:(long long)arg1 forAccessoryUUID:(id)arg2;	// IMP=0x0000000000870491
- (id)init;	// IMP=0x000000000087041c

@end

