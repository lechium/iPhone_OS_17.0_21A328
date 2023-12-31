//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class Protocol;
@protocol CKOperationCallbacks;

@interface CKDOperationCallbackProxy : NSObject
{
    id <CKOperationCallbacks> _clientOperationCallbackProxy;	// 8 = 0x8
    Protocol *_callbackProtocol;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000258439
@property(retain, nonatomic) Protocol *callbackProtocol; // @synthesize callbackProtocol=_callbackProtocol;
@property(retain, nonatomic) id <CKOperationCallbacks> clientOperationCallbackProxy; // @synthesize clientOperationCallbackProxy=_clientOperationCallbackProxy;
- (void)forwardInvocation:(id)arg1;	// IMP=0x000000000025822e
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000000258126
- (id)initWithClientOperationCallbackProxy:(id)arg1 callbackProtocol:(id)arg2;	// IMP=0x0000000000258078

@end

