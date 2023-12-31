//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUPhotosAlbumViewController.h"

@class NSArray, NSDictionary, NSString, PHPhotosHighlight, PUCurationTragicFailureInHighlightsDebugViewController, UIBarButtonItem;

__attribute__((visibility("hidden")))
@interface PUCurationTragicFailureInHighlightsGridDebugViewController : PUPhotosAlbumViewController
{
    NSArray *_allAssets;	// 8 = 0x8
    NSArray *_filteredAssets;	// 16 = 0x10
    NSDictionary *_utilityTypesByAssetUUID;	// 24 = 0x18
    _Bool _showsAll;	// 32 = 0x20
    _Bool _showsTragicFailure;	// 33 = 0x21
    _Bool _showsNonMemorable;	// 34 = 0x22
    _Bool _showsPoorQuality;	// 35 = 0x23
    UIBarButtonItem *_showsTragicFailureButtonItem;	// 40 = 0x28
    UIBarButtonItem *_showsNonMemorableButtonItem;	// 48 = 0x30
    UIBarButtonItem *_showsPoorQualityButtonItem;	// 56 = 0x38
    PHPhotosHighlight *_highlight;	// 64 = 0x40
    PUCurationTragicFailureInHighlightsDebugViewController *_parentController;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000004cf42a
@property(retain, nonatomic) PUCurationTragicFailureInHighlightsDebugViewController *parentController; // @synthesize parentController=_parentController;
@property(retain, nonatomic) PHPhotosHighlight *highlight; // @synthesize highlight=_highlight;
- (id)_cloneAsset:(id)arg1 toDirectory:(id)arg2;	// IMP=0x00000000004cef0b
- (_Bool)_writeDiagnosticsToURL:(id)arg1 incorrectAssets:(id)arg2;	// IMP=0x00000000004cdbad
- (void)_fileRadarWithIncorrectAssets:(id)arg1;	// IMP=0x00000000004cdac9
- (void)_presentTapToRadar;	// IMP=0x00000000004cd8f6
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000004cd7d2
- (unsigned long long)utilityTypesWithAsset:(id)arg1 sceneClassifications:(id)arg2;	// IMP=0x00000000004cd43e
- (void)toggleShowsPoorQuality:(id)arg1;	// IMP=0x00000000004cd3f5
- (void)toggleShowsNonMemorable:(id)arg1;	// IMP=0x00000000004cd3ac
- (void)toggleShowsTragicFailure:(id)arg1;	// IMP=0x00000000004cd363
- (void)toggleShowsAll:(id)arg1;	// IMP=0x00000000004cd2bd
- (void)setButton:(id)arg1 toOn:(_Bool)arg2;	// IMP=0x00000000004cd10e
- (_Bool)shouldShowSectionHeaders;	// IMP=0x00000000004cd106
- (void)update;	// IMP=0x00000000004ccc2e
- (void)getTitle:(out id *)arg1 prompt:(out id *)arg2 shouldHideBackButton:(out _Bool *)arg3 leftBarButtonItems:(out id *)arg4 rightBarButtonItems:(out id *)arg5;	// IMP=0x00000000004ccaeb
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000004cc5dd
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000004cc510
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000004cc46d
- (void)viewDidLoad;	// IMP=0x00000000004cbf18
- (id)initWithSpec:(id)arg1;	// IMP=0x00000000004cbeba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

