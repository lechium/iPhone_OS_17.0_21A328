//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;

@interface VideoConversionHangDetector : NSObject
{
    NSDate *_lastProgressTimestamp;	// 8 = 0x8
    double _progressUnchangedTimeInterval;	// 16 = 0x10
    double _hangDetectionThresholdTimeInterval;	// 24 = 0x18
    double _lastProgress;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000018341
@property double lastProgress; // @synthesize lastProgress=_lastProgress;
@property double hangDetectionThresholdTimeInterval; // @synthesize hangDetectionThresholdTimeInterval=_hangDetectionThresholdTimeInterval;
@property double progressUnchangedTimeInterval; // @synthesize progressUnchangedTimeInterval=_progressUnchangedTimeInterval;
@property(retain) NSDate *lastProgressTimestamp; // @synthesize lastProgressTimestamp=_lastProgressTimestamp;
@property(readonly) _Bool didDetectHang;
- (void)updateCurrentProgress:(double)arg1;	// IMP=0x001000000001823a
- (id)initWithThresholdTimeInterval:(double)arg1;	// IMP=0x0010000000018173

@end
