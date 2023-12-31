//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class MISSING_TYPE, NSLayoutConstraint, SCATMenuLabel, SCATModernMenuItem, UIActivityIndicatorView, UIImage, UIImageView, UIVisualEffect, UIVisualEffectView;

@interface SCATMenuItemCell : UICollectionViewCell
{
    _Bool _shouldUseActivityIndicator;	// 8 = 0x8
    _Bool _shouldSuppressAudioOutput;	// 9 = 0x9
    _Bool _shouldIncludeTextLabels;	// 10 = 0xa
    _Bool _isFlashing;	// 11 = 0xb
    NSLayoutConstraint *_titleHiddenConstraint;	// 16 = 0x10
    SCATModernMenuItem *_menuItem;	// 24 = 0x18
    UIImage *_iconImage;	// 32 = 0x20
    double _iconImageAngle;	// 40 = 0x28
    UIImageView *_pressedBackgroundBorderImageView;	// 48 = 0x30
    UIImage *_defaultBackgroundImage;	// 56 = 0x38
    UIImage *_pressedBackgroundImage;	// 64 = 0x40
    UIImage *_dimmedBackgroundImage;	// 72 = 0x48
    SCATMenuLabel *_titleLabel;	// 80 = 0x50
    UIImageView *_backgroundBorderImageView;	// 88 = 0x58
    UIVisualEffectView *_borderContainerView;	// 96 = 0x60
    UIImage *_dimmedIconImage;	// 104 = 0x68
    UIImage *_highVisBackgroundAndIconImage;	// 112 = 0x70
    UIImageView *_iconImageView;	// 120 = 0x78
    UIVisualEffect *_iconEffect;	// 128 = 0x80
    UIActivityIndicatorView *_activityIndicatorView;	// 136 = 0x88
    UIVisualEffectView *_iconContainerView;	// 144 = 0x90
}

+ (struct CGSize)cellSizeForTitle:(id)arg1;	// IMP=0x00400000000c52d1
+ (struct CGSize)maxCellSize;	// IMP=0x00100000000c52b0
+ (id)measuringCell;	// IMP=0x00100000000c514a
+ (id)titleToSizeCache;	// IMP=0x00100000000c5040
- (void).cxx_destruct;	// IMP=0x00200000000c8af5
@property(nonatomic) _Bool isFlashing; // @synthesize isFlashing=_isFlashing;
@property(retain, nonatomic) UIVisualEffectView *iconContainerView; // @synthesize iconContainerView=_iconContainerView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) UIVisualEffect *iconEffect; // @synthesize iconEffect=_iconEffect;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIImage *highVisBackgroundAndIconImage; // @synthesize highVisBackgroundAndIconImage=_highVisBackgroundAndIconImage;
@property(retain, nonatomic) UIImage *dimmedIconImage; // @synthesize dimmedIconImage=_dimmedIconImage;
@property(retain, nonatomic) UIVisualEffectView *borderContainerView; // @synthesize borderContainerView=_borderContainerView;
@property(retain, nonatomic) UIImageView *backgroundBorderImageView; // @synthesize backgroundBorderImageView=_backgroundBorderImageView;
@property(nonatomic) _Bool shouldIncludeTextLabels; // @synthesize shouldIncludeTextLabels=_shouldIncludeTextLabels;
@property(retain, nonatomic) SCATMenuLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImage *dimmedBackgroundImage; // @synthesize dimmedBackgroundImage=_dimmedBackgroundImage;
@property(retain, nonatomic) UIImage *pressedBackgroundImage; // @synthesize pressedBackgroundImage=_pressedBackgroundImage;
@property(retain, nonatomic) UIImage *defaultBackgroundImage; // @synthesize defaultBackgroundImage=_defaultBackgroundImage;
@property(retain, nonatomic) UIImageView *pressedBackgroundBorderImageView; // @synthesize pressedBackgroundBorderImageView=_pressedBackgroundBorderImageView;
@property(nonatomic) double iconImageAngle; // @synthesize iconImageAngle=_iconImageAngle;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(nonatomic) __weak SCATModernMenuItem *menuItem; // @synthesize menuItem=_menuItem;
@property(nonatomic) _Bool shouldSuppressAudioOutput; // @synthesize shouldSuppressAudioOutput=_shouldSuppressAudioOutput;
@property(nonatomic) _Bool shouldUseActivityIndicator; // @synthesize shouldUseActivityIndicator=_shouldUseActivityIndicator;
- (void)flash;	// IMP=0x00100000000c858f
- (void)update;	// IMP=0x00100000000c838d
- (MISSING_TYPE *)resetCell;	// IMP=0x00100000000c837b
- (_Bool)allowsDwellScanningToAbortAfterTimeout;	// IMP=0x00100000000c8337
- (id)accessibilityLabel;	// IMP=0x00100000000c82e7
- (id)scatSpeakableDescription;	// IMP=0x00100000000c8287
- (_Bool)scatIndicatesOwnFocus;	// IMP=0x00100000000c827f
- (_Bool)scatShouldActivateDirectly;	// IMP=0x00100000000c8277
- (_Bool)scatPerformAction:(int)arg1;	// IMP=0x00100000000c821b
- (_Bool)scatSupportsAction:(int)arg1;	// IMP=0x00100000000c820c
- (void)prepareForReuse;	// IMP=0x00100000000c8054
- (void)didUpdateScatMenuItemStyle;	// IMP=0x00100000000c7eb5
- (void)_setIconDimmed:(_Bool)arg1 asDimAsBorder:(_Bool)arg2 focused:(_Bool)arg3;	// IMP=0x00100000000c7bd8
- (void)_setBorderDimmed:(_Bool)arg1 focused:(_Bool)arg2 hidden:(_Bool)arg3;	// IMP=0x00100000000c7798
- (_Bool)_useHighVisibilityImage;	// IMP=0x00100000000c774d
@property(readonly, nonatomic) NSLayoutConstraint *titleHiddenConstraint; // @synthesize titleHiddenConstraint=_titleHiddenConstraint;
- (id)description;	// IMP=0x00100000000c71f4
- (void)_setupConstraints;	// IMP=0x00100000000c59e8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000000c5479

@end

