//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CarDynamicBlurView, NSString;

@interface CarFocusableBlurControl
{
    CarDynamicBlurView *_blurView;	// 8 = 0x8
    struct CGRect _lastBounds;	// 16 = 0x10
    unsigned long long _lastRoundedCorners;	// 48 = 0x30
    double _lastRoundedCornerRadius;	// 56 = 0x38
    _Bool _castsShadow;	// 64 = 0x40
    _Bool _hidesBlur;	// 65 = 0x41
    unsigned long long _roundedCorners;	// 72 = 0x48
    double _roundedCornerRadius;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00200000007d4240
@property(nonatomic) _Bool hidesBlur; // @synthesize hidesBlur=_hidesBlur;
@property(nonatomic) _Bool castsShadow; // @synthesize castsShadow=_castsShadow;
@property(nonatomic) double roundedCornerRadius; // @synthesize roundedCornerRadius=_roundedCornerRadius;
- (unsigned long long);	// IMP=0x00100000007d41fd
- (void)_updateShadow;	// IMP=0x00100000007d4148
@property(nonatomic) unsigned long long roundedCorners; // @synthesize roundedCorners=_roundedCorners;
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00100000007d402a
- (id)backgroundColor;	// IMP=0x00100000007d3fcf
@property(readonly, nonatomic) _Bool needsContinuousRoundedCorners;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000007d3f08
- (void)layoutSubviews;	// IMP=0x00100000007d3cd2
- (void)didMoveToWindow;	// IMP=0x00100000007d3c64
- (void)_commonInit;	// IMP=0x00100000007d3b87
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000007d3b2a
- (id)init;	// IMP=0x00100000007d3ade

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) struct UIEdgeInsets touchInsets;

@end

