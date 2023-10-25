//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSMescalFairPlay, AMSURLSession, NSData;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSMescalSession : NSObject
{
    NSData *_certificateData;	// 8 = 0x8
    AMSURLSession *_urlSession;	// 16 = 0x10
    AMSMescalFairPlay *_fairPlayContext;	// 24 = 0x18
    long long _mescalType;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 40 = 0x28
}

+ (id)sessionWithType:(long long)arg1;	// IMP=0x00600000002fe665
+ (id)primeSession;	// IMP=0x00600000002fe5fb
+ (id)defaultSession;	// IMP=0x00600000002fe591
- (void).cxx_destruct;	// IMP=0x0000000000301d52
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (_Bool)_verifyEntitlements;	// IMP=0x0000000000301cdc
- (_Bool)_shouldRetryFairPlayForError:(id)arg1;	// IMP=0x0000000000301c4d
- (void)_resetSession;	// IMP=0x0000000000301c23
- (id)_postExchangeData:(id)arg1 bag:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000301686
- (id)_loadCertificateDataWithBag:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000301173
- (id)_establishContextWithBag:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000300c4a
- (id)_cachedCertPath;	// IMP=0x0000000000300b0c
- (id)_cachedCertData;	// IMP=0x0000000000300611
- (_Bool)_cacheCertData:(id)arg1 expiration:(double)arg2;	// IMP=0x00000000002ffee7
- (_Bool)verifyPrimeSignature:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002ffb5b
- (_Bool)verifyData:(id)arg1 withSignature:(id)arg2 bag:(id)arg3 error:(id *)arg4;	// IMP=0x00000000002ff420
- (id)signData:(id)arg1 bag:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002fed79
- (id)primeSignatureForData:(id)arg1 bag:(id)arg2 error:(id *)arg3;	// IMP=0x00000000002fe6ad
- (id)initWithType:(long long)arg1;	// IMP=0x00000000002fe4ff

@end
