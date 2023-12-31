//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSArray, NSString, UIColor, UILabel;

@interface YearMonthTransitionMonthView : UIView
{
    _Bool _hasValidOrigin;	// 8 = 0x8
    double _topInset;	// 16 = 0x10
    UILabel *_monthLabel;	// 24 = 0x18
    NSArray *_weekViews;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000136c3f
@property(retain, nonatomic) NSArray *weekViews; // @synthesize weekViews=_weekViews;
@property(retain, nonatomic) UILabel *monthLabel; // @synthesize monthLabel=_monthLabel;
@property(nonatomic) _Bool hasValidOrigin; // @synthesize hasValidOrigin=_hasValidOrigin;
@property(nonatomic) double topInset; // @synthesize topInset=_topInset;
@property(readonly, nonatomic) UIColor *monthLabelColor;
@property(readonly, nonatomic) NSString *monthLabelText;
@property(readonly, nonatomic) struct CGRect monthLabelFrame;
- (struct CGRect)_adjustFrame:(struct CGRect)arg1;	// IMP=0x00100000001369bd
@property(readonly, nonatomic) struct CGRect monthFrameInMonthView;
@property(readonly, nonatomic) struct CGRect monthFrame;

@end

