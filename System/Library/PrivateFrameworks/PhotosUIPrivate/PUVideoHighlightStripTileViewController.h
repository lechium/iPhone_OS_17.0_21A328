//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUTileViewController.h"

@class NSString, PUAssetViewModel, PUBrowsingVideoPlayer, UIColor, _PUVideoHighlightStripView;

__attribute__((visibility("hidden")))
@interface PUVideoHighlightStripTileViewController : PUTileViewController
{
    PUAssetViewModel *_assetViewModel;	// 8 = 0x8
    UIColor *_highlightColor;	// 16 = 0x10
    _PUVideoHighlightStripView *_highlightsView;	// 24 = 0x18
    PUBrowsingVideoPlayer *_videoPlayer;	// 32 = 0x20
    CDStruct_1b6d18a9 _currentTime;	// 40 = 0x28
}

+ (double)preferredTileHeight;	// IMP=0x001000000054d139
- (void).cxx_destruct;	// IMP=0x000000000054bd7c
@property(nonatomic) CDStruct_1b6d18a9 currentTime; // @synthesize currentTime=_currentTime;
@property(retain, nonatomic) PUBrowsingVideoPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(readonly, nonatomic) _PUVideoHighlightStripView *highlightsView; // @synthesize highlightsView=_highlightsView;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(retain, nonatomic) PUAssetViewModel *assetViewModel; // @synthesize assetViewModel=_assetViewModel;
- (void)videoPlayer:(id)arg1 desiredSeekTimeDidChange:(CDStruct_1b6d18a9)arg2;	// IMP=0x000000000054bcb8
- (void)videoPlayer:(id)arg1 currentTimeDidChange:(CDStruct_1b6d18a9)arg2;	// IMP=0x000000000054bc58
- (void)viewModel:(id)arg1 didChange:(id)arg2;	// IMP=0x000000000054bb7d
- (void)becomeReusable;	// IMP=0x000000000054bb3a
- (void)_updateHighlightsViewCurrentTime;	// IMP=0x000000000054bac3
- (void)_updateHighlightsView;	// IMP=0x000000000054b6d2
- (void)viewDidLoad;	// IMP=0x000000000054b40f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
