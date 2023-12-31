//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VKCImageSubjectGlowLayer : CALayer
{
    _Bool _active;	// 8 = 0x8
    CALayer *_glowLayer;	// 16 = 0x10
    NSMutableDictionary *_subLayersMap;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000a3783
@property(retain, nonatomic) NSMutableDictionary *subLayersMap; // @synthesize subLayersMap=_subLayersMap;
@property(retain, nonatomic) CALayer *glowLayer; // @synthesize glowLayer=_glowLayer;
@property(nonatomic) _Bool active; // @synthesize active=_active;
- (id)animationGroupWithDuration:(double)arg1 beginTime:(double)arg2 animations:(id)arg3;	// IMP=0x00000000000a3679
- (id)animationWithKeyPath:(id)arg1 beginTime:(double)arg2 duration:(double)arg3;	// IMP=0x00000000000a35ce
- (id)shapeLayerLineWidth:(double)arg1 opacity:(double)arg2 path:(struct CGPath *)arg3;	// IMP=0x00000000000a34d8
- (void)renderGlowParameters:(id)arg1 path:(struct CGPath *)arg2 pathLength:(double)arg3 duration:(double)arg4 maxStrokeLengthFraction:(id)arg5 beginDelay:(double)arg6 identifier:(id)arg7;	// IMP=0x00000000000a2bf2
- (void)configureAnimationWithViewScale:(double)arg1 screenScale:(double)arg2 path:(id)arg3 index:(long long)arg4 count:(long long)arg5 identifier:(id)arg6;	// IMP=0x00000000000a26aa
- (void)stopAnimationForIdentifier:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000a24f2
- (void)hideGlow:(_Bool)arg1;	// IMP=0x00000000000a2347
- (void)stopAnimationAnimated:(_Bool)arg1;	// IMP=0x00000000000a2317
- (void)beginAnimationWithViewScale:(double)arg1 screenScale:(double)arg2 path:(id)arg3 index:(long long)arg4 count:(long long)arg5 identifier:(id)arg6;	// IMP=0x00000000000a21fa
- (id)thickGlowParametersWithViewScale:(double)arg1;	// IMP=0x00000000000a210b
- (id)thinGlowParametersWithScreenScale:(double)arg1 viewScale:(double)arg2;	// IMP=0x00000000000a1fee
- (id)init;	// IMP=0x00000000000a1ee7

@end

