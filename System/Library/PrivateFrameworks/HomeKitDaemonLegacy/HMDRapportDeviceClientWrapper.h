//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, RPCompanionLinkClient;

__attribute__((visibility("hidden")))
@interface HMDRapportDeviceClientWrapper : NSObject
{
    RPCompanionLinkClient *_client;	// 8 = 0x8
    long long _activateState;	// 16 = 0x10
    NSMutableArray *_requestQueue;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x0010000000a1e75c
- (void).cxx_destruct;	// IMP=0x0000000000a1e5c0
- (void)_completeQueuedRequestsWithError:(id)arg1;	// IMP=0x0000000000a1e2bf
- (void)_queueRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000a1e012
- (void)sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000a1dd74
- (void)invalidate;	// IMP=0x0000000000a1dcac
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000a1d94d
- (id)initWithClient:(id)arg1;	// IMP=0x0000000000a1d8c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

