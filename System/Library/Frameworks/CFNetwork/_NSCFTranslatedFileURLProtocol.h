//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSURLProtocol.h"

@interface _NSCFTranslatedFileURLProtocol : NSURLProtocol
{
    const struct CFURLProtocolInstanceCallbacks *_callbacks;	// 16 = 0x10
    struct CFURLProtocolClient _cfurlClient;	// 24 = 0x18
    const void *_info;	// 120 = 0x78
}

+ (_Bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;	// IMP=0x0060000000064c3f
+ (id)canonicalRequestForRequest:(id)arg1;	// IMP=0x0060000000064c36
+ (_Bool)canInitWithRequest:(id)arg1;	// IMP=0x0060000000064bd3
+ (const struct CFURLProtocolImplementation *)pimpl;	// IMP=0x0060000000064bcb
- (void)stopLoading;	// IMP=0x0000000000064a90
- (void)startLoading;	// IMP=0x0000000000064a63
- (void)dealloc;	// IMP=0x00000000000649fb
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;	// IMP=0x00000000000648df

@end

