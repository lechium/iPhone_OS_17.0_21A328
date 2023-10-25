//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CSRemoteRecordClientDelegate;

@interface CSRemoteRecordClient : NSObject
{
    id <CSRemoteRecordClientDelegate> _delegate;	// 8 = 0x8
    unsigned long long _audioStreamHandleId;	// 16 = 0x10
    NSString *_deviceId;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000001312da
// Error: Property attributes should begin with the type ('T') attribute, property name: deviceId
// Property attributes: (null)

@property(readonly, nonatomic) unsigned long long audioStreamHandleId; // @synthesize audioStreamHandleId=_audioStreamHandleId;
@property(nonatomic) __weak id <CSRemoteRecordClientDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)hasPendingTwoShotBeep;	// IMP=0x0010000000131297
- (id)voiceTriggerEventInfo;	// IMP=0x001000000013128f
- (_Bool)isRecording;	// IMP=0x0010000000131287
- (_Bool)didPlayEndpointBeep;	// IMP=0x001000000013127f
- (_Bool)stopRecording:(id *)arg1;	// IMP=0x0010000000131277
- (_Bool)startRecordingWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x001000000013126f
- (_Bool)isConnected;	// IMP=0x0010000000131267
- (_Bool)waitingForConnection:(double)arg1 error:(id *)arg2;	// IMP=0x001000000013125f
- (id)initWithDeviceId:(id)arg1 audioStreamHandleId:(unsigned long long)arg2;	// IMP=0x0010000000131251

@end
