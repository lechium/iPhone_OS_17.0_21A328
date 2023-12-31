//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IDSDeviceConnectionAWDMetrics : NSObject
{
    NSMutableDictionary *_metrics;	// 8 = 0x8
    struct os_unfair_lock_s _writeLock;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0040000000408fd1
- (void).cxx_destruct;	// IMP=0x002000000040ab21
- (id)_currentMetrics;	// IMP=0x001000000040aae3
- (_Bool)_canReportMetric:(id)arg1;	// IMP=0x001000000040aaa3
- (void)_setCreatedAt:(id)arg1 forConnectionUUID:(id)arg2;	// IMP=0x001000000040a866
- (void)setSuccess:(_Bool)arg1 forConnectionUUID:(id)arg2;	// IMP=0x001000000040a647
- (void)setClientOpenSocketCompletionTime:(double)arg1 forConnectionUUID:(id)arg2;	// IMP=0x001000000040a425
- (void)setDaemonOpenSocketCompletionTime:(double)arg1 forConnectionUUID:(id)arg2;	// IMP=0x001000000040a203
- (void)setFirstPacketReceiveTime:(double)arg1 forConnectionUUID:(id)arg2;	// IMP=0x0010000000409fe1
- (void)setDaemonOpenSocketTime:(double)arg1 forConnectionUUID:(id)arg2;	// IMP=0x0010000000409dd1
- (void)setConnectionInitTime:(double)arg1 forConnectionUUID:(id)arg2;	// IMP=0x0010000000409baf
- (void)setClientInitTime:(double)arg1 forConnectionUUID:(id)arg2;	// IMP=0x001000000040998d
- (void)setServiceName:(id)arg1 forConnectionUUID:(id)arg2;	// IMP=0x0010000000409750
- (void)reportAndRemoveForConnectionUUID:(id)arg1;	// IMP=0x001000000040973e
- (void)_reportAndRemoveForConnectionUUID:(id)arg1;	// IMP=0x0010000000409241
- (id)awdMetricsForConnectionUUID:(id)arg1;	// IMP=0x00100000004090cd
- (id)init;	// IMP=0x0010000000409070

@end

