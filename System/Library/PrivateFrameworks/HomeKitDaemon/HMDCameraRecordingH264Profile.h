//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPNumberParser.h>

__attribute__((visibility("hidden")))
@interface HMDCameraRecordingH264Profile : HAPNumberParser
{
    long long _h264Profile;	// 8 = 0x8
}

+ (id)arrayWithProfiles:(id)arg1;	// IMP=0x00100000009698e6
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000009698de
@property(readonly, nonatomic) long long h264Profile; // @synthesize h264Profile=_h264Profile;
- (id)initWithH264Profile:(long long)arg1;	// IMP=0x0000000000969841
- (id)initWithTLVData:(id)arg1;	// IMP=0x00000000009697ea
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x000000000096974e
- (id)description;	// IMP=0x00000000009696da
- (unsigned long long)hash;	// IMP=0x00000000009696c8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000969645
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000009695ae
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000009694f1

@end

