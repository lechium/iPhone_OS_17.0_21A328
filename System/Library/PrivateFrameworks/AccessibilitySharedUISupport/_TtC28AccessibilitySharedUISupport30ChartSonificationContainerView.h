//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MISSING_TYPE, NSAttributedString;

__attribute__((visibility("hidden")))
@interface _TtC28AccessibilitySharedUISupport30ChartSonificationContainerView : UIView
{
    MISSING_TYPE *chartDescriptor;	// 8 = 0x8
    MISSING_TYPE *playheadView;	// 16 = 0x10
    MISSING_TYPE *playheadLabel;	// 24 = 0x18
    MISSING_TYPE *playheadTimer;	// 32 = 0x20
    MISSING_TYPE *displayLink;	// 40 = 0x28
    MISSING_TYPE *numberFormatter;	// 48 = 0x30
    MISSING_TYPE *state;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000000f470
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000000f3f0
@property(nonatomic, retain) NSAttributedString *accessibilityAttributedLabel;
- (void)updatePlayhead:(double)arg1;	// IMP=0x000000000000ef80
- (void)_accessibilitySonificationPlaybackStatusChanged:(unsigned long long)arg1;	// IMP=0x000000000000ed70
- (void)_accessibilityDidChangeSonificationPlaybackPosition:(double)arg1;	// IMP=0x000000000000eb60
@property(nonatomic) _Bool isAccessibilityElement;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000eac0

@end

