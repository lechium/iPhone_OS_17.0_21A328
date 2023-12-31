//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIGestureRecognizer.h"

@protocol _UIExclusiveTouchGestureRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface _UIExclusiveTouchGestureRecognizer : UIGestureRecognizer
{
    _Bool _achievedMaximumAbsoluteAccumulatedMovement;	// 16 = 0x10
    struct CGPoint _maximumAbsoluteAccumulatedMovement;	// 24 = 0x18
    struct CGPoint _accumulatedMovement;	// 40 = 0x28
}

@property(readonly, nonatomic) struct CGPoint accumulatedMovement; // @synthesize accumulatedMovement=_accumulatedMovement;
@property(readonly, nonatomic) _Bool achievedMaximumAbsoluteAccumulatedMovement; // @synthesize achievedMaximumAbsoluteAccumulatedMovement=_achievedMaximumAbsoluteAccumulatedMovement;
@property(nonatomic) struct CGPoint maximumAbsoluteAccumulatedMovement; // @synthesize maximumAbsoluteAccumulatedMovement=_maximumAbsoluteAccumulatedMovement;
- (void)reset;	// IMP=0x0000000000945193
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000094514d
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000944e7a
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000944acc
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000944a86
- (_Bool)_shouldReceiveTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000944a35
- (id)description;	// IMP=0x000000000094490c

// Remaining properties
@property(nonatomic) __weak id <_UIExclusiveTouchGestureRecognizerDelegate> delegate; // @dynamic delegate;

@end

