//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface WFLSMScoreNormalizedMap
{
    float *maxScore;	// 24 = 0x18
    float *minScore;	// 32 = 0x20
}

- (void)dealloc;	// IMP=0x00000000000051f4
- (id)evaluate:(id)arg1;	// IMP=0x0000000000005076
- (id)initWithMap:(struct __LSMMap *)arg1;	// IMP=0x0000000000004ccf

@end

