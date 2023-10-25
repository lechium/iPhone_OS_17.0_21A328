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

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000004cc5b1
+ (id)protocolFromTransportProtocol:(unsigned char)arg1;	// IMP=0x001000000045f837
@property(nonatomic) long long protocol; // @synthesize protocol=_protocol;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004cc45a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004cc409
- (id)serializeWithError:(id *)arg1;	// IMP=0x00000000004cc3ef
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000004cc29d
- (id)initWithProtocol:(long long)arg1;	// IMP=0x00000000004cc260
- (id)init;	// IMP=0x00000000004cc224

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
