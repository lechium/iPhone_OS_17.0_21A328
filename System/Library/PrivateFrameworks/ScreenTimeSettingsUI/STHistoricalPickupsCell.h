//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, STHistoricalUsageViewController, STHorizontallySegmentedView, UILabel;

__attribute__((visibility("hidden")))
@interface STHistoricalPickupsCell
{
    STHistoricalUsageViewController *_historicalUsageViewController;	// 120 = 0x78
    STHorizontallySegmentedView *_pickupMetricsView;	// 128 = 0x80
    UILabel *_firstUsedAfterPickupLabel;	// 136 = 0x88
    NSLayoutConstraint *_bottomConstraint;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000000063cf7
@property(retain) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(readonly) UILabel *firstUsedAfterPickupLabel; // @synthesize firstUsedAfterPickupLabel=_firstUsedAfterPickupLabel;
@property(readonly) STHorizontallySegmentedView *pickupMetricsView; // @synthesize pickupMetricsView=_pickupMetricsView;
@property(readonly) STHistoricalUsageViewController *historicalUsageViewController; // @synthesize historicalUsageViewController=_historicalUsageViewController;
- (void)setValue:(id)arg1;	// IMP=0x0000000000062f64
- (id)value;	// IMP=0x0000000000062f26
- (void)_handleEffectiveChangeForViewMode:(long long)arg1 hasMultilineLayout:(_Bool)arg2 numberOfLines:(unsigned long long)arg3;	// IMP=0x0000000000062dee
- (void)_numberOfLinesDidChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;	// IMP=0x0000000000062d41
- (void)_hasMulitlineLayoutDidChangeFrom:(_Bool)arg1 to:(_Bool)arg2;	// IMP=0x0000000000062c52
- (void)_currentViewModeDidChangeFrom:(long long)arg1 to:(long long)arg2;	// IMP=0x0000000000062b4c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000062714
- (void)dealloc;	// IMP=0x000000000006266b
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;	// IMP=0x0000000000061fac

@end

