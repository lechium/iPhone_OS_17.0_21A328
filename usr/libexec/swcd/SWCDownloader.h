//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSOperationQueue, NSString, NSURLSession;
@protocol SWCDownloaderDelegate;

@interface SWCDownloader : NSObject
{
    NSOperationQueue *_queue;	// 8 = 0x8
    NSURLSession *_sessions[4];	// 16 = 0x10
    NSMapTable *_allTaskStates;	// 48 = 0x30
    id <SWCDownloaderDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0010000000004689
@property __weak id <SWCDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x00100000000041ba
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x0010000000004082
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000003382
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000002f1f
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000000288f
- (void)enumerateActiveAASAFileDownloadsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000255a
- (void)updateAASAFileForDomain:(id)arg1 applicationIdentifier:(id)arg2 downloadRoute:(unsigned char)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000002412
- (void)updateAASAFileForDomain:(id)arg1 applicationIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000002367
- (void)downloadAASAFileForDomain:(id)arg1 applicationIdentifier:(id)arg2 downloadRoute:(unsigned char)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000002222
- (void)downloadAASAFileForDomain:(id)arg1 applicationIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000002177
- (void)receiveSIGTERMSignal;	// IMP=0x0010000000002030
- (id)init;	// IMP=0x0010000000001eb6
- (void)_invokeCompletionHandlerForState:(id)arg1 JSONObject:(id)arg2 error:(id)arg3;	// IMP=0x00100000000076b5
- (void)_processDownloadedDataForState:(id)arg1;	// IMP=0x0010000000007162
- (id)_replaceTaskState:(id)arg1;	// IMP=0x0010000000006e28
- (void)_resumePendingTasks;	// IMP=0x00100000000068ac
- (void)_enumerateTaskStatesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000066bd
- (id)_URLRequestWithDomain:(id)arg1 downloadRoute:(unsigned char)arg2;	// IMP=0x00100000000061de
- (void)_downloadAASAFileForDomain:(id)arg1 applicationIdentifier:(id)arg2 downloadRoute:(unsigned char)arg3 discretionary:(_Bool)arg4 completionHandlers:(id)arg5;	// IMP=0x00100000000056d9
- (id)_taskStateForDomain:(id)arg1 downloadRoute:(unsigned char)arg2;	// IMP=0x001000000000540b
- (unsigned long long)_maximumActiveTaskCountForSessionID:(unsigned char)arg1;	// IMP=0x00100000000053ec
- (id)_sessionForTaskState:(id)arg1;	// IMP=0x00100000000051f5
- (unsigned char)_sessionIDForTaskState:(id)arg1;	// IMP=0x0010000000005182

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

