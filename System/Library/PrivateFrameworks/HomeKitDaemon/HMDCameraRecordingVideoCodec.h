//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPNumberParser.h>

__attribute__((visibility("hidden")))
@interface HMDCameraRecordingVideoCodec : HAPNumberParser
{
    long long _type;	// 8 = 0x8
}

+ (id)arrayWithCodecTypes:(id)arg1;	// IMP=0x00100000009692e8
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000009692e0
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000969226
- (id)initWithCodec:(long long)arg1;	// IMP=0x00000000009691e2
- (id)initWithTLVData:(id)arg1;	// IMP=0x000000000096918b
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x00000000009690ef
- (id)description;	// IMP=0x000000000096907b
- (unsigned long long)hash;	// IMP=0x0000000000969069
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000968fe6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000968f4f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000968e92

@end
