//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIScrollView.h>

@class NSArray, NSLayoutConstraint, UIStackView;

@interface MapsScrollableStackView : UIScrollView
{
    UIStackView *_stackView;	// 8 = 0x8
    NSLayoutConstraint *_distributionConstraint;	// 16 = 0x10
    NSLayoutConstraint *_alignmentConstraint;	// 24 = 0x18
    float _fittingSizePriority;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000009db1b4
@property(nonatomic) float fittingSizePriority; // @synthesize fittingSizePriority=_fittingSizePriority;
- (void)_updateConstraintConstants;	// IMP=0x00100000009db0e2
- (id)_constraints;	// IMP=0x00100000009db051
- (void)_updateOrientationWithNewAxis:(long long)arg1;	// IMP=0x00100000009dad68
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;	// IMP=0x00100000009dad4b
- (void)adjustedContentInsetDidChange;	// IMP=0x00100000009dad0a
@property(readonly, copy, nonatomic) NSArray *arrangedSubviews;
- (void)insertArrangedSubview:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00100000009dac82
- (void)removeArrangedSubview:(id)arg1;	// IMP=0x00100000009dac65
- (void)setCustomSpacing:(double)arg1 afterView:(id)arg2;	// IMP=0x00100000009dac48
- (void)addArrangedSubview:(id)arg1;	// IMP=0x00100000009dac2b
@property(nonatomic) double spacing;
@property(nonatomic) long long axis;
@property(nonatomic) long long distribution;
@property(nonatomic) long long alignment;
- (void)_setupViewsWithSubviews:(id)arg1;	// IMP=0x00100000009da91d
- (id)initWithArrangedSubviews:(id)arg1;	// IMP=0x00100000009da89e

@end

