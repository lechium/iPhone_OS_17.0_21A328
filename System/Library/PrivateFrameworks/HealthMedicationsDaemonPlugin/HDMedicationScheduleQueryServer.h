//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDQueryServer.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface HDMedicationScheduleQueryServer : HDQueryServer
{
    unsigned long long _limit;	// 8 = 0x8
    NSArray *_sortDescriptors;	// 16 = 0x10
}

+ (Class)queryClass;	// IMP=0x00600000000384c2
- (void).cxx_destruct;	// IMP=0x000000000003877d
- (void)_queue_start;	// IMP=0x00000000000384d3
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;	// IMP=0x0000000000038403

@end

