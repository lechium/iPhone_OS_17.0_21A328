//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI15MultiPlayerView : UIView
{
    MISSING_TYPE *playerLayout;	// 8 = 0x8
    MISSING_TYPE *_mode;	// 2303197376 = 0x894800c0
    MISSING_TYPE *cancellables;	// 4287188180 = 0xff894cd4
    MISSING_TYPE *delegate;	// 0 = 0x0
    MISSING_TYPE *didSelectPlayerViewController;	// 0 = 0x0
    MISSING_TYPE *didPinchPlayerViewController;	// 2004049759 = 0x77735f5f
    MISSING_TYPE *distribution;	// 1936941407 = 0x7373615f
    MISSING_TYPE *layoutEngine;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *_focusedPlayerViewController;	// 1221918529 = 0x48d4ff41
    MISSING_TYPE *animatingViews;	// 1220035979 = 0x48b8458b
    MISSING_TYPE *debounceTimer;	// 93014081 = 0x58b4841
    MISSING_TYPE *animationDebounceSubject;	// 3360000328 = 0xc8458948
    MISSING_TYPE *initialPinchFrame;	// 1275117715 = 0x4c00c093
    MISSING_TYPE *scaleRange;	// 195 = 0xc3
    MISSING_TYPE *gestureView;	// 1275117715 = 0x4c00c093
    MISSING_TYPE *gestureInitialLocation;	// 4152970452 = 0xf7894cd4
    MISSING_TYPE *$__lazy_storage_$_panGesture;	// 2337070985 = 0x8b4cdf89
    MISSING_TYPE *maxPanVelocity;	// 3573498112 = 0xd4ff4100
    MISSING_TYPE *patternGenerator;	// 2336806143 = 0x8b48d4ff
    MISSING_TYPE *containerViews;	// 0 = 0x0
    MISSING_TYPE *shouldMaximizeScreenUsage;	// 93014016 = 0x58b4800
}

- (void).cxx_destruct;	// IMP=0x00000000005d5c5e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000005d5c29
- (void)onPanGesture:(id)arg1;	// IMP=0x00000000005d527b
- (void)viewPinchedWithGesture:(id)arg1;	// IMP=0x00000000005d4a79
- (void)layoutSubviews;	// IMP=0x00000000005d0cbb
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000005d0c04

@end

