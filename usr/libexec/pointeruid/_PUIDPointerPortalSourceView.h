//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIViewFloatAnimatableProperty, _UIPortalView;

@interface _PUIDPointerPortalSourceView : UIView
{
    _UIPortalView *_contentPortalView;	// 8 = 0x8
    UIViewFloatAnimatableProperty *_opacityPairFilterAnimatableProperty;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000002d414
@property(retain, nonatomic) UIViewFloatAnimatableProperty *opacityPairFilterAnimatableProperty; // @synthesize opacityPairFilterAnimatableProperty=_opacityPairFilterAnimatableProperty;
@property(readonly, nonatomic) _UIPortalView *contentPortalView; // @synthesize contentPortalView=_contentPortalView;
- (void)layoutSubviews;	// IMP=0x001000000002d362
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000002d23f

@end
