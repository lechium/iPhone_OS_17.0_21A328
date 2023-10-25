//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterIPProtocolVersion : NSObject
{
    long long _protocol;	// 8 = 0x8
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x001000000058ebc8
+ (id)protocolFromIPProtocolVersion:(unsigned char)arg1;	// IMP=0x001000000050e7b2
@property(nonatomic) long long protocol; // @synthesize protocol=_protocol;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000058ea71
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000058ea20
- (id)serializeWithError:(id *)arg1;	// IMP=0x000000000058ea06
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000058e8b4
- (id)initWithProtocol:(long long)arg1;	// IMP=0x000000000058e877
- (id)init;	// IMP=0x000000000058e83b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
