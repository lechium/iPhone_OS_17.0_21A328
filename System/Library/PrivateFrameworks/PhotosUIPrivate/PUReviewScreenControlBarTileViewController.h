//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUTileViewController.h"

@class NSString, PUBrowsingViewModel, PUReviewScreenBarsModel, PUReviewScreenControlBar;

__attribute__((visibility("hidden")))
@interface PUReviewScreenControlBarTileViewController : PUTileViewController
{
    PUBrowsingViewModel *_browsingViewModel;	// 8 = 0x8
    PUReviewScreenBarsModel *_barsModel;	// 16 = 0x10
    PUReviewScreenControlBar *__controlBar;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000004cb1ce
@property(retain, nonatomic, setter=_setControlBar:) PUReviewScreenControlBar *_controlBar; // @synthesize _controlBar=__controlBar;
@property(retain, nonatomic) PUReviewScreenBarsModel *barsModel; // @synthesize barsModel=_barsModel;
@property(retain, nonatomic) PUBrowsingViewModel *browsingViewModel; // @synthesize browsingViewModel=_browsingViewModel;
- (void)viewModel:(id)arg1 didChange:(id)arg2;	// IMP=0x00000000004cb0e4
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000004cb0a2
- (void)_updateVisibilityAnimated:(_Bool)arg1;	// IMP=0x00000000004caf25
- (void)_updateBarLayout;	// IMP=0x00000000004cae8a
- (void)_updateControls;	// IMP=0x00000000004cacff
- (id)_barControlsForModelControls:(id)arg1 transitioning:(_Bool)arg2;	// IMP=0x00000000004cac72
- (void)_handleSendButtonTapped:(id)arg1;	// IMP=0x00000000004cab05
- (void)_handleFunEffectsButtonTapped:(id)arg1;	// IMP=0x00000000004caac3
- (void)_handleMarkupButtonTapped:(id)arg1;	// IMP=0x00000000004caa81
- (void)_handleEditButtonTapped:(id)arg1;	// IMP=0x00000000004caa3f
- (void)becomeReusable;	// IMP=0x00000000004ca9e5
- (id)loadView;	// IMP=0x00000000004ca88d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

