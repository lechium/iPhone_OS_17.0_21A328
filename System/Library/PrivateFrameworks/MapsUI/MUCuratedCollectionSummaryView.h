//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, UILayoutGuide;
@protocol MUCuratedCollectionSummary;

__attribute__((visibility("hidden")))
@interface MUCuratedCollectionSummaryView : UIView
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_descriptionLabel;	// 16 = 0x10
    UIImageView *_imageView;	// 24 = 0x18
    UILayoutGuide *_layoutGuide;	// 32 = 0x20
    id <MUCuratedCollectionSummary> _viewModel;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000131c26
@property(retain, nonatomic) id <MUCuratedCollectionSummary> viewModel; // @synthesize viewModel=_viewModel;
- (void)_updateImageViewForInterfaceStyle;	// IMP=0x0000000000131b7d
- (id)publisherString;	// IMP=0x000000000013169e
- (void)_contentSizeDidChange;	// IMP=0x00000000001315cc
- (id)_attributesWithFont:(id)arg1 color:(id)arg2;	// IMP=0x00000000001314fa
- (void)_updateAppearance;	// IMP=0x00000000001313e5
- (void)_setupConstraints;	// IMP=0x0000000000130a0a
- (void)_setupSubviews;	// IMP=0x000000000013067f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000013058e

@end

