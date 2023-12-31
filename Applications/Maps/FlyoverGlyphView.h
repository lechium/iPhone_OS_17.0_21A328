//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class CALayer, FlyoverGlyphFrameList;

@interface FlyoverGlyphView : UIView
{
    FlyoverGlyphFrameList *_frameList;	// 8 = 0x8
    CALayer *_wrapperLayer;	// 16 = 0x10
    CALayer *_imageLayer;	// 24 = 0x18
    double _animationStartTime;	// 32 = 0x20
    double _animationEndTime;	// 40 = 0x28
    double _introDuration;	// 48 = 0x30
    double _loopDuration;	// 56 = 0x38
    double _outroDuration;	// 64 = 0x40
    _Bool _animating;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000949490
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
- (void)applicationWillEnterForeground:(id)arg1;	// IMP=0x00100000009493a2
- (double)stopAnimating;	// IMP=0x0010000000949170
- (void)startAnimating;	// IMP=0x0010000000948a0a
- (void)layoutSubviews;	// IMP=0x001000000094897e
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000094890f
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000009488b1
- (void)gv_commonInit;	// IMP=0x00100000009484f2

@end

