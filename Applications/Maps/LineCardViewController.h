//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MUTransitLineItemViewController, NSString, VKLabelMarker;
@protocol GEOTransitLineItem, LineCardViewControllerDelegate;

@interface LineCardViewController
{
    _Bool _didInsertInHistory;	// 8 = 0x8
    unsigned long long _preferredLayout;	// 16 = 0x10
    MUTransitLineItemViewController *_lineItemViewController;	// 24 = 0x18
    VKLabelMarker *_labelMarker;	// 32 = 0x20
    id <GEOTransitLineItem> _lineItem;	// 40 = 0x28
    id <LineCardViewControllerDelegate> _lineCardDelegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000062d637
@property(nonatomic) __weak id <LineCardViewControllerDelegate> lineCardDelegate; // @synthesize lineCardDelegate=_lineCardDelegate;
@property(readonly, nonatomic) id <GEOTransitLineItem> lineItem; // @synthesize lineItem=_lineItem;
@property(readonly, nonatomic) VKLabelMarker *labelMarker; // @synthesize labelMarker=_labelMarker;
- (int)currentMapViewTargetForAnalytics;	// IMP=0x001000000062d5dd
- (int)currentUITargetForAnalytics;	// IMP=0x001000000062d5d2
- (void)lineItemViewController:(id)arg1 openURL:(id)arg2;	// IMP=0x001000000062d567
- (void)lineItemViewControllerDidAppear:(id)arg1;	// IMP=0x001000000062d51b
- (double)lineItemViewControllerHeaderTitleTrailingConstant:(id)arg1;	// IMP=0x001000000062d50d
- (void)lineItemViewControllerDidSelectViewOnMap:(id)arg1;	// IMP=0x001000000062d36b
- (void)lineItemViewController:(id)arg1 didSelectDetailsForIncidents:(id)arg2;	// IMP=0x001000000062d300
- (void)lineItemViewController:(id)arg1 didSelectNearestStation:(id)arg2;	// IMP=0x001000000062d28f
- (void)lineItemViewController:(id)arg1 didSelectDirectionsToNearestStation:(id)arg2 withTransportTypePreference:(id)arg3;	// IMP=0x001000000062d095
- (void)lineItemViewControllerDidSelectReportAProblem:(id)arg1;	// IMP=0x001000000062cf5d
- (void)performAction:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000062cf40
- (id)headerActionItems;	// IMP=0x001000000062cf23
- (_Bool)supportsSharing;	// IMP=0x001000000062cf1b
- (void)insertInHistory;	// IMP=0x001000000062ce41
- (void)willChangeContainerStyle:(unsigned long long)arg1;	// IMP=0x001000000062cda9
@property(readonly, nonatomic) MUTransitLineItemViewController *lineItemViewController; // @synthesize lineItemViewController=_lineItemViewController;
- (void)resetNearestStation;	// IMP=0x001000000062cc60
- (void)setLineItem:(id)arg1 labelMarker:(id)arg2 loading:(_Bool)arg3 preferredLayout:(unsigned long long)arg4;	// IMP=0x001000000062cab7
- (void)setLineItem:(id)arg1 loading:(_Bool)arg2;	// IMP=0x001000000062ca9d
@property(readonly, nonatomic) _Bool lineItemIsLoading;
- (void)viewDidLoad;	// IMP=0x001000000062c9be
- (id)init;	// IMP=0x001000000062c940

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

