//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreMotion/CMOdometer.h>

@class NSString;

@interface CMOdometer (HealthDaemon)
- (void)hd_stopStreaming;	// IMP=0x00200000004fd955
- (void)hd_beginStreamingFromDatum:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00200000004fd8ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

