//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSLayoutAnchor, NSLayoutConstraint, UIButton;

@interface RouteTableViewCellButtonConstraintsController : NSObject
{
    _Bool _buttonVisible;	// 8 = 0x8
    NSLayoutAnchor *_leadingAnchor;	// 16 = 0x10
    NSLayoutAnchor *_trailingAnchor;	// 24 = 0x18
    NSLayoutAnchor *_firstBaselineAnchor;	// 32 = 0x20
    double _leadingDistance;	// 40 = 0x28
    double _firstBaselineDistance;	// 48 = 0x30
    NSLayoutConstraint *_firstBaselineConstraintShown;	// 56 = 0x38
    NSArray *_constraintsWhenButtonHidden;	// 64 = 0x40
    NSArray *_constraintsWhenButtonShown;	// 72 = 0x48
    UIButton *_button;	// 80 = 0x50
}

- (void);	// IMP=0x002000000067ff68
@property(nonatomic, getter=isButtonVisible) _Bool buttonVisible; // @synthesize buttonVisible=_buttonVisible;
@property(nonatomic) __weak UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) NSArray *constraintsWhenButtonShown; // @synthesize constraintsWhenButtonShown=_constraintsWhenButtonShown;
@property(retain, nonatomic) NSArray *constraintsWhenButtonHidden; // @synthesize constraintsWhenButtonHidden=_constraintsWhenButtonHidden;
@property(readonly, nonatomic) NSLayoutConstraint *firstBaselineConstraintShown; // @synthesize firstBaselineConstraintShown=_firstBaselineConstraintShown;
@property(nonatomic) double firstBaselineDistance; // @synthesize firstBaselineDistance=_firstBaselineDistance;
@property(readonly, nonatomic) double leadingDistance; // @synthesize leadingDistance=_leadingDistance;
@property(readonly, nonatomic) NSLayoutAnchor *firstBaselineAnchor; // @synthesize firstBaselineAnchor=_firstBaselineAnchor;
@property(readonly, nonatomic) NSLayoutAnchor *trailingAnchor; // @synthesize trailingAnchor=_trailingAnchor;
@property(readonly, nonatomic) NSLayoutAnchor *leadingAnchor; // @synthesize leadingAnchor=_leadingAnchor;
- (void)_invalidateButtonConstraints;	// IMP=0x001000000067fe82
- (void)_updateActiveConstraintsToSetButtonVisible:(_Bool)arg1;	// IMP=0x001000000067fdbc
@property(readonly, nonatomic) NSArray *initialConstraints;
- (id)initWithLeadingAnchor:(id)arg1 trailingAnchor:(id)arg2 firstBaselineAnchor:(id)arg3 leadingDistance:(double)arg4 firstBaselineDistance:(double)arg5;	// IMP=0x001000000067f80d

@end
