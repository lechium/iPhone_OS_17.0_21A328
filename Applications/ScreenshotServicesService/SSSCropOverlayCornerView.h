//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class SSSCropOverlayGrabberView;

@interface SSSCropOverlayCornerView : UIView
{
    unsigned long long _corner;	// 8 = 0x8
    SSSCropOverlayGrabberView *_topLineView;	// 16 = 0x10
    SSSCropOverlayGrabberView *_leftLineView;	// 24 = 0x18
}

+ (double)preferredDimension;	// IMP=0x004000000003af58
- (void).cxx_destruct;	// IMP=0x002000000003b2cc
@property(readonly, nonatomic) unsigned long long corner; // @synthesize corner=_corner;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x001000000003b198
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x001000000003b0d9
- (struct CGSize)intrinsicContentSize;	// IMP=0x001000000003b090
- (void)layoutSubviews;	// IMP=0x001000000003af71
- (id)initForCorner:(unsigned long long)arg1;	// IMP=0x001000000003ae16

@end

