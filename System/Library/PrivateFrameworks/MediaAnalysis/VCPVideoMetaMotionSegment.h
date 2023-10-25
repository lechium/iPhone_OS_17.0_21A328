//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VCPVideoMetaMotionSegment
{
    float _absMotion;	// 8 = 0x8
    float _stabilityScore;	// 12 = 0xc
}

@property float stabilityScore; // @synthesize stabilityScore=_stabilityScore;
@property float absMotion; // @synthesize absMotion=_absMotion;
- (void)mergeSegment:(id)arg1;	// IMP=0x0000000000090d3c
- (void)finalizeAtTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x0000000000090cb8
- (void)updateSegment:(float)arg1 atTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x0000000000090c36
- (void)resetSegment:(float)arg1 atTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x0000000000090bc5
- (id)initWithAbsMotion:(float)arg1 atTime:(CDStruct_1b6d18a9)arg2;	// IMP=0x0000000000090b2b

@end
