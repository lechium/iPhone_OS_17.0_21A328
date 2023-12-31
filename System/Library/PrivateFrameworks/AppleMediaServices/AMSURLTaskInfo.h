//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSContiguousActionPerformer, AMSURLAction, AMSURLRequestProperties, AMSURLSession, NSData, NSError, NSMutableData, NSMutableSet, NSSet, NSURLResponse, NSURLSessionTask, NSURLSessionTaskMetrics;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSURLTaskInfo : NSObject
{
    NSMutableData *_data;	// 8 = 0x8
    NSMutableSet *_retryIdentifiers;	// 16 = 0x10
    _Bool _performingBlockWithDataAccess;	// 24 = 0x18
    CDUnknownBlockType _completionBlock;	// 32 = 0x20
    NSError *_error;	// 40 = 0x28
    NSURLSessionTaskMetrics *_metrics;	// 48 = 0x30
    unsigned long long _previousAuthorizationCredentialSource;	// 56 = 0x38
    AMSURLRequestProperties *_properties;	// 64 = 0x40
    AMSURLAction *_receivedAction;	// 72 = 0x48
    NSURLResponse *_response;	// 80 = 0x50
    long long _retryCount;	// 88 = 0x58
    AMSURLSession *_session;	// 96 = 0x60
    NSURLResponse *_originalResponse;	// 104 = 0x68
    unsigned long long _signpostID;	// 112 = 0x70
    NSURLSessionTask *_task;	// 120 = 0x78
    struct os_unfair_recursive_lock_s _taskLock;	// 128 = 0x80
    NSObject<OS_dispatch_queue> *_taskQueue;	// 136 = 0x88
    AMSContiguousActionPerformer *_contiguousActionPerformer;	// 144 = 0x90
}

+ (id)sharedTaskQueue;	// IMP=0x00400000003dbb38
+ (id)sharedTaskStore;	// IMP=0x00400000003dbae3
+ (void)removeTaskInfoForTask:(id)arg1;	// IMP=0x00400000003daa0d
+ (id)createTaskInfoForTask:(id)arg1;	// IMP=0x00400000003da7c8
+ (id)taskInfoForTask:(id)arg1;	// IMP=0x00400000003da5e8
- (void).cxx_destruct;	// IMP=0x00000000003dbc19
@property(readonly, nonatomic) AMSContiguousActionPerformer *contiguousActionPerformer; // @synthesize contiguousActionPerformer=_contiguousActionPerformer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(readonly, nonatomic) struct os_unfair_recursive_lock_s taskLock; // @synthesize taskLock=_taskLock;
@property(readonly, nonatomic) NSURLSessionTask *task; // @synthesize task=_task;
@property(nonatomic) unsigned long long signpostID; // @synthesize signpostID=_signpostID;
@property(retain, nonatomic) NSURLResponse *originalResponse; // @synthesize originalResponse=_originalResponse;
- (void)setAccount:(id)arg1;	// IMP=0x00000000003db9fd
- (void)_performDataAccessUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000003db94c
- (void)finishContiguousAsyncActionWithIdentifier:(unsigned long long)arg1;	// IMP=0x00000000003db900
- (void)continueContiguousAsyncActionWithIdentifier:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000003db889
- (unsigned long long)startContiguousAsyncActionWithInitialDataBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000003db729
- (unsigned long long)startContiguousAsyncActionWithInitialBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000003db6bb
- (void)performSyncBlockWithExclusiveAccess:(CDUnknownBlockType)arg1;	// IMP=0x00000000003db596
- (void)performSyncBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000003db4fe
- (void)performAsyncBlockWithData:(CDUnknownBlockType)arg1;	// IMP=0x00000000003db41e
- (void)performAsyncBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000003db3b5
- (void)migrateFromTaskInfo:(id)arg1;	// IMP=0x00000000003db276
- (id)createMetricsContextForDecodedObject:(id)arg1;	// IMP=0x00000000003db1d8
- (void)assertIsOnPrivateQueue;	// IMP=0x00000000003db1a3
- (void)assertHasExclusiveAccess;	// IMP=0x00000000003db160
- (void)appendData:(id)arg1;	// IMP=0x00000000003db0d9
- (void)addRetryIdentifier:(id)arg1;	// IMP=0x00000000003db07d
@property(retain, nonatomic) AMSURLSession *session; // @synthesize session=_session;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) AMSURLAction *receivedAction; // @synthesize receivedAction=_receivedAction;
@property(retain, nonatomic) AMSURLRequestProperties *properties; // @synthesize properties=_properties;
@property(nonatomic) unsigned long long previousAuthorizationCredentialSource; // @synthesize previousAuthorizationCredentialSource=_previousAuthorizationCredentialSource;
@property(retain, nonatomic) NSURLSessionTaskMetrics *metrics; // @synthesize metrics=_metrics;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, nonatomic) NSSet *retryIdentifiers;
@property(readonly, nonatomic) NSData *data;
- (id)initWithTask:(id)arg1;	// IMP=0x00000000003da4a1

@end

