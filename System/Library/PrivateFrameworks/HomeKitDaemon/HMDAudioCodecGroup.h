//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPNumberParser.h>

__attribute__((visibility("hidden")))
@interface HMDAudioCodecGroup : HAPNumberParser
{
    unsigned long long _codec;	// 8 = 0x8
}

+ (id)arrayWithCodecs:(id)arg1;	// IMP=0x00100000000761bc
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000761b4
@property(readonly, nonatomic) unsigned long long codec; // @synthesize codec=_codec;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000076152
- (id)initWithAudioCodecGroup:(unsigned long long)arg1;	// IMP=0x000000000007610e
- (id)initWithTLVData:(id)arg1;	// IMP=0x00000000000760b7
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x000000000007601b
- (id)description;	// IMP=0x0000000000075fa7
- (unsigned long long)hash;	// IMP=0x0000000000075f95
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000075f12
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000075e7b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000075dbe

@end
