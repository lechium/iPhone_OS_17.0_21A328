//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AVKitGlobalSettings : NSObject
{
    _Bool _secondGenerationPlayerEnabled;	// 8 = 0x8
    _Bool _playbackSpeedControlEnabled;	// 9 = 0x9
    _Bool _visualAnalysisEnabled;	// 10 = 0xa
    _Bool _visualAnalysisSupported;	// 11 = 0xb
    _Bool _isQuickLook;	// 12 = 0xc
    _Bool _isAVKitMacPlayer;	// 13 = 0xd
    _Bool _isPhotosApp;	// 14 = 0xe
    _Bool _isTVApp;	// 15 = 0xf
    _Bool _isSpotlight;	// 16 = 0x10
    _Bool _extendedVisualAnalysisEnabled;	// 17 = 0x11
    _Bool _subjectLiftGestureEnabled;	// 18 = 0x12
    _Bool _searchBannerEnabled;	// 19 = 0x13
    _Bool _contentTabsEnabled;	// 20 = 0x14
    _Bool _fluidSliderEnabled;	// 21 = 0x15
    _Bool _overVideoScrubbingGestureEnabled;	// 22 = 0x16
    _Bool _attributedContentTitlesSupported;	// 23 = 0x17
}

+ (_Bool)_overVideoScrubbingGestureEnabled;	// IMP=0x006000000001d3fb
+ (id)shared;	// IMP=0x006000000001d3cb
@property(readonly, nonatomic) _Bool attributedContentTitlesSupported; // @synthesize attributedContentTitlesSupported=_attributedContentTitlesSupported;
@property(readonly, nonatomic) _Bool overVideoScrubbingGestureEnabled; // @synthesize overVideoScrubbingGestureEnabled=_overVideoScrubbingGestureEnabled;
@property(readonly, nonatomic) _Bool fluidSliderEnabled; // @synthesize fluidSliderEnabled=_fluidSliderEnabled;
@property(readonly, nonatomic) _Bool contentTabsEnabled; // @synthesize contentTabsEnabled=_contentTabsEnabled;
@property(readonly, nonatomic) _Bool searchBannerEnabled; // @synthesize searchBannerEnabled=_searchBannerEnabled;
@property(readonly, nonatomic) _Bool subjectLiftGestureEnabled; // @synthesize subjectLiftGestureEnabled=_subjectLiftGestureEnabled;
@property(readonly, nonatomic) _Bool extendedVisualAnalysisEnabled; // @synthesize extendedVisualAnalysisEnabled=_extendedVisualAnalysisEnabled;
@property(readonly, nonatomic) _Bool isSpotlight; // @synthesize isSpotlight=_isSpotlight;
@property(readonly, nonatomic) _Bool isTVApp; // @synthesize isTVApp=_isTVApp;
@property(readonly, nonatomic) _Bool isPhotosApp; // @synthesize isPhotosApp=_isPhotosApp;
@property(readonly, nonatomic) _Bool isAVKitMacPlayer; // @synthesize isAVKitMacPlayer=_isAVKitMacPlayer;
@property(readonly, nonatomic) _Bool isQuickLook; // @synthesize isQuickLook=_isQuickLook;
@property(readonly, nonatomic) _Bool visualAnalysisSupported; // @synthesize visualAnalysisSupported=_visualAnalysisSupported;
@property(readonly, nonatomic) _Bool visualAnalysisEnabled; // @synthesize visualAnalysisEnabled=_visualAnalysisEnabled;
@property(readonly, nonatomic) _Bool playbackSpeedControlEnabled; // @synthesize playbackSpeedControlEnabled=_playbackSpeedControlEnabled;
@property(nonatomic) _Bool secondGenerationPlayerEnabled; // @synthesize secondGenerationPlayerEnabled=_secondGenerationPlayerEnabled;
- (id)init;	// IMP=0x000000000001c9f4

@end

