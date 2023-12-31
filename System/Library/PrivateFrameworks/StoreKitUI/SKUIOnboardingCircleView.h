//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIColor, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIOnboardingCircleView : UIView
{
    UIImageView *_backgroundImageView;	// 8 = 0x8
    struct UIEdgeInsets _edgeInsets;	// 16 = 0x10
    double _minimumDiameter;	// 48 = 0x30
    UIColor *_fillColor;	// 56 = 0x38
    UILabel *_titleLabel;	// 64 = 0x40
    long long _titlePosition;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000002064e4
@property(nonatomic) long long titlePosition; // @synthesize titlePosition=_titlePosition;
@property(nonatomic) double minimumDiameter; // @synthesize minimumDiameter=_minimumDiameter;
@property(copy, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
- (void)layoutSubviews;	// IMP=0x0000000000206216
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000206115
- (id)description;	// IMP=0x000000000020605e
@property(readonly, nonatomic) UILabel *titleLabel;
- (void)setBackgroundImageAlpha:(double)arg1;	// IMP=0x0000000000205dfe
- (void)setBackgroundImage:(id)arg1;	// IMP=0x0000000000205d5d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000205c2a

@end

