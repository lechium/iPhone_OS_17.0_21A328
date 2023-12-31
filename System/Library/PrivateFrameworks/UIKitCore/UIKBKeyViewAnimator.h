//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKBKeyViewAnimator : NSObject
{
    _Bool _disabled;	// 8 = 0x8
    double _keyScale;	// 16 = 0x10
}

+ (id)normalizedUnwindAnimationWithKeyPath:(id)arg1 originallyFromValue:(id)arg2 toValue:(id)arg3 offset:(double)arg4;	// IMP=0x0010000000b69029
+ (id)normalizedUnwindOpacityAnimationWithKeyPath:(id)arg1 originallyFromValue:(id)arg2 toValue:(id)arg3 offset:(double)arg4;	// IMP=0x0010000000b68e4b
+ (id)normalizedUnwindAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 offset:(double)arg4;	// IMP=0x0010000000b68d48
+ (id)normalizedAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3;	// IMP=0x0010000000b68c28
@property(nonatomic) double keyScale; // @synthesize keyScale=_keyScale;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
- (void)reset;	// IMP=0x0000000000b6b39e
- (void)endTransitionForKeyView:(id)arg1;	// IMP=0x0000000000b6b2b1
- (void)updateTransitionForKeyView:(id)arg1 normalizedDragSize:(struct CGSize)arg2;	// IMP=0x0000000000b6afdd
- (void)transitionEndedForKeyView:(id)arg1 alternateCount:(unsigned long long)arg2;	// IMP=0x0000000000b6a2ee
- (void)transitionStartedForKeyView:(id)arg1 alternateCount:(unsigned long long)arg2 toLeft:(_Bool)arg3;	// IMP=0x0000000000b69750
- (void)transitionOutKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000b69639
- (void)transitionKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000b69183
- (_Bool)shouldTransitionKeyView:(id)arg1 fromState:(int)arg2 toState:(int)arg3;	// IMP=0x0000000000b6917b
- (_Bool)shouldAssertCurrentKeyState:(id)arg1;	// IMP=0x0000000000b69173
- (id)keycapRightSelectRightTransform;	// IMP=0x0000000000b68c16
- (id)keycapRightSelectLeftTransform;	// IMP=0x0000000000b68ba6
- (id)keycapRightSelectPrimaryTransform;	// IMP=0x0000000000b68b36
- (id)keycapLeftSelectRightTransform;	// IMP=0x0000000000b68ac6
- (id)keycapLeftSelectLeftTransform;	// IMP=0x0000000000b68ab4
- (id)keycapLeftSelectPrimaryTransform;	// IMP=0x0000000000b68a44
- (id)keycapPrimaryExitTransform;	// IMP=0x0000000000b689b8
- (id)keycapRightTransform;	// IMP=0x0000000000b68948
- (id)keycapLeftTransform;	// IMP=0x0000000000b688d8
- (id)primaryReverseTransform;	// IMP=0x0000000000b68876
- (id)keycapAlternateDualStringTransform:(id)arg1;	// IMP=0x0000000000b68561
- (id)keycapAlternateTransform:(id)arg1;	// IMP=0x0000000000b683d5
- (id)keycapPrimaryDualStringTransform:(id)arg1;	// IMP=0x0000000000b680c0
- (id)keycapPrimaryTransform;	// IMP=0x0000000000b68057
- (id)keycapNullTransform;	// IMP=0x0000000000b67ff5
- (id)keycapMeshTransformFromRect:(struct CGRect)arg1 toRect:(struct CGRect)arg2 scale:(double)arg3;	// IMP=0x0000000000b67da0
- (id)keycapMeshTransformFromRect:(struct CGRect)arg1 toRect:(struct CGRect)arg2;	// IMP=0x0000000000b67d52
@property(readonly, nonatomic) struct CGRect secondaryGlyphNormalizedExitRect;
@property(readonly, nonatomic) struct CGRect primaryGlyphNormalizedExitRect;
- (void)_fadeInKeyView:(id)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000b67b8b
- (void)_fadeOutKeyView:(id)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000b67808
- (double)delayedDeactivationTimeForKeyView:(id)arg1;	// IMP=0x0000000000b67716
- (Class)keyViewClassForKey:(id)arg1 renderTraits:(id)arg2 screenTraits:(id)arg3;	// IMP=0x0000000000b675c0
- (Class)_keyViewClassForSpecialtyKey:(id)arg1 screenTraits:(id)arg2;	// IMP=0x0000000000b6741e
@property(readonly, nonatomic) _Bool shouldPurgeKeyViews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

