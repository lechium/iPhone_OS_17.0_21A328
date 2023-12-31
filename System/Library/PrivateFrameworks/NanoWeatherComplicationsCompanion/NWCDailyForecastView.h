//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CLKDevice, NWKUILinearGaugeView, UILabel;

__attribute__((visibility("hidden")))
@interface NWCDailyForecastView : UIView
{
    CLKDevice *_device;	// 8 = 0x8
    NWKUILinearGaugeView *_linearGaugeView;	// 16 = 0x10
    UILabel *_weekdayLabel;	// 24 = 0x18
}

+ (void)initialize;	// IMP=0x006000000000f4aa
- (void).cxx_destruct;	// IMP=0x000000000000fdfb
@property(readonly, nonatomic) UILabel *weekdayLabel; // @synthesize weekdayLabel=_weekdayLabel;
@property(readonly, nonatomic) NWKUILinearGaugeView *linearGaugeView; // @synthesize linearGaugeView=_linearGaugeView;
@property(readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
- (void)_applyLayoutConstraints:(CDStruct_d2b197d1)arg1;	// IMP=0x000000000000fc1b
- (void)updateWithHighlightColor:(id)arg1 fraction:(double)arg2;	// IMP=0x000000000000fba0
- (void)applyNonAccentFilters:(id)arg1 fraction:(double)arg2;	// IMP=0x000000000000fa92
- (void)applyAccentFilters:(id)arg1 fraction:(double)arg2;	// IMP=0x000000000000f9e8
- (void)layoutSubviews;	// IMP=0x000000000000f844
- (id)initWithDevice:(id)arg1;	// IMP=0x000000000000f50a

@end

