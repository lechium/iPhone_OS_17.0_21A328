//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSURLProtocol.h"

@interface _NSCFURLProtocol : NSURLProtocol
{
    struct _CFURLProtocol *_prot;	// 32 = 0x20
    struct NSCFURLProtocolClient *_client;	// 40 = 0x28
}

+ (_Bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;	// IMP=0x0060000000093ee5
+ (id)canonicalRequestForRequest:(id)arg1 task:(id)arg2;	// IMP=0x0060000000093e6e
+ (id)canonicalRequestForRequest:(id)arg1;	// IMP=0x0060000000093deb
+ (_Bool)canInitWithRequest:(id)arg1;	// IMP=0x0060000000093dc1
+ (_Bool)canInitWithTask:(id)arg1;	// IMP=0x0060000000093d72
+ (const struct InternalProtocolImplementation *)_cf_internalImpl;	// IMP=0x0060000000093d69
- (void)stopLoading;	// IMP=0x00000000000939b3
- (void)startLoading;	// IMP=0x0000000000093935
- (void)dealloc;	// IMP=0x00000000000938d9
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;	// IMP=0x00000000000937b2

@end

