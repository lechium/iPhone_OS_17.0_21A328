//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURLAuthenticationChallenge;

@interface NSURLConnectionInternalConnection
{
    int _cfConnLock;	// 68 = 0x44
    struct _CFURLConnection *_cfConn;	// 72 = 0x48
    struct _CFURLAuthChallenge *_currCFChallenge;	// 80 = 0x50
    NSURLAuthenticationChallenge *_currNSChallenge;	// 88 = 0x58
    struct __CFString *_fileName;	// 96 = 0x60
    _Bool _shouldSkipCancelOnRelease;	// 104 = 0x68
    long long _totalBytes;	// 112 = 0x70
    long long _expectedTotalBytes;	// 120 = 0x78
}

- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;	// IMP=0x00000000002200dd
- (void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;	// IMP=0x000000000022007b
- (void)cancelAuthenticationChallenge:(id)arg1;	// IMP=0x000000000021ff38
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;	// IMP=0x000000000021fed4
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;	// IMP=0x000000000021fe5f
- (void)_setShouldSkipCancelOnRelease:(_Bool)arg1;	// IMP=0x000000000021fe4f
- (void)_resumeLoading;	// IMP=0x000000000021fe1f
- (void)_suspendLoading;	// IMP=0x000000000021fdef
- (void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x000000000021fd97
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;	// IMP=0x000000000021fd36
- (void)cancel;	// IMP=0x000000000021fcfd
- (void)start;	// IMP=0x000000000021fcc3
- (void)invokeForDelegate:(CDUnknownBlockType)arg1;	// IMP=0x000000000021fc5a
- (void)_invalidate;	// IMP=0x000000000021fb6c
- (void)_setDelegateQueue:(id)arg1;	// IMP=0x000000000021f9e0
- (void)dealloc;	// IMP=0x000000000021f95a
- (id)_timingData;	// IMP=0x000000000021f917
- (id)initWithInfo:(const struct InternalInit *)arg1;	// IMP=0x000000000021f4a3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

