//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ADDeviceAuthenticationSessionV0 : NSObject
{
    struct NACContextOpaque_ *_nacContext;	// 8 = 0x8
    unsigned long long _sessionState;	// 16 = 0x10
}

@property(readonly, nonatomic) unsigned long long sessionState; // @synthesize sessionState=_sessionState;
- (id)signData:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000150975
- (_Bool)completeWithHandshakeResponse:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000150755
- (id)handshakeRequestWithCertificateData:(id)arg1 error:(id *)arg2;	// IMP=0x001000000015041f
@property(readonly, nonatomic) unsigned long long strategyVersion;
- (void)invalidate;	// IMP=0x001000000015035d
- (void)dealloc;	// IMP=0x001000000015031f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

