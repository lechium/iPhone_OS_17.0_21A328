//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIBlurEffect, UIColor, UIImage, UIView;

__attribute__((visibility("hidden")))
@interface _MKBalloonLabelMarkerView
{
    UIView *_anchorDotView;	// 264 = 0x108
    _Bool _needsToResolveBalloonAttributes;	// 272 = 0x110
    long long _balloonCalloutStyle;	// 280 = 0x118
    _Bool _balloonCalloutShouldOriginateFromSmallSize;	// 288 = 0x120
    UIColor *_balloonFillColor;	// 296 = 0x128
    UIColor *_balloonStrokeColor;	// 304 = 0x130
    UIImage *_balloonImage;	// 312 = 0x138
    UIView *_balloonContentView;	// 320 = 0x140
    double _smallBalloonScaleFactor;	// 328 = 0x148
}

- (void).cxx_destruct;	// IMP=0x000000000018227a
- (void)_configureBalloonForDataIconImageKeys:(id)arg1 scale:(double)arg2;	// IMP=0x00000000001819e4
- (_Bool)updateCalloutViewIfNeededAnimated:(_Bool)arg1;	// IMP=0x000000000018100a
- (void)_addAnchorDotViewIfNeeded;	// IMP=0x0000000000180dfd
- (_Bool)shouldShowCallout;	// IMP=0x0000000000180ca9
@property(readonly, nonatomic, getter=_balloonContentView) UIView *balloonContentView;
@property(readonly, nonatomic, getter=_balloonImage) UIImage *balloonImage;
@property(readonly, nonatomic, getter=_balloonInnerStrokeColor) UIColor *balloonInnerStrokeColor;
@property(readonly, nonatomic, getter=_balloonStrokeColor) UIColor *balloonStrokeColor;
@property(readonly, nonatomic, getter=_balloonTintColor) UIColor *balloonTintColor;
- (_Bool)_balloonCalloutShouldOriginateFromSmallSize:(double *)arg1;	// IMP=0x0000000000180bad
@property(readonly, nonatomic, getter=_balloonCalloutStyle) long long balloonCalloutStyle;
- (void)traitEnvironment:(id)arg1 didChangeTraitCollection:(id)arg2;	// IMP=0x0000000000180a83
- (void)_resolveBalloonAttributesIfNecessary;	// IMP=0x000000000017fec5
- (void)prepareForReuse;	// IMP=0x000000000017fe04
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000017fd58

// Remaining properties
@property(readonly, nonatomic, getter=_balloonCalloutShouldCenterWhenOffscreen) _Bool balloonCalloutShouldCenterWhenOffscreen;
@property(readonly, nonatomic, getter=_balloonCalloutShouldShowArrow) _Bool balloonCalloutShouldShowArrow;
@property(readonly, nonatomic, getter=_balloonImageTintColor) UIColor *balloonImageTintColor;
@property(readonly, nonatomic, getter=_balloonMaterial) UIBlurEffect *balloonMaterial;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
