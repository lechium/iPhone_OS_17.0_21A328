//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPNumberParser.h>

__attribute__((visibility("hidden")))
@interface HMDCameraRecordingAudioBitRateMode : HAPNumberParser
{
    long long _type;	// 8 = 0x8
}

+ (id)arrayWithBitRateModes:(id)arg1;	// IMP=0x0010000000cddef1
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000cddee9
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cdde2f
- (id)initWithBitRateMode:(long long)arg1;	// IMP=0x0000000000cdddeb
- (id)initWithTLVData:(id)arg1;	// IMP=0x0000000000cddd94
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x0000000000cddcf8
- (id)description;	// IMP=0x0000000000cddc84
- (unsigned long long)hash;	// IMP=0x0000000000cddc72
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cddbef
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000cddb58
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000cdda9b

@end
