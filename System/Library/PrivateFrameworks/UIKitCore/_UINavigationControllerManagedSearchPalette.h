//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_UINavigationControllerPalette.h"

@class UISearchBar, UIView;

__attribute__((visibility("hidden")))
@interface _UINavigationControllerManagedSearchPalette : _UINavigationControllerPalette
{
    _Bool _ignoreGeometryChanges;	// 128 = 0x80
    CDUnknownBlockType _resetAfterSearchFieldFade;	// 136 = 0x88
    UISearchBar *__searchBar;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000000312bc1
@property(nonatomic, setter=_setSearchBar:) __weak UISearchBar *_searchBar; // @synthesize _searchBar=__searchBar;
@property(copy, nonatomic) CDUnknownBlockType resetAfterSearchFieldFade; // @synthesize resetAfterSearchFieldFade=_resetAfterSearchFieldFade;
@property(nonatomic) _Bool ignoreGeometryChanges; // @synthesize ignoreGeometryChanges=_ignoreGeometryChanges;
- (void)_propagateBackgroundToContents;	// IMP=0x0000000000312ab6
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;	// IMP=0x0000000000312a10
@property(nonatomic, setter=_setShadowAlpha:) double _shadowAlpha;
- (void)setCenter:(struct CGPoint)arg1;	// IMP=0x0000000000312935
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x00000000003128e5
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000312895
- (void)_popDisableLayoutFlushingForTransition;	// IMP=0x0000000000312856
- (void)_pushDisableLayoutFlushingForTransition;	// IMP=0x0000000000312816
- (_Bool)_shouldUpdateBackground;	// IMP=0x000000000031280e
- (void)_updateLayoutForCurrentConfiguration;	// IMP=0x00000000003127a4
@property(readonly, nonatomic) UIView *viewForAsymmetricFade;
- (_Bool)_supportsSpecialSearchBarTransitions;	// IMP=0x00000000003126a3
- (id)_initWithNavigationController:(id)arg1 forEdge:(unsigned long long)arg2;	// IMP=0x0000000000312652

@end

