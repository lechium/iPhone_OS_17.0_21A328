//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsUI/MUInfoCardSectionAnalyticsDelegate-Protocol.h>
#import <MapsUI/NSObject-Protocol.h>

@class MUPlaceCallToActionAppearance, MUPlaceSectionFooterViewModel, MUPlaceSectionHeaderViewModel, NSArray, UIView, UIViewController;
@protocol MUInfoCardAnalyticsDelegate;

@protocol MUPlaceSectionControlling <NSObject, MUInfoCardSectionAnalyticsDelegate>
@property(nonatomic) __weak id <MUInfoCardAnalyticsDelegate> analyticsDelegate;
@property(nonatomic, getter=isActive) _Bool active;
@property(retain, nonatomic) MUPlaceCallToActionAppearance *submissionStatus;
@property(readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property(readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property(readonly, nonatomic) NSArray *sectionViews;
@property(readonly, nonatomic) UIView *sectionView;
@property(readonly, nonatomic) _Bool hasContent;
- (NSArray *)draggableContent;

@optional
@property(readonly, nonatomic) UIViewController *sectionViewController;
- (void)updateForAttributionChange;
- (void)updateForActionRowInfoChange;
@end
