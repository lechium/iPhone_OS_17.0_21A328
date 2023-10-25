//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class CSAudioRecordContext, CSAudioStartStreamOption, CSAudioStopStreamOption, CSAudioStream, CSIntuitiveConvAudioCaptureMonitor, NSString;

@protocol CSIntuitiveConvAudioCaptureMonitorDelegate <NSObject>

@optional
- (void)intuitiveConvAudioCaptureMonitorDidStopAudioCapture:(CSIntuitiveConvAudioCaptureMonitor *)arg1 stopStreamOption:(CSAudioStopStreamOption *)arg2 eventUUID:(NSString *)arg3;
- (void)intuitiveConvAudioCaptureMonitor:(CSIntuitiveConvAudioCaptureMonitor *)arg1 willStopAudioCaptureReason:(unsigned long long)arg2;
- (void)intuitiveConvAudioCaptureMonitor:(CSIntuitiveConvAudioCaptureMonitor *)arg1 didStartAudioCaptureSuccessfully:(_Bool)arg2 option:(CSAudioStartStreamOption *)arg3 eventUUID:(NSString *)arg4;
- (void)intuitiveConvAudioCaptureMonitor:(CSIntuitiveConvAudioCaptureMonitor *)arg1 willStartAudioCaptureWithContext:(CSAudioRecordContext *)arg2 option:(CSAudioStartStreamOption *)arg3;
- (void)intuitiveConvAudioCaptureMonitor:(CSIntuitiveConvAudioCaptureMonitor *)arg1 fetchedAudioStream:(CSAudioStream *)arg2 successfully:(_Bool)arg3;
@end
