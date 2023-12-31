//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ContainerHeaderView, NSString, TrafficFeatureTitleView, TrafficIncidentReport, TrafficIncidentTitleView, TrafficIncidentsViewController, VKTrafficIncidentFeature;

@interface TrafficIncidentContaineeViewController
{
    CDUnknownBlockType _dismissHandler;	// 8 = 0x8
    TrafficIncidentsViewController *_incidentsViewController;	// 16 = 0x10
    ContainerHeaderView *_headerView;	// 24 = 0x18
    TrafficFeatureTitleView *_macTitleView;	// 32 = 0x20
    TrafficIncidentTitleView *_titleView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000509136
@property(retain, nonatomic) TrafficIncidentTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) TrafficFeatureTitleView *macTitleView; // @synthesize macTitleView=_macTitleView;
@property(retain, nonatomic) ContainerHeaderView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) TrafficIncidentsViewController *incidentsViewController; // @synthesize incidentsViewController=_incidentsViewController;
@property(copy, nonatomic) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
- (void)dismiss;	// IMP=0x0010000000509080
- (void)headerViewTapped:(id)arg1;	// IMP=0x0010000000509043
- (void)headerViewButtonTapped:(id)arg1;	// IMP=0x0010000000509031
- (double)heightForLayout:(unsigned long long)arg1;	// IMP=0x0010000000508eff
- (void)handleDismissAction:(id)arg1;	// IMP=0x0010000000508e0d
- (id)contentView;	// IMP=0x0010000000508dbd
- (void)applyAlphaToContent:(double)arg1;	// IMP=0x0010000000508d3b
- (void)dealloc;	// IMP=0x0010000000508c8b
- (struct CGSize)_calculatePreferredContentSize;	// IMP=0x0010000000508b34
- (void)viewDidLayoutSubviews;	// IMP=0x00100000005089af
- (void)_updatePreferredContentSize;	// IMP=0x0010000000508930
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000508910
- (void)viewDidLoad;	// IMP=0x0010000000507f36
- (void)_logAdvisoryShown;	// IMP=0x0010000000507ee5
- (void)_updateMacTableViewHeader;	// IMP=0x0010000000507a87
- (void)_updateHeaderView;	// IMP=0x001000000050767e
@property(retain, nonatomic) TrafficIncidentReport *incidentReport;
@property(retain, nonatomic) VKTrafficIncidentFeature *incident;
- (id)init;	// IMP=0x00100000005073e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

