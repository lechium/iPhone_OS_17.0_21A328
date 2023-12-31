//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MUPlaceSectionController.h"

@class MUPlaceCallToActionAppearance, MUPlaceRatingReviewTitleBuilder, MUPlaceReviewAvatarGenerator, MUPlaceSectionFooterViewModel, MUPlaceSectionHeaderViewModel, MUPlaceSectionView, MUScrollableStackView, NSArray, NSString, UIView, UIViewController;
@protocol MUInfoCardAnalyticsDelegate, MURatingsAndReviewsSectionControllerDelegate;

__attribute__((visibility("hidden")))
@interface MURatingsAndReviewsSectionController : MUPlaceSectionController
{
    MUScrollableStackView *_contentStackView;	// 8 = 0x8
    MUPlaceSectionView *_sectionView;	// 16 = 0x10
    MUPlaceReviewAvatarGenerator *_avatarGenerator;	// 24 = 0x18
    MUPlaceRatingReviewTitleBuilder *_titleBuilder;	// 32 = 0x20
    MUPlaceSectionHeaderViewModel *_sectionHeaderViewModel;	// 40 = 0x28
    id <MURatingsAndReviewsSectionControllerDelegate> _actionDelegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000005f416
@property(nonatomic) __weak id <MURatingsAndReviewsSectionControllerDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (_Bool)isImpressionable;	// IMP=0x000000000005f3e1
- (int)analyticsModuleType;	// IMP=0x000000000005f3d6
- (id)infoCardChildPossibleActions;	// IMP=0x000000000005f26a
- (void)pullQuoteViewDidTapMore:(id)arg1;	// IMP=0x000000000005f196
- (void)_sectionHeaderAccessoryTapped;	// IMP=0x000000000005f0bb
@property(readonly, nonatomic) UIView *sectionView;
@property(readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel; // @synthesize sectionHeaderViewModel=_sectionHeaderViewModel;
- (void)_addHorizontalTileToContentStackView:(id)arg1 items:(id)arg2;	// IMP=0x000000000005eed9
- (void)_addPlaceCollectionPullQuotesIfNeeded:(id)arg1;	// IMP=0x000000000005eade
- (void)_addRatingSnippets:(id)arg1 withCellItems:(id)arg2;	// IMP=0x000000000005e60e
- (void)_addUserReviewCategoryTilesIfNeeded:(id)arg1;	// IMP=0x000000000005e266
- (void)_addAppleRatingsCategoryTileIfNeeded:(id)arg1;	// IMP=0x000000000005ded0
- (void)_setupRatingRows;	// IMP=0x000000000005d931
- (id)initWithMapItem:(id)arg1;	// IMP=0x000000000005d817

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

