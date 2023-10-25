//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MUPlaceSectionController.h"

@class MUPlaceCallToActionAppearance, MUPlaceSectionFooterViewModel, MUPlaceSectionHeaderViewModel, MUTransitDeparturesDataSource, MUTransitDeparturesSectionViewProvider, NSArray, NSString, UIView, UIViewController;
@protocol MUInfoCardAnalyticsDelegate, MUTransitDeparturesSectionControllerDelegate;

__attribute__((visibility("hidden")))
@interface MUTransitDeparturesSectionController : MUPlaceSectionController
{
    MUTransitDeparturesSectionViewProvider *_viewProvider;	// 8 = 0x8
    MUTransitDeparturesDataSource *_dataSource;	// 16 = 0x10
    _Bool _active;	// 24 = 0x18
    id <MUTransitDeparturesSectionControllerDelegate> _departuresDelegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000f84ec
@property(nonatomic) __weak id <MUTransitDeparturesSectionControllerDelegate> departuresDelegate; // @synthesize departuresDelegate=_departuresDelegate;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (void)transitDeparturesDataSourceWantsReload:(id)arg1;	// IMP=0x00000000000f8415
- (id)traitsForDeparturesDataSource:(id)arg1;	// IMP=0x00000000000f83b6
- (void)sectionViewProvider:(id)arg1 didSelectIncidents:(id)arg2;	// IMP=0x00000000000f834b
- (void)sectionViewProvider:(id)arg1 didSelect:(id)arg2 using:(id)arg3;	// IMP=0x00000000000f82b0
- (void)sectionViewProvider:(id)arg1 didSelectDepartureSequence:(id)arg2 using:(id)arg3;	// IMP=0x00000000000f8222
- (void)sectionViewProvider:(id)arg1 didSelectConnectionInfo:(id)arg2;	// IMP=0x00000000000f81b7
- (void)sectionViewProvider:(id)arg1 didSelectAttribution:(id)arg2;	// IMP=0x00000000000f8132
- (_Bool)sectionViewProvider:(id)arg1 canSelect:(id)arg2 using:(id)arg3;	// IMP=0x00000000000f809f
- (_Bool)isImpressionable;	// IMP=0x00000000000f8097
- (int)analyticsModuleType;	// IMP=0x00000000000f808c
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 target:(int)arg2 eventValue:(id)arg3 moduleMetadata:(id)arg4 feedbackDelegateSelector:(int)arg5 actionRichProviderId:(id)arg6;	// IMP=0x00000000000f7fd2
- (void)infoCardTransitAnalyticsDidSelectionAction:(int)arg1 resultIndex:(long long)arg2 targetID:(unsigned long long)arg3 transitSystem:(id)arg4 transitDepartureSequence:(id)arg5 transitCardCategory:(int)arg6 transitIncident:(id)arg7 feedbackDelegateSelector:(int)arg8;	// IMP=0x00000000000f7f04
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 target:(int)arg2 eventValue:(id)arg3 actionURL:(id)arg4 photoID:(id)arg5 moduleMetadata:(id)arg6 feedbackDelegateSelector:(int)arg7 actionRichProviderId:(id)arg8;	// IMP=0x00000000000f7e03
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 target:(int)arg2 eventValue:(id)arg3 feedbackDelegateSelector:(int)arg4 actionRichProviderId:(id)arg5;	// IMP=0x00000000000f7d62
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 eventValue:(id)arg2 feedbackDelegateSelector:(int)arg3 actionRichProviderId:(id)arg4;	// IMP=0x00000000000f7cd2
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 eventValue:(id)arg2 feedbackDelegateSelector:(int)arg3;	// IMP=0x00000000000f7c58
- (id)draggableContent;	// IMP=0x00000000000f7c50
@property(readonly, nonatomic) NSArray *sectionViews;
- (void)_setupSections;	// IMP=0x00000000000f7b72
- (id)initWithMapItem:(id)arg1 allowTransitLineSelection:(_Bool)arg2 departuresDelegate:(id)arg3;	// IMP=0x00000000000f7aef

// Remaining properties
@property(nonatomic) __weak id <MUInfoCardAnalyticsDelegate> analyticsDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasContent;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property(readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property(readonly, nonatomic) UIView *sectionView;
@property(readonly, nonatomic) UIViewController *sectionViewController;
@property(retain, nonatomic) MUPlaceCallToActionAppearance *submissionStatus;
@property(readonly) Class superclass;

@end
