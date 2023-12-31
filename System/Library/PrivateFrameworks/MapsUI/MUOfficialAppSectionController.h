//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MUPlaceSectionController.h"

@class GEOAppleMediaServicesResult, MUPlaceAppLockupView, MUPlaceCallToActionAppearance, MUPlaceSectionFooterViewModel, MUPlaceSectionHeaderViewModel, MUPlaceSectionView, MUTimeExpirableLRUCache, NSArray, NSString, UIView, UIViewController;
@protocol MUInfoCardAnalyticsDelegate;

__attribute__((visibility("hidden")))
@interface MUOfficialAppSectionController : MUPlaceSectionController
{
    MUPlaceAppLockupView *_officialAppView;	// 8 = 0x8
    MUPlaceSectionView *_sectionView;	// 16 = 0x10
    GEOAppleMediaServicesResult *_appStoreApp;	// 24 = 0x18
    MUTimeExpirableLRUCache *_cachedMediaResults;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000a08f7
- (_Bool)isImpressionable;	// IMP=0x00000000000a08ef
- (int)analyticsModuleType;	// IMP=0x00000000000a08e4
- (id)infoCardChildPossibleActions;	// IMP=0x00000000000a08bd
- (id)_sectionHeaderText;	// IMP=0x00000000000a0877
- (void)appLockupViewDidSelectPunchOutButton:(id)arg1;	// IMP=0x00000000000a0717
@property(readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property(readonly, nonatomic) _Bool hasContent;
@property(readonly, nonatomic) UIView *sectionView;
- (void)_updateViewWithMediaServicesResult:(id)arg1;	// IMP=0x00000000000a0617
- (void)_hydrateViewWithApp;	// IMP=0x00000000000a0070
- (void)_setupLockupView;	// IMP=0x000000000009ff39
- (id)initWithMapItem:(id)arg1 usingCachedMediaResults:(id)arg2;	// IMP=0x000000000009fde7

// Remaining properties
@property(nonatomic, getter=isActive) _Bool active;
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

