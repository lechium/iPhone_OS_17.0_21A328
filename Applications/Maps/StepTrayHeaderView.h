//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NavTrayMetrics, NavTrayStackedLabel, UIImageView;
@protocol StepTrayHeaderViewDelegate;

@interface StepTrayHeaderView : UIView
{
    NavTrayMetrics *_metrics;	// 8 = 0x8
    UIImageView *_chevronImageView;	// 16 = 0x10
    CDUnknownBlockType _minimizedValueFontProvider;	// 24 = 0x18
    NavTrayStackedLabel *_defaultLabel;	// 32 = 0x20
    double _layoutProgress;	// 40 = 0x28
    id <StepTrayHeaderViewDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000b2a8e1
@property(readonly, nonatomic) __weak id <StepTrayHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double layoutProgress; // @synthesize layoutProgress=_layoutProgress;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000b2a6b9
- (struct CGSize)intrinsicContentSize;	// IMP=0x0010000000b2a607
- (void)_updateLayoutProgress;	// IMP=0x0010000000b2a53b
- (void)setDefaultTitle:(id)arg1 defaultSubtitle:(id)arg2;	// IMP=0x0010000000b2a46e
- (id)initWithDelegate:(id)arg1 metrics:(id)arg2;	// IMP=0x0010000000b29875

@end
