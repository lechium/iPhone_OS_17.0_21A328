//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICRequestContext, ICUserIdentityStore, NSOperationQueue;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ICDelegationProviderServiceProtocolHandler : NSObject
{
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 8 = 0x8
    ICUserIdentityStore *_identityStore;	// 16 = 0x10
    NSOperationQueue *_operationQueue;	// 24 = 0x18
    unsigned long long _nextSessionUniqueID;	// 32 = 0x20
    ICRequestContext *_requestContext;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000019eafa
- (unsigned long long)_nextSessionUniqueID;	// IMP=0x000000000019eae6
- (void)_getPlayInfoRequestWithStartDelegationResponse:(id)arg1 streamContexts:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000019ea6f
- (void)getStartDelegationRequestForAccountIDs:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000019e9ec
- (void)getFinishDelegationRequestsWithStartDelegationResponse:(id)arg1 streamContexts:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000019e969
- (id)initWithUserIdentityStore:(id)arg1 requestContext:(id)arg2;	// IMP=0x000000000019e866

@end

