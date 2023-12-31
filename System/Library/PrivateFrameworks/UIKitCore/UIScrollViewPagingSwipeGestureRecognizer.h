//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIGestureRecognizer.h"

@class UIDelayedAction, UIScrollView;

__attribute__((visibility("hidden")))
@interface UIScrollViewPagingSwipeGestureRecognizer : UIGestureRecognizer
{
    UIScrollView *_scrollView;	// 16 = 0x10
    UIDelayedAction *_swipeFailureDelay;	// 24 = 0x18
    struct CGPoint _startLocation;	// 32 = 0x20
    struct CGPoint _lastLocation;	// 48 = 0x30
    double _lastTime;	// 64 = 0x40
    int _directionalFailureCount;	// 72 = 0x48
}

+ (_Bool)_shouldDefaultToTouches;	// IMP=0x00600000016266a0
- (void).cxx_destruct;	// IMP=0x00000000016266d5
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000162666d
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000016264cc
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000001626424
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000162625e
- (void)_processNewLocation:(struct CGPoint)arg1;	// IMP=0x0000000001625fbe
- (void)_resetGestureRecognizer;	// IMP=0x0000000001625f72
- (void)dealloc;	// IMP=0x0000000001625f34
- (void)enoughTimeElapsed:(id)arg1;	// IMP=0x0000000001625f1d
- (void)clearTimer;	// IMP=0x0000000001625ee5

@end

