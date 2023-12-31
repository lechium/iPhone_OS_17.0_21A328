//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MRUAmbientNowPlayingVolumeControlsView, MRUFlippingArtworkView, MRUNowPlayingLabelView, MRUNowPlayingTimeControlsView, MRUTransportButton, MRUVisualStylingProvider, NSLayoutConstraint, NSString, UIImageSymbolConfiguration, UILayoutGuide;

__attribute__((visibility("hidden")))
@interface MRUAmbientNowPlayingView : UIView
{
    UIImageSymbolConfiguration *_leftRightTransportButtonsSymbolConfiguration;	// 8 = 0x8
    UIImageSymbolConfiguration *_routingButtonSymbolConfiguration;	// 16 = 0x10
    UIImageSymbolConfiguration *_routingButtonSymbolConfigurationSmall;	// 24 = 0x18
    _Bool _onScreen;	// 32 = 0x20
    MRUVisualStylingProvider *_stylingProvider;	// 40 = 0x28
    UIView *_backgroundView;	// 48 = 0x30
    MRUFlippingArtworkView *_artworkView;	// 56 = 0x38
    MRUNowPlayingLabelView *_labelView;	// 64 = 0x40
    MRUNowPlayingTimeControlsView *_timeControlsView;	// 72 = 0x48
    MRUTransportButton *_leftButton;	// 80 = 0x50
    MRUTransportButton *_centerButton;	// 88 = 0x58
    MRUTransportButton *_rightButton;	// 96 = 0x60
    MRUTransportButton *_routingButton;	// 104 = 0x68
    MRUAmbientNowPlayingVolumeControlsView *_volumeControlsView;	// 112 = 0x70
    UIView *_shadowView;	// 120 = 0x78
    NSLayoutConstraint *_artworkViewTopConstraint;	// 128 = 0x80
    NSLayoutConstraint *_artworkViewBottomConstraint;	// 136 = 0x88
    NSLayoutConstraint *_boundsLayoutGuideLeadingConstraint;	// 144 = 0x90
    NSLayoutConstraint *_boundsLayoutGuideTrailingConstraint;	// 152 = 0x98
    UILayoutGuide *_boundsLayoutGuide;	// 160 = 0xa0
    UILayoutGuide *_transportControlsLayoutGuide;	// 168 = 0xa8
    UILayoutGuide *_leftButtonLayoutGuide;	// 176 = 0xb0
    UILayoutGuide *_rightButtonLayoutGuide;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x00000000000b574c
@property(retain, nonatomic) UILayoutGuide *rightButtonLayoutGuide; // @synthesize rightButtonLayoutGuide=_rightButtonLayoutGuide;
@property(retain, nonatomic) UILayoutGuide *leftButtonLayoutGuide; // @synthesize leftButtonLayoutGuide=_leftButtonLayoutGuide;
@property(retain, nonatomic) UILayoutGuide *transportControlsLayoutGuide; // @synthesize transportControlsLayoutGuide=_transportControlsLayoutGuide;
@property(retain, nonatomic) UILayoutGuide *boundsLayoutGuide; // @synthesize boundsLayoutGuide=_boundsLayoutGuide;
@property(retain, nonatomic) NSLayoutConstraint *boundsLayoutGuideTrailingConstraint; // @synthesize boundsLayoutGuideTrailingConstraint=_boundsLayoutGuideTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *boundsLayoutGuideLeadingConstraint; // @synthesize boundsLayoutGuideLeadingConstraint=_boundsLayoutGuideLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *artworkViewBottomConstraint; // @synthesize artworkViewBottomConstraint=_artworkViewBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *artworkViewTopConstraint; // @synthesize artworkViewTopConstraint=_artworkViewTopConstraint;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(nonatomic, getter=isOnScreen) _Bool onScreen; // @synthesize onScreen=_onScreen;
@property(readonly, nonatomic) MRUAmbientNowPlayingVolumeControlsView *volumeControlsView; // @synthesize volumeControlsView=_volumeControlsView;
@property(readonly, nonatomic) MRUTransportButton *routingButton; // @synthesize routingButton=_routingButton;
@property(readonly, nonatomic) MRUTransportButton *rightButton; // @synthesize rightButton=_rightButton;
@property(readonly, nonatomic) MRUTransportButton *centerButton; // @synthesize centerButton=_centerButton;
@property(readonly, nonatomic) MRUTransportButton *leftButton; // @synthesize leftButton=_leftButton;
@property(readonly, nonatomic) MRUNowPlayingTimeControlsView *timeControlsView; // @synthesize timeControlsView=_timeControlsView;
@property(readonly, nonatomic) MRUNowPlayingLabelView *labelView; // @synthesize labelView=_labelView;
@property(readonly, nonatomic) MRUFlippingArtworkView *artworkView; // @synthesize artworkView=_artworkView;
@property(nonatomic) __weak UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
- (void)updateVisualStyling;	// IMP=0x00000000000b54e4
- (void)sliderInteractionWillExtend:(id)arg1 insets:(struct UIEdgeInsets)arg2;	// IMP=0x00000000000b53dd
- (void)setRoutingButtonImage:(id)arg1;	// IMP=0x00000000000b514d
- (void)setTransportControls:(id)arg1;	// IMP=0x00000000000b502b
- (void)setNowPlayingInfo:(id)arg1;	// IMP=0x00000000000b4ebc
- (void)createConstraints;	// IMP=0x00000000000b36f8
- (void)safeAreaInsetsDidChange;	// IMP=0x00000000000b3632
- (void)layoutSubviews;	// IMP=0x00000000000b359c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000b305d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

