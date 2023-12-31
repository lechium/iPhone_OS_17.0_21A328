//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSArray, NSString, UIButton, UILabel, UILayoutGuide, UIScrollView, UIStackView, _TVCarouselView;

__attribute__((visibility("hidden")))
@interface VUIAccessView_iOS : UIView
{
    NSArray *_apps;	// 8 = 0x8
    UILayoutGuide *_titlePlacementGuide;	// 16 = 0x10
    UIStackView *_scrollStack;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UIScrollView *_bodyScroll;	// 40 = 0x28
    UILabel *_bodyLabel;	// 48 = 0x30
    UILabel *_secondaryBodyLabel;	// 56 = 0x38
    UIStackView *_logoStack;	// 64 = 0x40
    UIStackView *_bottomStack;	// 72 = 0x48
    UIButton *_allowButton;	// 80 = 0x50
    UIButton *_nackButton;	// 88 = 0x58
    UIButton *_seeAllButton;	// 96 = 0x60
    _TVCarouselView *_carouselView;	// 104 = 0x68
    _Bool _didLayout;	// 112 = 0x70
}

+ (struct CGSize)iconSize;	// IMP=0x001000000005b946
- (void).cxx_destruct;	// IMP=0x000000000005e3f3
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000005e1e1
- (id)_imageViewForIndex:(unsigned long long)arg1;	// IMP=0x000000000005e057
- (id)_buildLogoStack;	// IMP=0x000000000005df0e
- (id)_buildCarousel;	// IMP=0x000000000005de1c
- (id)carouselView:(id)arg1 cellForItemAtIndex:(unsigned long long)arg2;	// IMP=0x000000000005dc75
- (unsigned long long)numberOfItemsInCarouselView:(id)arg1;	// IMP=0x000000000005dc58
- (void)layoutSubviews;	// IMP=0x000000000005be08
- (void)showNackScreen;	// IMP=0x000000000005bade
- (void)setSecondaryBody:(id)arg1;	// IMP=0x000000000005ba6b
- (void)setBody:(id)arg1;	// IMP=0x000000000005ba0b
- (void)setTitle:(id)arg1;	// IMP=0x000000000005b9ab
- (id)bodyScroll;	// IMP=0x000000000005b996
- (id)nackButton;	// IMP=0x000000000005b981
- (id)seeAllButton;	// IMP=0x000000000005b96c
- (id)allowButton;	// IMP=0x000000000005b957
- (void)dealloc;	// IMP=0x000000000005b8f3
- (void)setupView;	// IMP=0x000000000005b7cd
- (id)initWithApps:(id)arg1;	// IMP=0x000000000005b74f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

