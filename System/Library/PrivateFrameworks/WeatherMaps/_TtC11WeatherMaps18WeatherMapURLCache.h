//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURLCache.h>

@class NSURLSessionDataTask;

__attribute__((visibility("hidden")))
@interface _TtC11WeatherMaps18WeatherMapURLCache : NSURLCache
{
}

- (id)init;	// IMP=0x0000000000124a0f
- (id)initWithMemoryCapacity:(long long)arg1 diskCapacity:(long long)arg2 directoryURL:(id)arg3;	// IMP=0x000000000012494e
- (id)initWithMemoryCapacity:(long long)arg1 diskCapacity:(long long)arg2 diskPath:(id)arg3;	// IMP=0x0000000000124829
- (void)getCachedResponseForDataTask:(NSURLSessionDataTask *)arg1 completionHandler:(void (^)(NSCachedURLResponse *))arg2;	// IMP=0x0000000000124505
- (void)storeCachedResponse:(id)arg1 forDataTask:(id)arg2;	// IMP=0x00000000001240d7
- (id)cachedResponseForRequest:(id)arg1;	// IMP=0x0000000000123ee0
- (void)storeCachedResponse:(id)arg1 forRequest:(id)arg2;	// IMP=0x0000000000123d89

@end

