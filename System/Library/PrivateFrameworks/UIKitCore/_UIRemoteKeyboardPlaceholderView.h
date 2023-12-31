//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UIWindowScene;

__attribute__((visibility("hidden")))
@interface _UIRemoteKeyboardPlaceholderView : UIView
{
    UIView *_mirroredView;	// 8 = 0x8
    struct CGSize _fixedSize;	// 16 = 0x10
    CDUnknownBlockType _sizeBlock;	// 32 = 0x20
    UIWindowScene *_sceneForHeight;	// 40 = 0x28
    _Bool _isLocalMinimumHeight;	// 48 = 0x30
    UIView *_fallbackView;	// 56 = 0x38
    UIView *_associatedView;	// 64 = 0x40
}

+ (id)placeholderWithWidthSizer:(CDUnknownBlockType)arg1 heightWithScene:(id)arg2;	// IMP=0x0010000000dc40f9
+ (id)placeholderWithWidth:(double)arg1 height:(double)arg2;	// IMP=0x0010000000dc40b4
+ (id)placeholderForView:(id)arg1;	// IMP=0x0010000000dc4000
- (void).cxx_destruct;	// IMP=0x0000000000dc4e3a
@property(retain, nonatomic) UIView *associatedView; // @synthesize associatedView=_associatedView;
@property(retain, nonatomic) UIView *fallbackView; // @synthesize fallbackView=_fallbackView;
- (void)_configureDebugOverlayIfNecessary;	// IMP=0x0000000000dc49c9
@property(readonly, nonatomic) _Bool isLocalMinimumHeightPlaceholder;
- (void)_isPlaceholderViewSelector;	// IMP=0x0000000000dc49b3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000dc479d
@property(readonly, copy) NSString *description;
@property(nonatomic) struct CGSize fixedSize;
- (_Bool)refreshPlaceholder;	// IMP=0x0000000000dc439f
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000dc4397
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000dc4228
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000dc41ee
@property(readonly) UIView *placeheldView;
- (id)initWithSize:(struct CGSize)arg1;	// IMP=0x0000000000dc3f77
- (void)_setProgress:(double)arg1 boundedBy:(double)arg2;	// IMP=0x0000000000dc4f4c
- (void)_endSplitTransitionIfNeeded:(_Bool)arg1;	// IMP=0x0000000000dc4f46
- (struct CGSize)rightContentViewSize;	// IMP=0x0000000000dc4f30
- (struct CGSize)leftContentViewSize;	// IMP=0x0000000000dc4f1a
- (void)_beginSplitTransitionIfNeeded:(double)arg1 gapWidth:(double)arg2;	// IMP=0x0000000000dc4f14
- (void)_setLeftOffset:(double)arg1 gapWidth:(double)arg2;	// IMP=0x0000000000dc4f0e
- (struct CGRect)_compatibleBounds;	// IMP=0x0000000000dc4ec2
- (void)didEndSplitTransition;	// IMP=0x0000000000dc4ebc
- (void)willBeginSplitTransition;	// IMP=0x0000000000dc4eb6
- (void)updateSplitSubviewContraintsWithLeftContentSize:(struct CGSize)arg1 rightContentSize:(struct CGSize)arg2;	// IMP=0x0000000000dc4eb0
- (void)layoutSplitSubviewsWithLeftContentSize:(struct CGSize)arg1 rightContentSize:(struct CGSize)arg2;	// IMP=0x0000000000dc4eaa
- (void)updateMergedSubviewConstraints;	// IMP=0x0000000000dc4ea4
- (void)layoutMergedSubviews;	// IMP=0x0000000000dc4e9e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

