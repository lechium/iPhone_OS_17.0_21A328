//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MRUOutputDeviceAssetView, MRUVisualStylingProvider, MRUVolumeNowPlayingView, MediaControlsExpandableButton;

__attribute__((visibility("hidden")))
@interface MRUVolumeBackgroundView : UIView
{
    _Bool _showSecondaryAssetView;	// 8 = 0x8
    _Bool _showPrimaryListeningModeButton;	// 9 = 0x9
    _Bool _showNowPlayingView;	// 10 = 0xa
    _Bool _showSecondaryListeningModeButton;	// 11 = 0xb
    _Bool _showSpatialAudioModeButton;	// 12 = 0xc
    _Bool _showConversationAwarenessButton;	// 13 = 0xd
    MRUOutputDeviceAssetView *_primaryAssetView;	// 16 = 0x10
    MRUOutputDeviceAssetView *_secondaryAssetView;	// 24 = 0x18
    MRUVolumeNowPlayingView *_nowPlayingView;	// 32 = 0x20
    MediaControlsExpandableButton *_primaryListeningModeButton;	// 40 = 0x28
    MediaControlsExpandableButton *_secondaryListeningModeButton;	// 48 = 0x30
    MediaControlsExpandableButton *_spatialAudioModeButton;	// 56 = 0x38
    MediaControlsExpandableButton *_conversationAwarenessButton;	// 64 = 0x40
    MRUVisualStylingProvider *_stylingProvider;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000004a16d
@property(nonatomic) _Bool showConversationAwarenessButton; // @synthesize showConversationAwarenessButton=_showConversationAwarenessButton;
@property(nonatomic) _Bool showSpatialAudioModeButton; // @synthesize showSpatialAudioModeButton=_showSpatialAudioModeButton;
@property(nonatomic) _Bool showSecondaryListeningModeButton; // @synthesize showSecondaryListeningModeButton=_showSecondaryListeningModeButton;
@property(nonatomic) _Bool showNowPlayingView; // @synthesize showNowPlayingView=_showNowPlayingView;
@property(nonatomic) _Bool showPrimaryListeningModeButton; // @synthesize showPrimaryListeningModeButton=_showPrimaryListeningModeButton;
@property(nonatomic) _Bool showSecondaryAssetView; // @synthesize showSecondaryAssetView=_showSecondaryAssetView;
@property(retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
@property(retain, nonatomic) MediaControlsExpandableButton *conversationAwarenessButton; // @synthesize conversationAwarenessButton=_conversationAwarenessButton;
@property(retain, nonatomic) MediaControlsExpandableButton *spatialAudioModeButton; // @synthesize spatialAudioModeButton=_spatialAudioModeButton;
@property(retain, nonatomic) MediaControlsExpandableButton *secondaryListeningModeButton; // @synthesize secondaryListeningModeButton=_secondaryListeningModeButton;
@property(retain, nonatomic) MediaControlsExpandableButton *primaryListeningModeButton; // @synthesize primaryListeningModeButton=_primaryListeningModeButton;
@property(retain, nonatomic) MRUVolumeNowPlayingView *nowPlayingView; // @synthesize nowPlayingView=_nowPlayingView;
@property(retain, nonatomic) MRUOutputDeviceAssetView *secondaryAssetView; // @synthesize secondaryAssetView=_secondaryAssetView;
@property(retain, nonatomic) MRUOutputDeviceAssetView *primaryAssetView; // @synthesize primaryAssetView=_primaryAssetView;
- (double)totalHorizontalSliderWidth;	// IMP=0x0000000000049fc4
- (void)updateVisibility;	// IMP=0x0000000000049948
- (void)collapseExpandableButtons;	// IMP=0x0000000000049862
- (void)expandButton:(id)arg1;	// IMP=0x00000000000497ac
@property(readonly, nonatomic) _Bool hasExpandedButtons;
- (void)layoutSubviewsHorizontal;	// IMP=0x000000000004849f
- (void)layoutSubviewsVertical;	// IMP=0x000000000004767c
- (void)layoutSubviews;	// IMP=0x0000000000047623
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000047324

@end

