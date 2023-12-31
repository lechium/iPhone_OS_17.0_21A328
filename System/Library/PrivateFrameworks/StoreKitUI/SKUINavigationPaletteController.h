//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SKUINavigationBarContext, SKUINavigationPaletteView, SKUIPaletteViewElement, SKUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SKUINavigationPaletteController
{
    SKUINavigationBarContext *_navigationBarContext;	// 8 = 0x8
    SKUINavigationPaletteView *_paletteView;	// 16 = 0x10
    SKUIPaletteViewElement *_viewElement;	// 24 = 0x18
    SKUIViewElementLayoutContext *_viewLayoutContext;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001fb99c
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;	// IMP=0x00000000001fb906
- (void)willAppearInNavigationBar;	// IMP=0x00000000001fb824
- (id)viewForElementIdentifier:(id)arg1;	// IMP=0x00000000001fb807
- (id)view;	// IMP=0x00000000001fb578
- (void)reloadSectionViews;	// IMP=0x00000000001fb4a4
- (id)initWithPaletteViewElement:(id)arg1;	// IMP=0x00000000001fb3f3

@end

