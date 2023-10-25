//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MUPlaceSectionController.h"

@class GEORelatedPlaceList, GEORelatedPlaceModuleConfiguration, MUPlaceCallToActionAppearance, MUPlaceSectionFooterViewModel, MUPlaceSectionHeaderViewModel, MUPlaceSectionView, MUPlaceTilesListView, MUPlaceTilesView, MURelatedPlaceSectionControllerConfiguration, NSArray, NSString, UIView, UIViewController;
@protocol MKMapServiceTicket, MUInfoCardAnalyticsDelegate, MURelatedPlacesSectionControllerDelegate;

__attribute__((visibility("hidden")))
@interface MURelatedPlacesSectionController : MUPlaceSectionController
{
    id <MKMapServiceTicket> _ticket;	// 8 = 0x8
    id <MKMapServiceTicket> _nearbyPlacesTicket;	// 16 = 0x10
    NSArray *_mapItemList;	// 24 = 0x18
    MUPlaceSectionView *_sectionView;	// 32 = 0x20
    MURelatedPlaceSectionControllerConfiguration *_configuration;	// 40 = 0x28
    MUPlaceTilesView *_tilesView;	// 48 = 0x30
    MUPlaceTilesListView *_listView;	// 56 = 0x38
    _Bool _active;	// 64 = 0x40
    _Bool _isFollowUpRequestInProgress;	// 65 = 0x41
    _Bool _hasFetchedFollowUpRequest;	// 66 = 0x42
    MUPlaceSectionHeaderViewModel *_sectionHeaderViewModel;	// 72 = 0x48
    id <MURelatedPlacesSectionControllerDelegate> _relatedPlacesDelegate;	// 80 = 0x50
    GEORelatedPlaceList *_relatedPlaceListFromFollowUpRequest;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000b8705
@property(nonatomic) _Bool hasFetchedFollowUpRequest; // @synthesize hasFetchedFollowUpRequest=_hasFetchedFollowUpRequest;
@property(nonatomic) _Bool isFollowUpRequestInProgress; // @synthesize isFollowUpRequestInProgress=_isFollowUpRequestInProgress;
@property(retain, nonatomic) GEORelatedPlaceList *relatedPlaceListFromFollowUpRequest; // @synthesize relatedPlaceListFromFollowUpRequest=_relatedPlaceListFromFollowUpRequest;
@property(nonatomic) __weak id <MURelatedPlacesSectionControllerDelegate> relatedPlacesDelegate; // @synthesize relatedPlacesDelegate=_relatedPlacesDelegate;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (void)performInstrumentationForScrollRight;	// IMP=0x00000000000b85be
- (void)performInstrumentationForScrollLeft;	// IMP=0x00000000000b8519
- (_Bool)isImpressionable;	// IMP=0x00000000000b8511
- (int)analyticsModuleType;	// IMP=0x00000000000b8494
- (id)_moduleTitle;	// IMP=0x00000000000b8275
- (void)_populateAnalyticsModule:(id)arg1;	// IMP=0x00000000000b8161
- (void)_notifyDelegateForSeeAll;	// IMP=0x00000000000b801c
- (void)_seeAllTapped;	// IMP=0x00000000000b7ca2
@property(readonly, nonatomic) _Bool needsToPerformRefinement;
@property(readonly, nonatomic) GEORelatedPlaceModuleConfiguration *moduleConfig;
@property(readonly, nonatomic) GEORelatedPlaceList *effectiveRelatedPlaceList;
- (void)placeTileCollectionView:(id)arg1 didTapOnAccessoryViewModel:(id)arg2;	// IMP=0x00000000000b7b8e
- (void)_cancelFollowUpRequestIfNeeded;	// IMP=0x00000000000b7b3c
- (void)_cancelPlaceRefinementIfNeeded;	// IMP=0x00000000000b7af9
- (void)_refineHikingTrailListWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b78d3
- (void)_refineRelatedPlaceListWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b77b6
- (void)_notifyDelegateOfSelectedMapItem:(id)arg1;	// IMP=0x00000000000b7666
- (void)_refinePlaceAndNotifyDelegate:(id)arg1;	// IMP=0x00000000000b7449
- (void)_handleViewModel:(id)arg1;	// IMP=0x00000000000b72aa
- (void)placeTilesListView:(id)arg1 didSelectViewModel:(id)arg2;	// IMP=0x00000000000b7295
- (void)placeTileCollectionView:(id)arg1 didTapOnViewModel:(id)arg2;	// IMP=0x00000000000b7280
@property(readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel; // @synthesize sectionHeaderViewModel=_sectionHeaderViewModel;
@property(readonly, nonatomic) UIView *sectionView;
@property(readonly, nonatomic) _Bool hasContent;
- (void)performNearbyPlacesFollowUpRequest;	// IMP=0x00000000000b67c8
- (void)_displayTilesForViewModels:(id)arg1;	// IMP=0x00000000000b66fc
- (void)_updateSection;	// IMP=0x00000000000b647d
@property(readonly, nonatomic, getter=isVertical) _Bool vertical;
- (void)_updateWithListFromFollowUpRequest:(id)arg1;	// IMP=0x00000000000b62a7
- (void)_buildInitialContent;	// IMP=0x00000000000b5f72
- (void)_setupSectionView;	// IMP=0x00000000000b5def
- (unsigned long long)numInlineItems;	// IMP=0x00000000000b5d5c
- (id)initWithMapItem:(id)arg1 configuration:(id)arg2;	// IMP=0x00000000000b5b1e

// Remaining properties
@property(nonatomic) __weak id <MUInfoCardAnalyticsDelegate> analyticsDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property(readonly, nonatomic) UIViewController *sectionViewController;
@property(readonly, nonatomic) NSArray *sectionViews;
@property(retain, nonatomic) MUPlaceCallToActionAppearance *submissionStatus;
@property(readonly) Class superclass;

@end
