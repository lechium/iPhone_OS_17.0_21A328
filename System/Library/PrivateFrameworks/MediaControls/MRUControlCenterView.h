//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MRUControlCenterButton, MRUControlCenterRouteButton, MRUVisualStylingProvider, UICollectionView, UICollectionViewFlowLayout;

__attribute__((visibility("hidden")))
@interface MRUControlCenterView : UIView
{
    _Bool _transitioning;	// 8 = 0x8
    _Bool _showRoutingButton;	// 9 = 0x9
    _Bool _showMoreButton;	// 10 = 0xa
    _Bool _showAlertView;	// 11 = 0xb
    UIView *_contentView;	// 16 = 0x10
    UIView *_alertView;	// 24 = 0x18
    UIView *_containerView;	// 32 = 0x20
    UICollectionView *_collectionView;	// 40 = 0x28
    UICollectionViewFlowLayout *_collectionViewLayout;	// 48 = 0x30
    MRUControlCenterButton *_moreButton;	// 56 = 0x38
    MRUVisualStylingProvider *_stylingProvider;	// 64 = 0x40
    MRUControlCenterRouteButton *_routingButton;	// 72 = 0x48
    long long _state;	// 80 = 0x50
    double _cornerRadius;	// 88 = 0x58
    UIView *_materialView;	// 96 = 0x60
    struct CGRect _transitionFrame;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000000f9be6
@property(retain, nonatomic) UIView *materialView; // @synthesize materialView=_materialView;
@property(nonatomic) _Bool showAlertView; // @synthesize showAlertView=_showAlertView;
@property(nonatomic) _Bool showMoreButton; // @synthesize showMoreButton=_showMoreButton;
@property(nonatomic) _Bool showRoutingButton; // @synthesize showRoutingButton=_showRoutingButton;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) struct CGRect transitionFrame; // @synthesize transitionFrame=_transitionFrame;
@property(nonatomic, getter=isTransitioning) _Bool transitioning; // @synthesize transitioning=_transitioning;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) MRUControlCenterRouteButton *routingButton; // @synthesize routingButton=_routingButton;
@property(readonly, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
@property(readonly, nonatomic) MRUControlCenterButton *moreButton; // @synthesize moreButton=_moreButton;
@property(readonly, nonatomic) UICollectionViewFlowLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)updateVisibility;	// IMP=0x00000000000f9870
- (void)updateCollectionViewContentInset;	// IMP=0x00000000000f96df
- (void)setStylingProvider:(id)arg1;	// IMP=0x00000000000f9394
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x00000000000f92e0
- (void)layoutSubviewsHorizontal;	// IMP=0x00000000000f8d16
- (void)layoutSubviewsIPad;	// IMP=0x00000000000f87e6
- (void)layoutSubviewsVertical;	// IMP=0x00000000000f8105
- (void)layoutSubviews;	// IMP=0x00000000000f7d08
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000f79a2

@end

