//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CHDDefaultTextProperties, CHDLegend, CHDPlotArea, CHDTitle, CHDView3D, EDSheet, EDWorkbook, NSMutableArray, NSString, OADGraphicProperties, OADThemeOverrides;

__attribute__((visibility("hidden")))
@interface CHDChart
{
    EDSheet *mSheet;	// 48 = 0x30
    int mStyleId;	// 56 = 0x38
    _Bool mAutoTitleDeleted;	// 60 = 0x3c
    _Bool mPlotVisibleCellsOnly;	// 61 = 0x3d
    _Bool mMSGraph;	// 62 = 0x3e
    _Bool mHasSharedXValues;	// 63 = 0x3f
    _Bool mDirectionChanged;	// 64 = 0x40
    _Bool mHasVisibleSeriesNames;	// 65 = 0x41
    int mDisplayBlankCellsAs;	// 68 = 0x44
    CHDPlotArea *mPlotArea;	// 72 = 0x48
    CHDView3D *mView3D;	// 80 = 0x50
    CHDTitle *mTitle;	// 88 = 0x58
    CHDLegend *mLegend;	// 96 = 0x60
    EDWorkbook *mExternalData;	// 104 = 0x68
    OADGraphicProperties *mChartAreaGraphicProperties;	// 112 = 0x70
    OADGraphicProperties *mBackWallGraphicProperties;	// 120 = 0x78
    OADGraphicProperties *mSideWallGraphicProperties;	// 128 = 0x80
    OADGraphicProperties *mFloorGraphicProperties;	// 136 = 0x88
    CHDDefaultTextProperties *mDefaultTextProperties;	// 144 = 0x90
    int mChartDirection;	// 152 = 0x98
    struct CGRect mLogicalBounds;	// 160 = 0xa0
    NSMutableArray *mDrawables;	// 192 = 0xc0
    OADThemeOverrides *mThemeOverrides;	// 200 = 0xc8
}

