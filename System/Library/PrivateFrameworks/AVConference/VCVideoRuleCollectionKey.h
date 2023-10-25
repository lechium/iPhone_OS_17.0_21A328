//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCVideoRuleCollectionKey : NSObject
{
    unsigned char _transportType;	// 8 = 0x8
    unsigned char _encodingType;	// 9 = 0x9
    int _payload;	// 12 = 0xc
}

@property(readonly, nonatomic) unsigned char encodingType; // @synthesize encodingType=_encodingType;
@property(readonly, nonatomic) unsigned char transportType; // @synthesize transportType=_transportType;
@property(readonly, nonatomic) int payload; // @synthesize payload=_payload;
- (id)description;	// IMP=0x000000000048924c
- (unsigned long long)hash;	// IMP=0x000000000048921b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000048918e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000048913b
- (id)initWithPayload:(int)arg1 transportType:(unsigned char)arg2 encodingType:(unsigned char)arg3;	// IMP=0x00000000004890c6

@end
