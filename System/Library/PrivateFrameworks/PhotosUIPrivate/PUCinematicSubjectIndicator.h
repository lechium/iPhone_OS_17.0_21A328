//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class CEKCinematicSubjectIndicatorView, CEKSubjectIndicatorView;

__attribute__((visibility("hidden")))
@interface PUCinematicSubjectIndicator : UIView
{
    CEKSubjectIndicatorView *_fixedFocusView;	// 8 = 0x8
    CEKCinematicSubjectIndicatorView *_subjectView;	// 16 = 0x10
    struct CGSize _fixedFocusSize;	// 24 = 0x18
    _Bool _isPulsing;	// 40 = 0x28
    long long _shape;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000172544
@property(nonatomic) _Bool isPulsing; // @synthesize isPulsing=_isPulsing;
@property(nonatomic) long long shape; // @synthesize shape=_shape;
- (void)_startPulseAnimation;	// IMP=0x0000000000172390
- (void)setShape:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000172282
- (void)layoutSubviews;	// IMP=0x0000000000172055
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000172003
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000171eb9

@end

