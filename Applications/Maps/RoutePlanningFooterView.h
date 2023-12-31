//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class MKViewWithHairline, MapsThemeButton, NSArray, NSLayoutConstraint, UIStackView;
@protocol RoutePlanningFooterViewDelegate;

@interface RoutePlanningFooterView : UIView
{
    double _previousLayoutWidth;	// 8 = 0x8
    long long _visibleCommandSet;	// 16 = 0x10
    id <RoutePlanningFooterViewDelegate> _delegate;	// 24 = 0x18
    UIStackView *_stackView;	// 32 = 0x20
    MapsThemeButton *_leadingButton;	// 40 = 0x28
    MapsThemeButton *_trailingButton;	// 48 = 0x30
    MKViewWithHairline *_trailingHairlineView;	// 56 = 0x38
    NSArray *_constraints;	// 64 = 0x40
    NSLayoutConstraint *_stackViewTrailingConstraint;	// 72 = 0x48
    NSLayoutConstraint *_stackViewFlexibleTrailingConstraint;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00200000007d96bd
@property(retain, nonatomic) NSLayoutConstraint *stackViewFlexibleTrailingConstraint; // @synthesize stackViewFlexibleTrailingConstraint=_stackViewFlexibleTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *stackViewTrailingConstraint; // @synthesize stackViewTrailingConstraint=_stackViewTrailingConstraint;
@property(retain, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) MKViewWithHairline *trailingHairlineView; // @synthesize trailingHairlineView=_trailingHairlineView;
@property(retain, nonatomic) MapsThemeButton *trailingButton; // @synthesize trailingButton=_trailingButton;
@property(retain, nonatomic) MapsThemeButton *leadingButton; // @synthesize leadingButton=_leadingButton;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) __weak id <RoutePlanningFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long visibleCommandSet; // @synthesize visibleCommandSet=_visibleCommandSet;
- (void)_didTapButton:(id)arg1;	// IMP=0x00100000007d9408
- (_Bool)shouldStackButtonsForWidth:(double)arg1;	// IMP=0x00100000007d930a
- (void)_setupConstraints;	// IMP=0x00100000007d8658
- (void);	// IMP=0x00100000007d8582
- (void)_didTapTicketingSegmentInfo:(id)arg1;	// IMP=0x00100000007d83dc
- (CDUnknownBlockType)_getTicketsMenuProvider;	// IMP=0x00100000007d7ee1
- (void)_updateVisibleCommandsForCommandSet;	// IMP=0x00100000007d74df
- (void)updateTheme;	// IMP=0x00100000007d7469
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000007d7346
- (void)customInit;	// IMP=0x00100000007d6b31
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000007d6ad4
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000007d6a88

@end

