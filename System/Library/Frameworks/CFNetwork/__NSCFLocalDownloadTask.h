//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSObject, NSString, __NSCFLocalDownloadFile;
@protocol OS_dispatch_data;

@interface __NSCFLocalDownloadTask
{
    CDUnknownBlockType _fileCompletion;	// 184 = 0xb8
    __NSCFLocalDownloadFile *_downloadFile;	// 192 = 0xc0
    NSObject<OS_dispatch_data> *_writeBuffer;	// 200 = 0xc8
    unsigned long long _ioSuspend;	// 208 = 0xd0
    long long _totalWrote;	// 216 = 0xd8
    CDUnknownBlockType _resumeCallback;	// 224 = 0xe0
    long long _initialResumeSize;	// 232 = 0xe8
    NSDictionary *_originalResumeInfo;	// 240 = 0xf0
    unsigned long long _transientWriteProgress;	// 248 = 0xf8
    CDUnknownBlockType _afterDidReportProgressOnQueue;	// 256 = 0x100
    CDUnknownBlockType _dataAckCompletion;	// 264 = 0x108
    int _seqNo;	// 272 = 0x110
    _Bool _canWrite;	// 276 = 0x114
    _Bool _suppressProgress;	// 277 = 0x115
    _Bool _needFinish;	// 278 = 0x116
    _Bool _didIssueNeedFinish;	// 279 = 0x117
}

+ (id)_expandResumeData:(id)arg1;	// IMP=0x001000000002b857
@property(retain) __NSCFLocalDownloadFile *downloadFile; // @synthesize downloadFile=_downloadFile;
- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x0000000000029447
- (void)_task_onqueue_didFinish;	// IMP=0x000000000002942a
- (void)_task_onqueue_didReceiveDispatchData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002900c
- (void)_onqueue_didReceiveResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000028c36
- (id)createResumeInformation:(id)arg1;	// IMP=0x0000000000028589
- (void)terminateExtractorWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002840a
- (void)_onqueue_willCacheResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000283fa
- (void)cancelByProducingResumeData:(CDUnknownBlockType)arg1;	// IMP=0x0000000000028396
- (void)_onqueue_cancelByProducingResumeData:(CDUnknownBlockType)arg1;	// IMP=0x00000000000281eb
- (void)_onqueue_completeInitialization;	// IMP=0x0000000000027daf
- (int)openItemForPath:(id)arg1 mode:(int)arg2;	// IMP=0x0000000000027cb3
- (void)dealloc;	// IMP=0x0000000000027c01
- (struct __CFDictionary *)_copySocketStreamProperties;	// IMP=0x0000000000027b47
- (void)set_keepDownloadTaskFile:(_Bool)arg1;	// IMP=0x0000000000027b20
- (_Bool)_keepDownloadTaskFile;	// IMP=0x0000000000027afc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
