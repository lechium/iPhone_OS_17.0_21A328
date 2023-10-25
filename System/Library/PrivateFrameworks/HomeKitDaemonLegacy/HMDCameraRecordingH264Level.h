//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPNumberParser.h>

__attribute__((visibility("hidden")))
@interface HMDCameraRecordingH264Level : HAPNumberParser
{
    long long _h264Level;	// 8 = 0x8
}

+ (id)arrayWithLevels:(id)arg1;	// IMP=0x00100000008457e4
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000008457dc
@property(readonly, nonatomic) long long h264Level; // @synthesize h264Level=_h264Level;
- (id)initWithH264Level:(long long)arg1;	// IMP=0x000000000084573f
- (id)initWithTLVData:(id)arg1;	// IMP=0x00000000008456e8
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x000000000084564c
- (id)description;	// IMP=0x00000000008455d8
- (unsigned long long)hash;	// IMP=0x00000000008455c6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000845543
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000008454ac
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000008453ef

@end
