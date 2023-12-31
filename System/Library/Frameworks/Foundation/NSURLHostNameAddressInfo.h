//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSURLHostNameAddressInfo : NSObject
{
    double timestamp;	// 8 = 0x8
    struct addrinfo *addressInfo;	// 16 = 0x10
}

+ (void)asyncResolveWithCallbackClient:(id)arg1;	// IMP=0x00600000007446ff
+ (id)addressInfoForHost:(id)arg1;	// IMP=0x0060000000744604
- (void)dealloc;	// IMP=0x000000000074496d
- (double)_timestamp;	// IMP=0x0000000000744962
- (struct addrinfo *)addrinfo;	// IMP=0x0000000000744958
- (id)_initWithAddressInfo:(struct addrinfo *)arg1;	// IMP=0x00000000007448e3

@end

