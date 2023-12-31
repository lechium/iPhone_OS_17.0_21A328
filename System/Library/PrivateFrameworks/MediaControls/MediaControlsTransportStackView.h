//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MPCPlayerResponse, MTVisualStylingProvider, MediaControlsTransportButton, NSString;
@protocol MediaControlsActionsDelegate;

__attribute__((visibility("hidden")))
@interface MediaControlsTransportStackView : UIView
{
    _Bool _empty;	// 8 = 0x8
    _Bool _shouldShowTVRemoteButton;	// 9 = 0x9
    long long _style;	// 16 = 0x10
    MPCPlayerResponse *_response;	// 24 = 0x18
    MTVisualStylingProvider *_visualStylingProvider;	// 32 = 0x20
    id <MediaControlsActionsDelegate> _actionsDelegate;	// 40 = 0x28
    MediaControlsTransportButton *_tvRemoteButton;	// 48 = 0x30
    MediaControlsTransportButton *_leftButton;	// 56 = 0x38
    MediaControlsTransportButton *_middleButton;	// 64 = 0x40
    MediaControlsTransportButton *_rightButton;	// 72 = 0x48
    MediaControlsTransportButton *_languageOptionsButton;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000a8f07
@property(nonatomic) _Bool shouldShowTVRemoteButton; // @synthesize shouldShowTVRemoteButton=_shouldShowTVRemoteButton;
@property(retain, nonatomic) MediaControlsTransportButton *languageOptionsButton; // @synthesize languageOptionsButton=_languageOptionsButton;
@property(retain, nonatomic) MediaControlsTransportButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) MediaControlsTransportButton *middleButton; // @synthesize middleButton=_middleButton;
@property(retain, nonatomic) MediaControlsTransportButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) MediaControlsTransportButton *tvRemoteButton; // @synthesize tvRemoteButton=_tvRemoteButton;
@property(nonatomic) __weak id <MediaControlsActionsDelegate> actionsDelegate; // @synthesize actionsDelegate=_actionsDelegate;
@property(retain, nonatomic) MTVisualStylingProvider *visualStylingProvider; // @synthesize visualStylingProvider=_visualStylingProvider;
@property(nonatomic, getter=isEmpty) _Bool empty; // @synthesize empty=_empty;
@property(retain, nonatomic) MPCPlayerResponse *response; // @synthesize response=_response;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void)_updateButtonConfiguration;	// IMP=0x00000000000a893c
- (void)_updateButtonLayout;	// IMP=0x00000000000a8714
- (void)_resetTransportButton:(id)arg1;	// IMP=0x00000000000a86a5
- (id)_createTransportButton;	// IMP=0x00000000000a8610
- (void)_updateButtonVisualStyling:(id)arg1;	// IMP=0x00000000000a846f
- (void)_updateVisualStylingForButtons;	// IMP=0x00000000000a836a
- (void)providedStylesDidChangeForProvider:(id)arg1;	// IMP=0x00000000000a8358
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000a82c3
- (void)updateOnRouteChange;	// IMP=0x00000000000a8295
- (void)buttonHoldReleased:(id)arg1;	// IMP=0x00000000000a71a4
- (void)buttonHoldBegan:(id)arg1;	// IMP=0x00000000000a714f
- (void)touchUpInsideCaptionsButton:(id)arg1;	// IMP=0x00000000000a7112
- (void)touchUpInsideRightButton:(id)arg1;	// IMP=0x00000000000a7070
- (void)touchUpInsideMiddleButton:(id)arg1;	// IMP=0x00000000000a701b
- (void)touchUpInsideLeftButton:(id)arg1;	// IMP=0x00000000000a6e39
- (void)touchUpInsideHangdogButton:(id)arg1;	// IMP=0x00000000000a6dfc
- (void)layoutSubviews;	// IMP=0x00000000000a61ee
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000a5e6d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

