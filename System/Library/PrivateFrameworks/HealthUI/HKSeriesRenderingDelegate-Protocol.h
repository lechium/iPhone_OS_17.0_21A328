//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKGraphSeries;
@protocol HKGraphSeriesAxisAnnotation;

@protocol HKSeriesRenderingDelegate
- (_Bool)measuringStartupTime;
- (_Bool)seriesDrawingAsTopOverlay:(HKGraphSeries *)arg1;
- (id <HKGraphSeriesAxisAnnotation>)axisAnnotationDelegateForSeries:(HKGraphSeries *)arg1;
- (struct CGRect)screenRectForSeries:(HKGraphSeries *)arg1;
- (struct CGPoint)seriesContentOffset;
- (_Bool)seriesDrawingDuringTiling;
- (_Bool)seriesDrawingDuringAutoscale;
- (_Bool)seriesDrawingDuringScrolling;
- (struct UIEdgeInsets)virtualMarginInsets;
@end

