//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MUPlaceSectionController.h"

@class MUPlaceCallToActionAppearance, MUPlaceSectionFooterViewModel, MUPlaceSectionHeaderViewModel, MUPlaceSectionView, MUTextPairVerticalCardView, NSArray, NSString, UIView, UIViewController;
@protocol MUInfoCardAnalyticsDelegate;

__attribute__((visibility("hidden")))
@interface MUPlaceVenueInfoSectionController : MUPlaceSectionController
{
    MUTextPairVerticalCardView *_contentView;	// 8 = 0x8
    MUPlaceSectionView *_sectionView;	// 16 = 0x10
    MUPlaceSectionHeaderViewModel *_sectionHeaderViewModel;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000f891a
- (_Bool)isImpressionable;	// IMP=0x00000000000f8912
- (int)analyticsModuleType;	// IMP=0x00000000000f8907
@property(readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel; // @synthesize sectionHeaderViewModel=_sectionHeaderViewModel;
@property(readonly, nonatomic) UIView *sectionView;
- (void)_setupSectionView;	// IMP=0x00000000000f8646
- (id)initWithMapItem:(id)arg1;	// IMP=0x00000000000f852c

// Remaining properties
@property(nonatomic, getter=isActive) _Bool active;
@property(nonatomic) __weak id <MUInfoCardAnalyticsDelegate> analyticsDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool hasContent;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property(readonly, nonatomic) UIViewController *sectionViewController;
@property(readonly, nonatomic) NSArray *sectionViews;
@property(retain, nonatomic) MUPlaceCallToActionAppearance *submissionStatus;
@property(readonly) Class superclass;

@end

