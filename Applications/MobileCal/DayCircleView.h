//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UIColor;

@interface DayCircleView : UIView
{
    _Bool _usesRoundedRectInsteadOfCircle;	// 8 = 0x8
    UIColor *_color;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000057264
@property(nonatomic) _Bool usesRoundedRectInsteadOfCircle; // @synthesize usesRoundedRectInsteadOfCircle=_usesRoundedRectInsteadOfCircle;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00100000000570d1
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000057006

@end

