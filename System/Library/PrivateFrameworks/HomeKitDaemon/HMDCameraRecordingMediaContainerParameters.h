//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

@class NSData, NSNumber;

__attribute__((visibility("hidden")))
@interface HMDCameraRecordingMediaContainerParameters : HAPTLVBase
{
    NSNumber *_fragmentLength;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000006d334a
- (void).cxx_destruct;	// IMP=0x00000000006d3337
@property(readonly, copy, nonatomic) NSNumber *fragmentLength; // @synthesize fragmentLength=_fragmentLength;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000006d32b6
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000006d321e
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x00000000006d3147
@property(readonly, copy) NSData *tlvData;
- (_Bool)_parseFromTLVData;	// IMP=0x00000000006d2fb8
- (id)initWithFragmentLength:(id)arg1;	// IMP=0x00000000006d2f4a

@end
