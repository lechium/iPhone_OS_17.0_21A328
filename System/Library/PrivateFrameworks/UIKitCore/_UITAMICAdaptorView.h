//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSLayoutConstraint, NSString;
@protocol _UITAMICAdaptorViewDelegate;

__attribute__((visibility("hidden")))
@interface _UITAMICAdaptorView : UIView
{
    UIView *_view;	// 128 = 0x80
    NSLayoutConstraint *_width;	// 136 = 0x88
    NSLayoutConstraint *_height;	// 144 = 0x90
    struct CGSize _layoutSize;	// 152 = 0x98
    _Bool _inLayout;	// 168 = 0xa8
    float _sizingPriority;	// 172 = 0xac
    id <_UITAMICAdaptorViewDelegate> _delegate;	// 176 = 0xb0
}

+ (_Bool)shouldWrapView:(id)arg1;	// IMP=0x00100000001e4729
- (void).cxx_destruct;	// IMP=0x00000000001e4f96
@property(nonatomic) __weak id <_UITAMICAdaptorViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float sizingPriority; // @synthesize sizingPriority=_sizingPriority;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
- (void)layoutSubviews;	// IMP=0x00000000001e4ebc
- (void)_geometryChanged:(const CDStruct_c9afd433 *)arg1 forAncestor:(id)arg2;	// IMP=0x00000000001e4e6e
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001e4e3f
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;	// IMP=0x00000000001e4dd9
- (void)_updateTraitsAndLayoutSizeIfNecessary;	// IMP=0x00000000001e4d6f
- (void)updateForAvailableSize;	// IMP=0x00000000001e4bf5
- (void)didMoveToWindow;	// IMP=0x00000000001e4b89
- (id)initWithView:(id)arg1;	// IMP=0x00000000001e484f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

