//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterProtocol : NSObject
{
    long long _protocol;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x001000000058f43c
+ (id)protocolFromTransportProtocol:(unsigned char)arg1;	// IMP=0x001000000050e14c
@property(nonatomic) long long protocol; // @synthesize protocol=_protocol;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000058f2e5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000058f294
- (id)serializeWithError:(id *)arg1;	// IMP=0x000000000058f27a
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000058f128
- (id)initWithProtocol:(long long)arg1;	// IMP=0x000000000058f0eb
- (id)init;	// IMP=0x000000000058f0af

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

