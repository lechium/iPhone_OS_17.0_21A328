//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VCAudioIO;

__attribute__((visibility("hidden")))
@interface VCSystemAudioCaptureSession : NSObject
{
    struct _opaque_pthread_mutex_t _stateLock;	// 8 = 0x8
    struct AudioStreamBasicDescription _audioBasicDescription;	// 72 = 0x48
    unsigned int _samplesPerFrame;	// 112 = 0x70
    struct opaqueCMSimpleQueue *_poolQueue;	// 120 = 0x78
    struct opaqueCMSimpleQueue *_outputQueue;	// 128 = 0x80
    VCAudioIO *_audioIO;	// 136 = 0x88
}

- (void)resetAudioBufferPool;	// IMP=0x0000000000269bc4
- (void)cleanupQueue:(struct opaqueCMSimpleQueue **)arg1;	// IMP=0x0000000000269b43
- (_Bool)createAudioBufferPool;	// IMP=0x000000000026998a
- (_Bool)stop;	// IMP=0x0000000000269877
- (_Bool)start;	// IMP=0x0000000000269775
- (_Bool)setupAudioIOWithConfig:(CDStruct_dea85fb6 *)arg1;	// IMP=0x000000000026934a
- (void)dealloc;	// IMP=0x000000000026921e
- (id)initWithConfiguration:(CDStruct_dea85fb6 *)arg1;	// IMP=0x0000000000268df5

@end

