//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VCPTimeMeasurement;

@interface VCPMADQoSManager : NSObject
{
    struct atomic<bool> _enabled;	// 8 = 0x8
    VCPTimeMeasurement *_timer;	// 16 = 0x10
    struct mach_timebase_info _timebase;	// 24 = 0x18
}

+ (unsigned int)_currentQoSWithTaskID:(unsigned long long)arg1;	// IMP=0x004000000008a237
+ (id)sharedManager;	// IMP=0x0010000000089973
- (void).cxx_destruct;	// IMP=0x002000000008b311
- (void)runAsyncBlock:(CDUnknownBlockType)arg1 withTaskID:(unsigned long long)arg2;	// IMP=0x001000000008ad9d
- (void)runBlock:(CDUnknownBlockType)arg1 withTaskID:(unsigned long long)arg2;	// IMP=0x001000000008a7b8
- (void)disable;	// IMP=0x001000000008a777
- (void)enable;	// IMP=0x001000000008a72c
- (void)_reportDelayForQoS:(unsigned int)arg1 withTaskID:(unsigned long long)arg2;	// IMP=0x0010000000089f97
- (void)_reportQoSChange:(unsigned int)arg1 withTaskID:(unsigned long long)arg2;	// IMP=0x0010000000089c52
- (void)_reportStartingQoS:(unsigned int)arg1 withTaskID:(unsigned long long)arg2;	// IMP=0x00100000000899c8
- (id)init;	// IMP=0x00100000000898eb

@end

