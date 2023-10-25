//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNImageBlurScoreRequestConfiguration
{
    unsigned long long _maximumIntermediateSideLength;	// 8 = 0x8
    unsigned long long _blurDeterminationMethod;	// 16 = 0x10
}

@property(nonatomic) unsigned long long blurDeterminationMethod; // @synthesize blurDeterminationMethod=_blurDeterminationMethod;
@property(nonatomic) unsigned long long maximumIntermediateSideLength; // @synthesize maximumIntermediateSideLength=_maximumIntermediateSideLength;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001aaeba
- (id)initWithRequestClass:(Class)arg1;	// IMP=0x00000000001aae68

@end
