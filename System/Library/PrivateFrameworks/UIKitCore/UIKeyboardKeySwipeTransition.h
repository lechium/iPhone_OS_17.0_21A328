//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface UIKeyboardKeySwipeTransition
{
    _Bool _disableMeshOptimization;	// 113 = 0x71
    NSArray *_startKeysOrdered;	// 120 = 0x78
    NSArray *_endKeysOrdered;	// 128 = 0x80
    NSArray *_startGeometries;	// 136 = 0x88
    NSArray *_transitionKeys;	// 144 = 0x90
    NSArray *_keyInfos;	// 152 = 0x98
    double _previousProgress;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x0000000000e457b7
@property(nonatomic) double previousProgress; // @synthesize previousProgress=_previousProgress;
@property(retain, nonatomic) NSArray *keyInfos; // @synthesize keyInfos=_keyInfos;
@property(retain, nonatomic) NSArray *transitionKeys; // @synthesize transitionKeys=_transitionKeys;
@property(retain, nonatomic) NSArray *startGeometries; // @synthesize startGeometries=_startGeometries;
@property(retain, nonatomic) NSArray *endKeysOrdered; // @synthesize endKeysOrdered=_endKeysOrdered;
@property(retain, nonatomic) NSArray *startKeysOrdered; // @synthesize startKeysOrdered=_startKeysOrdered;
@property(nonatomic) _Bool disableMeshOptimization; // @synthesize disableMeshOptimization=_disableMeshOptimization;
- (id)meshTransformForKeyplane:(id)arg1 forward:(_Bool)arg2 initial:(_Bool)arg3;	// IMP=0x0000000000e4286d
- (struct CGRect)keyRectForFrame:(struct CGRect)arg1 normalizedSubRect:(struct CGRect)arg2;	// IMP=0x0000000000e42843
- (void)gatherTransitionKeys;	// IMP=0x0000000000e422d7
- (void)updateWithProgress:(double)arg1;	// IMP=0x0000000000e4225c
- (void)removeAllAnimations;	// IMP=0x0000000000e420f0
- (void)_runOpacityAnimation;	// IMP=0x0000000000e41fbe
- (void)_runTransformAnimation;	// IMP=0x0000000000e41d61
- (void)runNonInteractivelyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000e41d26
- (double)nonInteractiveDuration;	// IMP=0x0000000000e41d18
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x0000000000e41c47
- (void)commitTransitionRebuild;	// IMP=0x0000000000e41bef
- (void)rebuildWithStartKeyplane:(id)arg1 startView:(id)arg2 endKeyplane:(id)arg3 endView:(id)arg4;	// IMP=0x0000000000e417e6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
