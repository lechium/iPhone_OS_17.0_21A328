//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MKPlaceSectionViewController.h"

@class MKMapItem, MKPlaceSectionHeaderView, NSArray, NSString, NSTimeZone;
@protocol _MKInfoCardAnalyticsDelegate;

__attribute__((visibility("hidden")))
@interface MKPlaceHoursViewController : MKPlaceSectionViewController
{
    _Bool _isExpanded;	// 8 = 0x8
    MKPlaceSectionHeaderView *_headerView;	// 16 = 0x10
    NSArray *_businessHours;	// 24 = 0x18
    _Bool _resizableViewsDisabled;	// 32 = 0x20
    id <_MKInfoCardAnalyticsDelegate> _analyticsDelegate;	// 40 = 0x28
    MKMapItem *_mapItem;	// 48 = 0x30
}

+ (id)placeHoursWithMapItem:(id)arg1;	// IMP=0x001000000008073e
- (void).cxx_destruct;	// IMP=0x000000000008190a
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(nonatomic) __weak id <_MKInfoCardAnalyticsDelegate> analyticsDelegate; // @synthesize analyticsDelegate=_analyticsDelegate;
@property(nonatomic) _Bool resizableViewsDisabled; // @synthesize resizableViewsDisabled=_resizableViewsDisabled;
- (id)infoCardChildUnactionableUIElements;	// IMP=0x00000000000818af
- (id)infoCardChildPossibleActions;	// IMP=0x000000000008180a
- (void)infoCardThemeChanged;	// IMP=0x0000000000081602
- (void)_updateHoursAnimated:(_Bool)arg1;	// IMP=0x0000000000080fe2
- (void)_contentSizeDidChange;	// IMP=0x0000000000080fce
- (void)_toggleShowAllHours;	// IMP=0x0000000000080ef3
- (void)_setExpanded:(_Bool)arg1;	// IMP=0x0000000000080e35
- (_Bool)_shouldOnlyShowExpanded;	// IMP=0x0000000000080cbd
@property(readonly, nonatomic) NSArray *businessHours;
- (id)hoursBuilderWithHours:(id)arg1;	// IMP=0x0000000000080b70
@property(readonly, nonatomic) NSTimeZone *timeZone;
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000080a22
- (void)viewDidLoad;	// IMP=0x0000000000080864
- (id)titleString;	// IMP=0x0000000000080853
- (id)initWithMapItem:(id)arg1;	// IMP=0x00000000000807e7
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000080736

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

