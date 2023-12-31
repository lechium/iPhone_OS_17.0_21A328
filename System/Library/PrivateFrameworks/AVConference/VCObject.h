//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, VCDispatchTimer;

__attribute__((visibility("hidden")))
@interface VCObject : NSObject
{
    id _reportingAgent;	// 8 = 0x8
    struct _opaque_pthread_mutex_t _mutex;	// 16 = 0x10
    VCDispatchTimer *_timeoutTimer;	// 80 = 0x50
    NSString *_logPrefix;	// 88 = 0x58
    struct _opaque_pthread_mutex_t _timeoutMutex;	// 96 = 0x60
    struct OpaqueFigCFWeakReference *_reportingAgentWeak;	// 160 = 0xa0
}

+ (void)terminateProcess:(id)arg1 terminateSource:(id)arg2 agent:(struct opaqueRTCReporting *)arg3;	// IMP=0x0060000000487eeb
@property(retain, nonatomic) NSString *logPrefix; // @synthesize logPrefix=_logPrefix;
- (void)stopTerminationTimer;	// IMP=0x0000000000487d95
- (void)startTerminationTimer:(unsigned int)arg1 terminationType:(int)arg2;	// IMP=0x0000000000487952
- (void)stopTimeoutTimer;	// IMP=0x0000000000487940
- (void)startTimeoutTimer;	// IMP=0x0000000000487924
- (void)startDeallocTimerWithTimeout:(unsigned int)arg1;	// IMP=0x000000000048790d
- (void)startDeallocTimer;	// IMP=0x00000000004878f6
@property(nonatomic) struct opaqueRTCReporting *reportingAgent;
- (void)unlock;	// IMP=0x000000000048788c
- (void)lock;	// IMP=0x000000000048787e
- (void)dealloc;	// IMP=0x00000000004877e4
- (id)init;	// IMP=0x000000000048775c

@end

