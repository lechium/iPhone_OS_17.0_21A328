//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIMotionEffectGroup, UIView;

__attribute__((visibility("hidden")))
@interface _UIInterfaceActionRepresentationViewContext_AppleTV : NSObject
{
    UIMotionEffectGroup *_installedHighlightedActionMotionEffectsGroup;	// 8 = 0x8
    _Bool _highlighted;	// 16 = 0x10
    _Bool _pressed;	// 17 = 0x11
    UIView *_highlightTransformTargetView;	// 24 = 0x18
    long long _actionLayoutAxis;	// 32 = 0x20
    double _focusedSizeIncrease;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000db361
@property(nonatomic) double focusedSizeIncrease; // @synthesize focusedSizeIncrease=_focusedSizeIncrease;
@property(nonatomic) long long actionLayoutAxis; // @synthesize actionLayoutAxis=_actionLayoutAxis;
@property(nonatomic) _Bool pressed; // @synthesize pressed=_pressed;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) __weak UIView *highlightTransformTargetView; // @synthesize highlightTransformTargetView=_highlightTransformTargetView;
- (id)motionEffectsOnAxis:(long long)arg1;	// IMP=0x00000000000daf65
- (id)_newMotionEffectsGroupForHighlightedAction;	// IMP=0x00000000000daef3
- (void)_removeMotionEffects;	// IMP=0x00000000000dadfe
- (void)_insertMotionEffects;	// IMP=0x00000000000dacf9
- (struct CATransform3D)_enlargedTransformForSize:(struct CGSize)arg1 pressed:(_Bool)arg2;	// IMP=0x00000000000dabb9
- (void)_applyHighlightTransform;	// IMP=0x00000000000da77d
- (id)initWithHighlightTransformTargetView:(id)arg1;	// IMP=0x00000000000da6cb

@end

