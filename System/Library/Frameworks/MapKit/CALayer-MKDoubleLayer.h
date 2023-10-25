//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@interface CALayer (MKDoubleLayer)
- (struct CGRect)convertDoubleRect:(struct CGRect)arg1 toLayer:(id)arg2;	// IMP=0x00300000001e7267
- (struct CGRect)convertDoubleRect:(struct CGRect)arg1 fromLayer:(id)arg2;	// IMP=0x00300000001e7234
- (struct CGPoint)convertDoublePoint:(struct CGPoint)arg1 toLayer:(id)arg2;	// IMP=0x00300000001e7222
- (struct CGPoint)convertDoublePoint:(struct CGPoint)arg1 fromLayer:(id)arg2;	// IMP=0x00300000001e7210
- (void)setDoubleBounds:(struct CGRect)arg1;	// IMP=0x00300000001e71fe
- (struct CGRect)doubleBounds;	// IMP=0x00300000001e71df
- (void)setDoublePosition:(struct CGPoint)arg1;	// IMP=0x00300000001e71cd
- (struct CGPoint)doublePosition;	// IMP=0x00300000001e71bb
- (void)_mapkit_setActionsToRemoveDefaultImplicitActions;	// IMP=0x00300000001e7847
- (void)_mapkit_addAnimation:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00300000001e77a5
- (void)_mapkit_removeAnimationImmediatelyForKey:(id)arg1;	// IMP=0x00300000001e766d
@property(readonly, retain, nonatomic) CALayer *_mapKit_mapLayer;
- (_Bool)getPresentationValue:(id *)arg1 forValueKey:(id)arg2 animationKey:(id)arg3 removeAnimation:(_Bool)arg4;	// IMP=0x00300000001e73a5
- (_Bool)getPresentationValue:(id *)arg1 forKey:(id)arg2 removeAnimation:(_Bool)arg3;	// IMP=0x00300000001e738d
@property(readonly, retain, nonatomic) CALayer *currentLayer;
@end
