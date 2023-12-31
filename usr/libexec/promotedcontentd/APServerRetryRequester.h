//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class APServerRequest;

@interface APServerRetryRequester
{
    long long _responseResult;	// 8 = 0x8
    APServerRequest *_serverRequest;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000008aa9d
@property(retain, nonatomic) APServerRequest *serverRequest; // @synthesize serverRequest=_serverRequest;
@property(nonatomic) long long responseResult; // @synthesize responseResult=_responseResult;
- (void)responseReceived:(id)arg1 responseProtobuf:(id)arg2 error:(id)arg3;	// IMP=0x001000000008aa1b
- (id)buildURLForRequestProtobuf:(id)arg1;	// IMP=0x001000000008a9d4
- (id)protoBuffer;	// IMP=0x001000000008a98d
- (Class)responseClass;	// IMP=0x001000000008a946
- (id)headers;	// IMP=0x001000000008a8ff
- (id)initFromServerRequest:(id)arg1;	// IMP=0x001000000008a81b

@end

