//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FPRTCReportingSession, _TtC9libfssync20FPFSSQLRestoreEngine;

@interface FPFSSQLRestoreManager : NSObject
{
    FPRTCReportingSession *_rtcReporting;	// 8 = 0x8
    _TtC9libfssync20FPFSSQLRestoreEngine *_restoreEngine;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000afd5
@property(retain, nonatomic) _TtC9libfssync20FPFSSQLRestoreEngine *restoreEngine; // @synthesize restoreEngine=_restoreEngine;
@property(readonly, nonatomic) FPRTCReportingSession *rtcReporting; // @synthesize rtcReporting=_rtcReporting;
- (void)reportCompletionTelemetryWithError:(id)arg1 atStep:(id)arg2;	// IMP=0x001000000000ae26
- (void)restoreWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000ace8
- (id)initWithUserURL:(id)arg1;	// IMP=0x001000000000ac03

@end

