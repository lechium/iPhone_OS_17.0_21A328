//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class SSSPathView, _SSSAnimatableBorderCornerRadiusView;

@interface SSSWaitingForImageIdentifierUpdatesAlertContentView : UIView
{
    _SSSAnimatableBorderCornerRadiusView *_outerRingView;	// 8 = 0x8
    SSSPathView *_innerPieView;	// 16 = 0x10
    double _progress;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000003550d
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000000353f6
- (struct CGSize)intrinsicContentSize;	// IMP=0x0010000000035207
- (id)_shapeLayerPathForProgress:(double)arg1;	// IMP=0x0010000000035158
- (void)layoutSubviews;	// IMP=0x0010000000034f6c

@end

