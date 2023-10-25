//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString, PurchaseHistoryItemsRequestContext, URLBag, XPCRequestToken;

@interface PurchaseHistoryItemsRequest : NSObject
{
    URLBag *_bag;	// 8 = 0x8
    PurchaseHistoryItemsRequestContext *_context;	// 16 = 0x10
    NSData *_responseData;	// 24 = 0x18
    unsigned int _status;	// 32 = 0x20
    _Bool _hasRequestedAuth;	// 36 = 0x24
    XPCRequestToken *_token;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000001b55dd
- (void)authenticateTask:(id)arg1 handleDialogRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001b536b
- (void)AMSURLSession:(id)arg1 task:(id)arg2 handleAuthenticateRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001b4c95

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
