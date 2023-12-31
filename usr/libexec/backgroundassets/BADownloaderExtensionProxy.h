//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BAApplicationInfo, NSString, NSTimer, NSXPCConnection, _EXExtensionProcess;
@protocol OS_dispatch_queue;

@interface BADownloaderExtensionProxy : NSObject
{
    _Bool _sentWillTerminateMessage;	// 8 = 0x8
    _Bool _sentTerminatonMessage;	// 9 = 0x9
    NSString *_identifier;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_shutdownQueue;	// 24 = 0x18
    NSXPCConnection *_extensionConnection;	// 32 = 0x20
    BAApplicationInfo *_applicationInfo;	// 40 = 0x28
    NSTimer *_exitTimer;	// 48 = 0x30
    _EXExtensionProcess *_extensionProcess;	// 56 = 0x38
    unsigned long long _extensionActiveCalls;	// 64 = 0x40
    unsigned long long _extensionWakeAssertions;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000000087e7
@property _Bool sentTerminatonMessage; // @synthesize sentTerminatonMessage=_sentTerminatonMessage;
@property _Bool sentWillTerminateMessage; // @synthesize sentWillTerminateMessage=_sentWillTerminateMessage;
@property unsigned long long extensionWakeAssertions; // @synthesize extensionWakeAssertions=_extensionWakeAssertions;
@property unsigned long long extensionActiveCalls; // @synthesize extensionActiveCalls=_extensionActiveCalls;
@property(retain) _EXExtensionProcess *extensionProcess; // @synthesize extensionProcess=_extensionProcess;
@property(retain) NSTimer *exitTimer; // @synthesize exitTimer=_exitTimer;
@property(retain) BAApplicationInfo *applicationInfo; // @synthesize applicationInfo=_applicationInfo;
@property(retain) NSXPCConnection *extensionConnection; // @synthesize extensionConnection=_extensionConnection;
@property(retain) NSObject<OS_dispatch_queue> *shutdownQueue; // @synthesize shutdownQueue=_shutdownQueue;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
- (void)incrementWakeAssertionWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000000085ba
- (void)decrementWakeAssertionWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000000846e
- (void)markPurgeableWithFileURL:(id)arg1 sandboxToken:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000082a6
@property(readonly, copy) NSString *debugDescription;
- (void)_startExitTimer;	// IMP=0x0010000000007ed7
- (void)_checkForExit;	// IMP=0x0010000000007de6
- (void)_sendingMessage;	// IMP=0x0010000000007d2c
- (void)invalidate;	// IMP=0x0010000000007bea
- (id)extendClientSandboxForStagedURL:(id)arg1 allowWrites:(_Bool)arg2;	// IMP=0x0010000000007adf
- (void)wakeupForTokenWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000007a87
- (void)backgroundDownload:(id)arg1 finishedWithSandboxToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000785e
- (void)backgroundDownload:(id)arg1 failedWithError:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000007635
- (void)extensionWillTerminate;	// IMP=0x001000000000752d
- (_Bool)sendAuthenticationChallenge:(id)arg1 download:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000072d0
- (void)requestDownloadsWithContentRequest:(long long)arg1 manifestURL:(id)arg2 extensionInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000006f63
- (id)initWithExtension:(id)arg1 XPCConnection:(id)arg2 applicationInfo:(id)arg3;	// IMP=0x0010000000005fd3

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

