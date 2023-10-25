//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

@class HMDAudioCodecGroup, HMDAudioCodecParameters, NSData;

__attribute__((visibility("hidden")))
@interface HMDAudioCodecConfiguration : HAPTLVBase
{
    HMDAudioCodecGroup *_codecGroup;	// 8 = 0x8
    HMDAudioCodecParameters *_audioCodecParameters;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000070851
- (void).cxx_destruct;	// IMP=0x0000000000070820
@property(readonly, copy, nonatomic) HMDAudioCodecParameters *audioCodecParameters; // @synthesize audioCodecParameters=_audioCodecParameters;
@property(readonly, copy, nonatomic) HMDAudioCodecGroup *codecGroup; // @synthesize codecGroup=_codecGroup;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000070750
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000070590
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x0000000000070426
@property(readonly, copy) NSData *tlvData;
- (_Bool)_parseFromTLVData;	// IMP=0x000000000007011a
- (id)initWithAudioCodecGroup:(id)arg1 codecParameter:(id)arg2;	// IMP=0x0000000000070078

@end
