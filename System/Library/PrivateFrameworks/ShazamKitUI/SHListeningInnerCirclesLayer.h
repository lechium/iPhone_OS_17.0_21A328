//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAMediaTimingFunction, NSArray;

__attribute__((visibility("hidden")))
@interface SHListeningInnerCirclesLayer
{
    NSArray *_innerCircleLayers;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000085ee
@property(retain, nonatomic) NSArray *innerCircleLayers; // @synthesize innerCircleLayers=_innerCircleLayers;
@property(readonly, nonatomic) CAMediaTimingFunction *linearTimingFunction;
@property(readonly, nonatomic) CAMediaTimingFunction *inOutSineTimingFunction;
- (id)innerCircleCoreAnimation;	// IMP=0x00000000000081b0
- (id)innerCircleScaleNullAnimation;	// IMP=0x0000000000008072
- (void)addScaleNullAnimationToInnerCircleLayer:(id)arg1;	// IMP=0x0000000000007fa0
- (void)addCoreAnimationToInnerCircleLayer:(id)arg1 withStartOffset:(double)arg2;	// IMP=0x0000000000007e60
- (void)startListeningAnimation;	// IMP=0x0000000000007d53
- (void)layoutSublayers;	// IMP=0x0000000000007aea
- (id)buildInnerCircleLayers;	// IMP=0x00000000000079b4
- (void)setup;	// IMP=0x0000000000007841

@end

