//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/TabThumbnailCollectionViewPresentationObserving-Protocol.h>

@class TabOverview;

@protocol TabOverviewPresentationObserving <TabThumbnailCollectionViewPresentationObserving>

@optional
- (void)tabOverview:(TabOverview *)arg1 didUpdateScalePercentageForActiveItem:(double)arg2;
- (void)tabOverviewWillShiftScrollPositionForBoundsChange:(TabOverview *)arg1;
- (void)tabOverviewWillEndInteractivePresentation:(TabOverview *)arg1;
- (void)tabOverviewDidUpdateInteractivePresentation:(TabOverview *)arg1;
- (void)tabOverviewWillBeginInteractivePresentation:(TabOverview *)arg1;
@end

