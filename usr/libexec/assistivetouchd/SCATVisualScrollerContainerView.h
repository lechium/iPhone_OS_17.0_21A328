//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CALayer, SCATVisualScrollerView, UIView, UIVisualEffectView;
@protocol SCATVisualScrollerContainerViewScrollingDelegate;

@interface SCATVisualScrollerContainerView
{
    id <SCATVisualScrollerContainerViewScrollingDelegate> _delegate;	// 8 = 0x8
    SCATVisualScrollerView *_scrollUpView;	// 16 = 0x10
    SCATVisualScrollerView *_scrollDownView;	// 24 = 0x18
    SCATVisualScrollerView *_scrollLeftView;	// 32 = 0x20
    SCATVisualScrollerView *_scrollRightView;	// 40 = 0x28
    long long _axis;	// 48 = 0x30
    CALayer *_borderLayer;	// 56 = 0x38
    UIVisualEffectView *_backgroundView;	// 64 = 0x40
    UIView *_scrollerContainerView;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000007d3a1
@property(retain, nonatomic) UIView *scrollerContainerView; // @synthesize scrollerContainerView=_scrollerContainerView;
@property(retain, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) CALayer *borderLayer; // @synthesize borderLayer=_borderLayer;
@property(nonatomic) long long axis; // @synthesize axis=_axis;
@property(retain, nonatomic) SCATVisualScrollerView *scrollRightView; // @synthesize scrollRightView=_scrollRightView;
@property(retain, nonatomic) SCATVisualScrollerView *scrollLeftView; // @synthesize scrollLeftView=_scrollLeftView;
@property(retain, nonatomic) SCATVisualScrollerView *scrollDownView; // @synthesize scrollDownView=_scrollDownView;
@property(retain, nonatomic) SCATVisualScrollerView *scrollUpView; // @synthesize scrollUpView=_scrollUpView;
@property(nonatomic) __weak id <SCATVisualScrollerContainerViewScrollingDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)updateFocusState:(long long)arg1;	// IMP=0x001000000007cce6
- (id)description;	// IMP=0x001000000007cc46
- (void)layoutSubviews;	// IMP=0x001000000007c968
- (id)initWithAxis:(long long)arg1;	// IMP=0x001000000007b8cc
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000007b8b8
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000007b8a4

@end
