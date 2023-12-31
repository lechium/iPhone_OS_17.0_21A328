//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCameraMetricsStreamLogEvent, NSError;

__attribute__((visibility("hidden")))
@interface HMDCameraStreamMetrics : HMFObject
{
    HMDCameraMetricsStreamLogEvent *_cameraStreamMetricsLogEvent;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000023fcba
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) HMDCameraMetricsStreamLogEvent *cameraStreamMetricsLogEvent; // @synthesize cameraStreamMetricsLogEvent=_cameraStreamMetricsLogEvent;
- (void)dealloc;	// IMP=0x000000000023fb8d
- (id)initWithSessionID:(id)arg1 cameraAccessory:(id)arg2 isLocal:(_Bool)arg3;	// IMP=0x000000000023fad4

@end

