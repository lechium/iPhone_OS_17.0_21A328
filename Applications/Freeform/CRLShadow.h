//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRLColor, NSShadow, NSString;

@interface CRLShadow : NSObject
{
    _Bool mEnabled;	// 8 = 0x8
    double mAngle;	// 16 = 0x10
    double mOffset;	// 24 = 0x18
    double mRadius;	// 32 = 0x20
    double mOpacity;	// 40 = 0x28
    CRLColor *mColor;	// 48 = 0x30
}

+ (id)defaultShadowPresets;	// IMP=0x004000000018d91f
+ (_Bool)automaticallyNotifiesObserversOfCRLColor;	// IMP=0x001000000018d43e
+ (id)keyPathsForValuesAffectingCRLColor;	// IMP=0x001000000018d41e
+ (id)shadowWithNSShadow:(id)arg1;	// IMP=0x001000000018cd1f
+ (id)shadowWithAngle:(double)arg1 offset:(double)arg2 radius:(double)arg3 opacity:(double)arg4 color:(id)arg5 enabled:(_Bool)arg6;	// IMP=0x001000000018cc9a
+ (id)defaultDisabledShadow;	// IMP=0x001000000018cc86
+ (id)defaultShadow;	// IMP=0x001000000018cc6f
+ (id)p_defaultShadowEnabled:(_Bool)arg1;	// IMP=0x001000000018cbe2
- (void).cxx_destruct;	// IMP=0x002000000018de00
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=mEnabled;
@property(readonly, copy, nonatomic) CRLColor *color; // @synthesize color=mColor;
@property(readonly, nonatomic) double opacity; // @synthesize opacity=mOpacity;
@property(readonly, nonatomic) double radius; // @synthesize radius=mRadius;
@property(readonly, nonatomic) double offset; // @synthesize offset=mOffset;
@property(readonly, nonatomic) double angle; // @synthesize angle=mAngle;
@property(readonly, nonatomic) NSShadow *NSShadow;
- (struct CGRect)shadowBoundsForRect:(struct CGRect)arg1 additionalAngle:(double)arg2;	// IMP=0x001000000018d8a4
- (struct CGRect)shadowBoundsForRect:(struct CGRect)arg1;	// IMP=0x001000000018d850
- (struct CGRect)shadowBoundsForRect:(struct CGRect)arg1 additionalTransform:(struct CGAffineTransform)arg2;	// IMP=0x001000000018d6fc
- (struct CGImage *)i_newEmptyImage;	// IMP=0x001000000018d6c2
- (struct CGImage *)newShadowImageForRep:(id)arg1 withSize:(struct CGSize)arg2 drawSelector:(SEL)arg3 unflipped:(_Bool)arg4;	// IMP=0x001000000018d6ba
- (struct CGRect)boundsForRep:(id)arg1;	// IMP=0x001000000018d69c
- (struct CGRect)boundsInNaturalSpaceForRep:(id)arg1;	// IMP=0x001000000018d67e
- (void)applyToContext:(struct CGContext *)arg1 viewScale:(double)arg2 flipped:(_Bool)arg3 extraOffset:(struct CGSize)arg4;	// IMP=0x001000000018d492
- (void)applyToContext:(struct CGContext *)arg1 viewScale:(double)arg2 flipped:(_Bool)arg3;	// IMP=0x001000000018d46d
- (void)applyToContext:(struct CGContext *)arg1 viewScale:(double)arg2;	// IMP=0x001000000018d446
@property(readonly, nonatomic) struct CGPoint offsetDelta;
- (void)i_setEnabled:(_Bool)arg1;	// IMP=0x001000000018d3a6
- (void)i_setOpacity:(double)arg1;	// IMP=0x001000000018d39b
- (void)i_setRadius:(double)arg1;	// IMP=0x001000000018d390
- (void)i_setOffset:(double)arg1;	// IMP=0x001000000018d385
- (void)i_setAngle:(double)arg1;	// IMP=0x001000000018d37a
- (void)i_setColor:(id)arg1;	// IMP=0x001000000018d34d
@property(readonly, nonatomic) NSString *typeDescription;
- (id)description;	// IMP=0x001000000018d215
- (unsigned long long)hash;	// IMP=0x001000000018d1ff
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000018cf78
@property(readonly, nonatomic) unsigned long long shadowType;
@property(readonly, nonatomic) _Bool showForEditingText;
@property(readonly, nonatomic) _Bool isCurvedShadow;
@property(readonly, nonatomic) _Bool isDropShadow;
@property(readonly, nonatomic) _Bool isContactShadow;
- (id)newShadowClampedForSwatches;	// IMP=0x001000000018cf0f
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000018cf07
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000018cefc
- (double)clampOpacity:(double)arg1;	// IMP=0x001000000018cee7
- (double)clampRadius:(double)arg1;	// IMP=0x001000000018ceca
- (double)clampOffset:(double)arg1;	// IMP=0x001000000018ceb0
- (id)i_initWithOpacity:(double)arg1 color:(id)arg2 angle:(double)arg3 offset:(double)arg4 radius:(double)arg5 enabled:(_Bool)arg6;	// IMP=0x001000000018c926

@end

