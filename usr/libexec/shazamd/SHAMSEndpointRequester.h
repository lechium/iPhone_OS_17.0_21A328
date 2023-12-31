//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSMediaRequestEncoder, AMSURLSession, NSString;

@interface SHAMSEndpointRequester : NSObject
{
    AMSMediaRequestEncoder *_encoder;	// 8 = 0x8
    NSString *_clientIdentifier;	// 16 = 0x10
    long long _clientType;	// 24 = 0x18
    AMSURLSession *_session;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000000c8db
@property(retain, nonatomic) AMSURLSession *session; // @synthesize session=_session;
@property(nonatomic) long long clientType; // @synthesize clientType=_clientType;
@property(copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly, nonatomic) AMSMediaRequestEncoder *encoder; // @synthesize encoder=_encoder;
- (id)sessionConfiguration;	// IMP=0x001000000000c615
- (void)performRequest:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000c298
- (_Bool)isTokenFailureError:(id)arg1;	// IMP=0x001000000000c209
- (void)handleResult:(id)arg1 callback:(CDUnknownBlockType)arg2 error:(id)arg3;	// IMP=0x001000000000bf87
- (void)invalidate;	// IMP=0x001000000000bf4a
- (id)initWithClientIdentifier:(id)arg1 clientType:(long long)arg2;	// IMP=0x001000000000be7a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

