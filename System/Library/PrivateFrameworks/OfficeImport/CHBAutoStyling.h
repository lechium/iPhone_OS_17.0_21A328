//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface CHBAutoStyling
{
}

- (void)resolveMarker:(id)arg1 withSeriesGraphicProperties:(id)arg2 forSeriesIndex:(unsigned long long)arg3 clientGraphicPropertyDefaults:(CDUnknownBlockType)arg4;	// IMP=0x0000000000388fc2
- (void)resolveGraphicPropertiesOfErrorBar:(id)arg1 forSeriesIndex:(unsigned long long)arg2;	// IMP=0x0000000000388f18
- (void)resolveGraphicPropertiesOfTrendline:(id)arg1 forSeriesIndex:(unsigned long long)arg2;	// IMP=0x000000000021ad54
- (void)resolveGraphicPropertiesOfSeries:(id)arg1 forSeriesIndex:(unsigned long long)arg2 isLine:(_Bool)arg3;	// IMP=0x0000000000388e05
- (void)resolveGraphicPropertiesOfSeries:(id)arg1 forSeriesIndex:(unsigned long long)arg2;	// IMP=0x0000000000388df0
- (id)autoTextFill;	// IMP=0x0000000000388d8c
- (void)resolveLegendGraphicProperties:(id)arg1;	// IMP=0x00000000001e2127
- (void)resolveMinorGridLinesGraphicProperties:(id)arg1;	// IMP=0x0000000000178b7f
- (void)resolveMajorGridLinesGraphicProperties:(id)arg1;	// IMP=0x0000000000178c67
- (void)resolveAxisGraphicProperties:(id)arg1;	// IMP=0x00000000001788b9
- (void)resolvePlotAreaGraphicProperties:(id)arg1;	// IMP=0x0000000000175fa3
- (void)resolveFloorGraphicProperties:(id)arg1;	// IMP=0x00000000001798fa
- (void)resolveWallGraphicProperties:(id)arg1;	// IMP=0x0000000000178e91
- (void)resolveChartAreaGraphicProperties:(id)arg1;	// IMP=0x000000000016f776
- (id)autoStrokeForSeriesIndex:(unsigned long long)arg1;	// IMP=0x000000000018bc3c
- (id)autoSeriesFill:(unsigned long long)arg1;	// IMP=0x000000000017e3dc
- (id)autoSeriesBorderStroke;	// IMP=0x000000000017e421
- (id)autoFill;	// IMP=0x000000000016f852
- (id)autoStroke;	// IMP=0x000000000016f93c
- (id)strokeWithColorIndex:(int)arg1;	// IMP=0x000000000016f953
- (id)fillWithColorIndex:(unsigned long long)arg1;	// IMP=0x000000000016f869
- (void)resolvedGraphicProperties:(id)arg1 autoFill:(id)arg2 autoStroke:(id)arg3 autoShadow:(_Bool)arg4 nullFill:(id)arg5 nullStroke:(id)arg6 nullShadow:(_Bool)arg7;	// IMP=0x000000000016f9ef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

