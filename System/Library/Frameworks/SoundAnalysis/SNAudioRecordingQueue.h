//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioFormat, AVAudioSession, SNAudioQueueConfiguration, SNAudioRecordingQueueScheduler;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SNAudioRecordingQueue : NSObject
{
    AVAudioFormat *_recordFormat;	// 8 = 0x8
    SNAudioQueueConfiguration *_audioQueueConfiguration;	// 16 = 0x10
    AVAudioSession *_session;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 32 = 0x20
    CDUnknownBlockType _bufferHandler;	// 40 = 0x28
    CDUnknownBlockType _interruptionHandler;	// 48 = 0x30
    _Bool _running;	// 56 = 0x38
    struct OpaqueAudioQueue *_audioQueue;	// 64 = 0x40
    SNAudioRecordingQueueScheduler *_aqCallbackScheduler;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000103ed2
- (void)stop;	// IMP=0x0000000000103ec8
- (_Bool)start;	// IMP=0x00000000001039cf
- (void)dealloc;	// IMP=0x00000000001038bb
- (id)initWithFormat:(id)arg1 audioQueueConfiguration:(id)arg2 audioSession:(id)arg3 queue:(id)arg4 audioBufferHandler:(CDUnknownBlockType)arg5 interruptionHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000010376f
- (id)init;	// IMP=0x0000000000103726

@end

