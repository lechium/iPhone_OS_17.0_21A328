//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "ICAsyncOperation.h"

@class ICSAPSession;

__attribute__((visibility("hidden")))
@interface ICSAPSessionPrepareFairPlayContextOperation : ICAsyncOperation
{
    ICSAPSession *_sapSession;	// 8 = 0x8
    CDUnknownBlockType _responseHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000015a80b
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(retain, nonatomic) ICSAPSession *sapSession; // @synthesize sapSession=_sapSession;
- (void)_exchangeDataWithSAPContext:(id)arg1 requestContext:(id)arg2 setupURL:(id)arg3 responseData:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000015a74e
- (void)execute;	// IMP=0x000000000015a6dc

@end

