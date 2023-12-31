//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURLResponse, NSURLSessionTask;
@protocol OS_dispatch_data, OS_dispatch_queue, __NSCFURLSessionConnectionDelegate;

@interface __NSCFURLSessionConnection : NSObject
{
    NSURLSessionTask *_task;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    id <__NSCFURLSessionConnectionDelegate> _delegate;	// 24 = 0x18
    _Bool _isFromCache;	// 32 = 0x20
    NSURLResponse *_cacheResponse;	// 40 = 0x28
    NSObject<OS_dispatch_data> *_cacheData;	// 48 = 0x30
    unsigned long long _cacheDataMax;	// 56 = 0x38
    long long _maxCacheEntrySize;	// 64 = 0x40
}

- (void)setIsDownload:(_Bool)arg1;	// IMP=0x00000000000964b4
- (void)setTLSMaximumSupportedProtocolVersion:(unsigned short)arg1;	// IMP=0x00000000000964ae
- (void)setTLSMinimumSupportedProtocolVersion:(unsigned short)arg1;	// IMP=0x00000000000964a8
- (void)expectedProgressTargetChanged;	// IMP=0x00000000000964a2
- (void)setBytesPerSecondLimit:(long long)arg1;	// IMP=0x000000000009649c
- (void)setPriorityHint:(float)arg1 incremental:(_Bool)arg2;	// IMP=0x0000000000096496
- (void)setPoolPriority:(long long)arg1;	// IMP=0x0000000000096490
- (void)resume;	// IMP=0x000000000009648a
- (void)suspend;	// IMP=0x0000000000096484
- (void)cancel;	// IMP=0x000000000009647e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000096473
- (void)dealloc;	// IMP=0x00000000000963e6
- (id)initWithTask:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;	// IMP=0x0000000000096328

@end