+ (id)binaryEffects:(_Bool)arg1;	// IMP=0x001000000016f657
- (void).cxx_destruct;	// IMP=0x000000000038c2ca
@property(readonly, copy) NSString *description;
- (void)setVisibleSeriesNames:(_Bool)arg1;	// IMP=0x000000000038c27c
- (_Bool)hasVisibleSeriesNames;	// IMP=0x000000000038c26c
- (void)setDirectionChanged:(_Bool)arg1;	// IMP=0x00000000001f0972
- (_Bool)isDirectionChanged;	// IMP=0x0000000000228b6a
- (void)setHasSharedXValues:(_Bool)arg1;	// IMP=0x000000000038c25c
- (_Bool)hasSharedXValues;	// IMP=0x000000000038c24c
- (void)setMSGraph:(_Bool)arg1;	// IMP=0x000000000038c23c
- (_Bool)isMSGraph;	// IMP=0x0000000000180887
- (unsigned long long)categoryCount;	// IMP=0x0000000000228b7a
- (unsigned long long)seriesCount;	// IMP=0x00000000002113d3
- (_Bool)isBinary;	// IMP=0x000000000016de1d
- (_Bool)isScatterOrBubble;	// IMP=0x000000000038c180
- (_Bool)supportsMarkers;	// IMP=0x000000000038c0c4
- (_Bool)isArea;	// IMP=0x000000000038c062
- (_Bool)isPie;	// IMP=0x0000000000211371
- (_Bool)is3D;	// IMP=0x000000000020a910
- (id)mainType;	// IMP=0x00000000001865be
- (id)styleMatrix;	// IMP=0x00000000002096db
- (int)defaultLabelPosition;	// IMP=0x000000000038bff1
- (id)defaultFontWithResources:(id)arg1;	// IMP=0x000000000038bf65
- (id)defaultContentFormat;	// IMP=0x000000000038bee8
- (unsigned long long)defaultFontIndex;	// IMP=0x00000000001f80c4
- (id)defaultSeriesTitleFont;	// IMP=0x000000000038bd65
- (id)defaultDataLabelFont;	// IMP=0x000000000038bbe5
- (id)defaultTextFont;	// IMP=0x000000000038baa9
- (id)defaultThemeFont;	// IMP=0x000000000038b6c7
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1;	// IMP=0x000000000038b555
- (void)setParentTextListStyle:(id)arg1;	// IMP=0x000000000018d2be
- (void)removeChild:(id)arg1;	// IMP=0x000000000038b4c3
- (void)replaceChild:(id)arg1 with:(id)arg2;	// IMP=0x000000000038b3ec
- (void)setThemeOverrides:(id)arg1;	// IMP=0x000000000038b3d8
- (id)themeOverrides;	// IMP=0x000000000038b3c3
- (id)children;	// IMP=0x000000000038b3ae
- (id)childAtIndex:(unsigned long long)arg1;	// IMP=0x000000000038b391
- (void)addChildren:(id)arg1;	// IMP=0x000000000038b2af
- (void)addChild:(id)arg1;	// IMP=0x000000000018c98f
- (unsigned long long)childCount;	// IMP=0x000000000038b292
- (void)setLogicalBounds:(struct CGRect)arg1;	// IMP=0x000000000016e3b9
- (struct CGRect)logicalBounds;	// IMP=0x000000000038b272
- (void)setDirection:(int)arg1;	// IMP=0x00000000001814ef
- (int)direction;	// IMP=0x000000000017f9d4
- (void)setDefaultTextProperties:(id)arg1;	// IMP=0x000000000038b228
- (id)defaultTextProperties;	// IMP=0x000000000017319c
- (void)setFloorGraphicProperties:(id)arg1;	// IMP=0x00000000001799dd
- (id)floorGraphicProperties;	// IMP=0x000000000038b213
- (void)setSideWallGraphicProperties:(id)arg1;	// IMP=0x0000000000178f6f
- (id)sideWallGraphicProperties;	// IMP=0x000000000038b1fe
- (void)setBackWallGraphicProperties:(id)arg1;	// IMP=0x0000000000178fb9
- (id)backWallGraphicProperties;	// IMP=0x000000000038b1e9
- (void)setChartAreaGraphicProperties:(id)arg1;	// IMP=0x000000000017032a
- (id)chartAreaGraphicProperties;	// IMP=0x00000000001871d1
- (void)setExternalData:(id)arg1;	// IMP=0x0000000000212391
- (id)externalData;	// IMP=0x000000000038b1d4
- (void)setLegend:(id)arg1;	// IMP=0x00000000001e2278
- (id)legend;	// IMP=0x000000000017e438
- (void)setTitle:(id)arg1;	// IMP=0x000000000017fce9
- (id)title;	// IMP=0x0000000000186a75
- (void)setView3D:(id)arg1;	// IMP=0x000000000017b425
- (id)view3D;	// IMP=0x00000000002272af
- (void)setPlotArea:(id)arg1;	// IMP=0x000000000017fc24
- (id)plotArea;	// IMP=0x0000000000174f50
- (void)setDisplayBlankAs:(int)arg1;	// IMP=0x00000000001703af
- (int)displayBlankAs;	// IMP=0x000000000038b1c4
- (void)setPlotVisibleCellsOnly:(_Bool)arg1;	// IMP=0x0000000000170382
- (_Bool)isPlotVisibleCellsOnly;	// IMP=0x000000000038b1b4
- (void)setAutoTitleDeleted:(_Bool)arg1;	// IMP=0x000000000017fd33
- (_Bool)isAutoTitleDeleted;	// IMP=0x000000000038b1a4
- (void)setStyleId:(int)arg1;	// IMP=0x000000000016dcb4
- (int)styleId;	// IMP=0x000000000020942d
- (id)processors;	// IMP=0x000000000017d57d
- (id)workbook;	// IMP=0x00000000002097b2
- (void)setSheet:(id)arg1;	// IMP=0x000000000016dca0
- (id)sheet;	// IMP=0x000000000038b18f
- (id)init;	// IMP=0x000000000016b9ff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

