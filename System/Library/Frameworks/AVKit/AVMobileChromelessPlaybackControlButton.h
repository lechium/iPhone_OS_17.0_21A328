//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVMobileChromelessControlsStyleSheet, UIView, UIViewPropertyAnimator;

__attribute__((visibility("hidden")))
@interface AVMobileChromelessPlaybackControlButton
{
    unsigned long long _playbackControlButtonType;	// 8 = 0x8
    UIView *_highlightView;	// 16 = 0x10
    UIViewPropertyAnimator *_highlightAnimator;	// 24 = 0x18
    AVMobileChromelessControlsStyleSheet *_styleSheet;	// 32 = 0x20
}

+ (id)buttonWithAccessibilityIdentifier:(id)arg1 withStyleSheet:(id)arg2 withPlaybackControlButtonType:(unsigned long long)arg3;	// IMP=0x000000000009f246
+ (id)backwardSecondaryButtonWithStyleSheet:(id)arg1;	// IMP=0x000000000009f21d
+ (id)forwardSecondaryButtonWithStyleSheet:(id)arg1;	// IMP=0x000000000009f1f4
+ (id)playPauseButtonWithStyleSheet:(id)arg1;	// IMP=0x000000000009f1ce
- (void).cxx_destruct;	// IMP=0x000000000009f040
@property(retain, nonatomic) AVMobileChromelessControlsStyleSheet *styleSheet; // @synthesize styleSheet=_styleSheet;
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000009f01e
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000009ee42

@end
