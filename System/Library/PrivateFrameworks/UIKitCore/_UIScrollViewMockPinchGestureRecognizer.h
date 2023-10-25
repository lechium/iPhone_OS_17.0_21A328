//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIScrollViewPinchGestureRecognizer;

__attribute__((visibility("hidden")))
@interface _UIScrollViewMockPinchGestureRecognizer : NSObject
{
    double _scale;	// 8 = 0x8
    double _velocity;	// 16 = 0x10
    long long _state;	// 24 = 0x18
    UIScrollViewPinchGestureRecognizer *_gestureRecognizer;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000162ac15
@property(retain, nonatomic) UIScrollViewPinchGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
- (id)_activeTouchesForEvent:(id)arg1;	// IMP=0x000000000162abbe
- (struct CGPoint)anchorPoint;	// IMP=0x000000000162ab60
- (double)velocity;	// IMP=0x000000000162ab55
- (double)scale;	// IMP=0x000000000162ab4a
@property(nonatomic) long long state;
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x000000000162ab05
- (void)simulateScale:(double)arg1 velocity:(double)arg2;	// IMP=0x000000000162aaf5

@end
