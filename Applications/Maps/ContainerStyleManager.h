//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ContainerViewController, NSLayoutConstraint;

@interface ContainerStyleManager : NSObject
{
    NSLayoutConstraint *_widthContainerViewConstraint;	// 8 = 0x8
    NSLayoutConstraint *_leadingContainerViewConstraint;	// 16 = 0x10
    NSLayoutConstraint *_trailingContainerViewConstraint;	// 24 = 0x18
    NSLayoutConstraint *_topContainerViewConstraint;	// 32 = 0x20
    NSLayoutConstraint *_bottomContainerViewConstraint;	// 40 = 0x28
    _Bool _allowOnlyStandardStyle;	// 48 = 0x30
    _Bool _stackOnOppositeSide;	// 49 = 0x31
    unsigned long long _containerStyle;	// 56 = 0x38
    ContainerViewController *_containerViewController;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000023a0b0
@property(nonatomic) __weak ContainerViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(nonatomic) _Bool stackOnOppositeSide; // @synthesize stackOnOppositeSide=_stackOnOppositeSide;
@property(nonatomic) _Bool allowOnlyStandardStyle; // @synthesize allowOnlyStandardStyle=_allowOnlyStandardStyle;
@property(readonly, nonatomic) unsigned long long containerStyle; // @synthesize containerStyle=_containerStyle;
- (void)setContainerStyle:(unsigned long long)arg1;	// IMP=0x0010000000239a80
- (void)updateLayoutStyle;	// IMP=0x0010000000239936
- (unsigned long long)layoutStyleForCurrentTraitsCollection;	// IMP=0x001000000023972a
@property(readonly, nonatomic) double containerWidth;
- (void)setBottomConstraint;	// IMP=0x00100000002393f4
- (void)configureStyleLayout;	// IMP=0x0010000000238742
- (double)leadingMargin;	// IMP=0x001000000023841c
- (void)createConstraints;	// IMP=0x0010000000238001
- (id)initWithContainer:(id)arg1;	// IMP=0x0010000000237f90

@end

