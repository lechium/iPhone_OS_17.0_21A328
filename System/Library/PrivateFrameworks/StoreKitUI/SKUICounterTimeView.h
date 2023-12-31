//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSDate, SKUIClientContext, UIColor, UIFont, _SKUICounterTimeFieldView;

__attribute__((visibility("hidden")))
@interface SKUICounterTimeView : UIView
{
    SKUIClientContext *_clientContext;	// 8 = 0x8
    _SKUICounterTimeFieldView *_daysFieldView;	// 16 = 0x10
    NSDate *_endDate;	// 24 = 0x18
    _SKUICounterTimeFieldView *_hoursFieldView;	// 32 = 0x20
    long long _lastTimeValue;	// 40 = 0x28
    _SKUICounterTimeFieldView *_minutesFieldView;	// 48 = 0x30
    _SKUICounterTimeFieldView *_secondsFieldView;	// 56 = 0x38
    UIColor *_textColor;	// 64 = 0x40
    UIFont *_valueFont;	// 72 = 0x48
    unsigned long long _visibleFields;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000039e2f2
@property(nonatomic) unsigned long long visibleFields; // @synthesize visibleFields=_visibleFields;
@property(retain, nonatomic) UIFont *valueFont; // @synthesize valueFont=_valueFont;
@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
- (id)_visibleFieldViews;	// IMP=0x000000000039e012
- (void)_setValuesUsingTimestamp:(long long)arg1;	// IMP=0x000000000039dbcb
- (double)_fieldSpacingForFieldCount:(long long)arg1 fieldWidth:(double)arg2 totalWidth:(double)arg3;	// IMP=0x000000000039db83
- (id)_allFieldViews;	// IMP=0x000000000039daeb
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000039d8cf
- (void)setBackgroundColor:(id)arg1;	// IMP=0x000000000039d748
- (void)layoutSubviews;	// IMP=0x000000000039d1b8
- (void)reloadTimeValue;	// IMP=0x000000000039cbc2
- (id)initWithClientContext:(id)arg1;	// IMP=0x000000000039c77d

@end

