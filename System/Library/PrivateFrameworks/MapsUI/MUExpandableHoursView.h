//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MUPlaceSectionRowView.h"

@class MUBusinessHoursConfiguration, MUHoursSummaryView, MUStackLayout, MUStackView, NSArray, NSString;
@protocol MUExpandableHoursViewDelegate;

__attribute__((visibility("hidden")))
@interface MUExpandableHoursView : MUPlaceSectionRowView
{
    MUStackView *_contentStackView;	// 8 = 0x8
    MUHoursSummaryView *_hoursSummaryView;	// 16 = 0x10
    NSArray *_dayRowViews;	// 24 = 0x18
    MUStackLayout *_summaryAndHoursStackLayout;	// 32 = 0x20
    MUBusinessHoursConfiguration *_config;	// 40 = 0x28
    NSArray *_dayRowViewModels;	// 48 = 0x30
    _Bool _stacked;	// 56 = 0x38
    _Bool _expanded;	// 57 = 0x39
    id <MUExpandableHoursViewDelegate> _delegate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000e2844
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic) __weak id <MUExpandableHoursViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isStacked) _Bool stacked; // @synthesize stacked=_stacked;
@property(readonly, nonatomic) MUBusinessHoursConfiguration *hoursConfiguration;
- (void)_invokeChildrenOfStackingChange;	// IMP=0x00000000000e2686
- (_Bool)shouldStackForProposedWidth:(double)arg1;	// IMP=0x00000000000e2511
- (void)_updateHoursVisibilityAnimated:(_Bool)arg1;	// IMP=0x00000000000e21d8
- (void)_setExpanded:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000e2146
- (void)_setupStackView;	// IMP=0x00000000000e1af3
- (void)_addDayRowViewsToStackViewIfNeeded;	// IMP=0x00000000000e1728
- (void)_createDayRowViewsIfNeeded;	// IMP=0x00000000000e168d
- (void)_buildDayRowViewModels;	// IMP=0x00000000000e0f6f
- (id)initWithBusinessHoursConfiguration:(id)arg1;	// IMP=0x00000000000e0d84

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
