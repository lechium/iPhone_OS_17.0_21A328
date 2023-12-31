//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDThreadNetworkObserver;

__attribute__((visibility("hidden")))
@interface HMDHouseholdThreadNetworkStabilityLogEventFactory : HMFObject
{
    HMDThreadNetworkObserver *_threadNetworkObserver;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000981d27
@property(readonly, nonatomic) HMDThreadNetworkObserver *threadNetworkObserver; // @synthesize threadNetworkObserver=_threadNetworkObserver;
- (void)deleteCountersAfterDate:(id)arg1;	// IMP=0x0000000000981cad
- (void)deleteCountersBeforeDate:(id)arg1;	// IMP=0x0000000000981c44
- (id)coalescedLogEventsFromLogEvents:(id)arg1 homeUUID:(id)arg2;	// IMP=0x0000000000981349
- (id)logEventsFromDictionary:(id)arg1;	// IMP=0x0000000000981240
- (id)serializeLogEvents:(id)arg1;	// IMP=0x0000000000981137
- (id)logEventsPopulatedForHomeWithUUID:(id)arg1 associatedWithDate:(id)arg2;	// IMP=0x0000000000981033
- (id)initWithThreadNetworkObserver:(id)arg1;	// IMP=0x0000000000980fc5

@end

