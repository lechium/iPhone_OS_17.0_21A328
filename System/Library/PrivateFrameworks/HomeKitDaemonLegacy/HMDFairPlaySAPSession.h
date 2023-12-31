//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSObject, NSUUID;
@protocol HMDFairPlaySAPSessionDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDFairPlaySAPSession : HMFObject
{
    unsigned long long _state;	// 8 = 0x8
    id <HMDFairPlaySAPSessionDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 24 = 0x18
    NSUUID *_sessionIdentifier;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_clientQueue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000081e6c9
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, nonatomic) NSUUID *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly) __weak id <HMDFairPlaySAPSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void)verifySignedData:(id)arg1 signature:(id)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000081e5d2
- (void)signatureForData:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000081e549
- (void)_setupSAPSessionWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000081e39b
- (void)_teardown;	// IMP=0x000000000081e395
- (void)_closeWithError:(id)arg1;	// IMP=0x000000000081e283
- (void)close;	// IMP=0x000000000081e212
- (void)openWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000081e189
- (void)dealloc;	// IMP=0x000000000081e14b
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;	// IMP=0x000000000081df30

@end

