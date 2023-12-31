//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MRUCAPackageView, MRUSlider, MRUVisualStylingProvider, MRUVolumeController, MSVTimer, NSString, UIWindowScene;
@protocol MPVolumeControllerDataSource;

__attribute__((visibility("hidden")))
@interface MRUAmbientNowPlayingVolumeControlsView : UIView
{
    _Bool _onScreen;	// 8 = 0x8
    _Bool _sliderExpanded;	// 9 = 0x9
    MRUSlider *_slider;	// 16 = 0x10
    MRUVolumeController *_volumeController;	// 24 = 0x18
    MRUVisualStylingProvider *_stylingProvider;	// 32 = 0x20
    double _sliderExpansionFactor;	// 40 = 0x28
    MRUCAPackageView *_packageView;	// 48 = 0x30
    double _sliderValueOnPanBegin;	// 56 = 0x38
    MSVTimer *_idleTimer;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000e2097
@property(retain, nonatomic) MSVTimer *idleTimer; // @synthesize idleTimer=_idleTimer;
@property(nonatomic) _Bool sliderExpanded; // @synthesize sliderExpanded=_sliderExpanded;
@property(nonatomic) double sliderValueOnPanBegin; // @synthesize sliderValueOnPanBegin=_sliderValueOnPanBegin;
@property(retain, nonatomic) MRUCAPackageView *packageView; // @synthesize packageView=_packageView;
@property(nonatomic) double sliderExpansionFactor; // @synthesize sliderExpansionFactor=_sliderExpansionFactor;
@property(nonatomic, getter=isOnScreen) _Bool onScreen; // @synthesize onScreen=_onScreen;
@property(retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
@property(retain, nonatomic) MRUVolumeController *volumeController; // @synthesize volumeController=_volumeController;
@property(readonly, nonatomic) MRUSlider *slider; // @synthesize slider=_slider;
- (void)sliderTouchDown:(id)arg1;	// IMP=0x00000000000e1e6f
- (void)sliderTouchUp:(id)arg1;	// IMP=0x00000000000e1e5d
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000000e1dab
- (void)resetIdleTimer;	// IMP=0x00000000000e1cda
- (void)invalidateIdleTimer;	// IMP=0x00000000000e1ca2
- (void)updateVisibility;	// IMP=0x00000000000e1c67
- (void)updatePackageWithValue:(float)arg1;	// IMP=0x00000000000e1b8c
- (void)updateVolumeAnimated:(_Bool)arg1;	// IMP=0x00000000000e1ab1
- (void)sliderValueChanged:(id)arg1;	// IMP=0x00000000000e1a24
@property(readonly, nonatomic) NSString *volumeAudioCategory;
@property(readonly, nonatomic) UIWindowScene *windowSceneForVolumeDisplay;
@property(readonly, nonatomic, getter=isOnScreenForVolumeDisplay) _Bool onScreenForVolumeDisplay;
- (void)volumeController:(id)arg1 volumeControlCapabilitiesDidChange:(unsigned int)arg2;	// IMP=0x00000000000e1961
- (void)volumeController:(id)arg1 volumeControlAvailableDidChange:(_Bool)arg2;	// IMP=0x00000000000e1930
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;	// IMP=0x00000000000e184c
@property(retain, nonatomic) id <MPVolumeControllerDataSource> dataSource;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000000e15d1
- (struct CGRect)hitRect;	// IMP=0x00000000000e1559
- (void)createConstraints;	// IMP=0x00000000000e130e
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000e12fd
- (void)dealloc;	// IMP=0x00000000000e1288
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000e0f10

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

