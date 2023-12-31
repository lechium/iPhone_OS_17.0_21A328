//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DirectionsStepView, NSLayoutConstraint, NSString, UIView;

@interface DirectionsStepCollectionViewCell
{
    DirectionsStepView *_stepView;	// 8 = 0x8
    long long _grouping;	// 16 = 0x10
    NSLayoutConstraint *_heightConstraint;	// 24 = 0x18
}

+ (double)heightForWidth:(double)arg1 route:(id)arg2 step:(id)arg3 idiom:(long long)arg4;	// IMP=0x00200000002888fa
+ (unsigned long long)signViewIconSize;	// IMP=0x00100000002888cf
+ (CDStruct_afa449f9)cellMetricsForIdiom:(long long)arg1;	// IMP=0x0010000000288871
+ (Class)stepViewClass;	// IMP=0x00100000002884aa
+ (id)reuseIdentifier;	// IMP=0x0010000000288498
- (void).cxx_destruct;	// IMP=0x0020000000288b73
@property(retain, nonatomic) UIView *trailingView;
@property(nonatomic) _Bool isSelectedRow;
- (void)setIsDimmedStep:(_Bool)arg1;	// IMP=0x0010000000288ae2
- (void)setRoute:(id)arg1 step:(id)arg2 stepIndex:(unsigned long long)arg3 alignToLeftEdgeIfNoManeuverSign:(_Bool)arg4 size:(long long)arg5;	// IMP=0x0010000000288988
- (void)updateTheme;	// IMP=0x0010000000288722
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000002884bb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

