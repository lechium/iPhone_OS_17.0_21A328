//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPMediaItem, NSHashTable, VUIMPMediaItemDownloadControllerState;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VUIMPMediaItemDownloadController : NSObject
{
    NSObject<OS_dispatch_queue> *_observerDispatchQueue;	// 8 = 0x8
    MPMediaItem *_mediaItem;	// 16 = 0x10
    VUIMPMediaItemDownloadControllerState *_state;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_serialProcessingDispatchQueue;	// 32 = 0x20
    NSHashTable *_observers;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001e0a6d
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue; // @synthesize serialProcessingDispatchQueue=_serialProcessingDispatchQueue;
@property(copy, nonatomic) VUIMPMediaItemDownloadControllerState *state; // @synthesize state=_state;
@property(retain, nonatomic) MPMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *observerDispatchQueue; // @synthesize observerDispatchQueue=_observerDispatchQueue;
- (void)_notifyObservers:(id)arg1 stateDidChange:(id)arg2;	// IMP=0x00000000001e0880
- (void)_onProcessingQueue_setState:(id)arg1;	// IMP=0x00000000001e067d
- (void)_enqueueObserverQueueBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001e05c8
- (void)_enqueueAsyncProcessingQueueBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001e0513
- (void)_enqueueAsyncStrongSelfProcessingQueueBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001e0404
- (void)_onProcessingQueue_resumeDownload;	// IMP=0x00000000001e03fe
- (void)_onProcessingQueue_pauseDownload;	// IMP=0x00000000001e03f8
- (void)_onProcessingQueue_cancelDownload;	// IMP=0x00000000001e03f2
- (void)_onProcessingQueue_invalidate;	// IMP=0x00000000001e03ec
- (void)_setState:(id)arg1;	// IMP=0x00000000001e0342
- (void)removeObserver:(id)arg1;	// IMP=0x00000000001e022c
- (void)addObserver:(id)arg1;	// IMP=0x00000000001e0116
- (void)resumeDownload;	// IMP=0x00000000001e00b8
- (void)pauseDownload;	// IMP=0x00000000001e005a
- (void)cancelDownload;	// IMP=0x00000000001dfffc
- (void)invalidate;	// IMP=0x00000000001dffce
@property(readonly, nonatomic, getter=isRestoreDownload) _Bool restoreDownload;
@property(readonly, nonatomic) _Bool supportsCancellation;
@property(readonly, nonatomic) _Bool supportsPausing;
- (id)init;	// IMP=0x00000000001dfede
- (id)initWithMediaItem:(id)arg1 state:(id)arg2 serialProcessingDispatchQueue:(id)arg3;	// IMP=0x00000000001dfdbd

@end

