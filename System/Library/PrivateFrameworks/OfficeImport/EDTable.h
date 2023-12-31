//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDCollection, EDReference, EDResources, NSString;

__attribute__((visibility("hidden")))
@interface EDTable : NSObject
{
    EDResources *mResources;	// 8 = 0x8
    unsigned long long mStyleIndex;	// 16 = 0x10
    unsigned long long mHeaderRowDxfIndex;	// 24 = 0x18
    unsigned long long mTotalsRowDxfIndex;	// 32 = 0x20
    unsigned long long mDataAreaDxfIndex;	// 40 = 0x28
    unsigned long long mHeaderRowBorderDxfIndex;	// 48 = 0x30
    unsigned long long mTotalsRowBorderDxfIndex;	// 56 = 0x38
    unsigned long long mDataAreaBorderDxfIndex;	// 64 = 0x40
    unsigned long long mTableBorderDxfIndex;	// 72 = 0x48
    NSString *mName;	// 80 = 0x50
    NSString *mDisplayName;	// 88 = 0x58
    EDReference *mTableRange;	// 96 = 0x60
    NSString *mStyleName;	// 104 = 0x68
    unsigned long long mHeaderRowCount;	// 112 = 0x70
    unsigned long long mTotalsRowCount;	// 120 = 0x78
    _Bool mShowFirstColumn;	// 128 = 0x80
    _Bool mShowLastColumn;	// 129 = 0x81
    _Bool mShowRowStripes;	// 130 = 0x82
    _Bool mShowColumnStripes;	// 131 = 0x83
    EDCollection *mTableColumns;	// 136 = 0x88
    EDCollection *mColumnFilters;	// 144 = 0x90
}

+ (id)tableWithResources:(id)arg1;	// IMP=0x00600000003a8bf7
- (void).cxx_destruct;	// IMP=0x00000000003a951e
- (void)setTableRange:(id)arg1;	// IMP=0x0000000000204b57
- (void)setShowColumnStripes:(_Bool)arg1;	// IMP=0x000000000021be61
- (_Bool)showColumnStripes;	// IMP=0x000000000022fc71
- (void)setShowRowStripes:(_Bool)arg1;	// IMP=0x000000000021be55
- (_Bool)showRowStripes;	// IMP=0x0000000000231e10
- (void)setShowLastColumn:(_Bool)arg1;	// IMP=0x000000000021be49
- (_Bool)showLastColumn;	// IMP=0x000000000022fc65
- (void)setShowFirstColumn:(_Bool)arg1;	// IMP=0x000000000021be3d
- (_Bool)showFirstColumn;	// IMP=0x000000000022fc59
- (id)columnFilters;	// IMP=0x000000000022ea1c
- (id)tableColumns;	// IMP=0x0000000000204b9b
- (void)setTotalsRowCount:(unsigned long long)arg1;	// IMP=0x00000000003a9514
- (unsigned long long)totalsRowCount;	// IMP=0x000000000022ee6f
- (void)setHeaderRowCount:(unsigned long long)arg1;	// IMP=0x00000000003a950a
- (unsigned long long)headerRowCount;	// IMP=0x000000000022ee65
- (id)tableRange;	// IMP=0x000000000022ee57
- (void)setStyleName:(id)arg1;	// IMP=0x000000000022ea2d
- (id)styleName;	// IMP=0x00000000003a94fc
- (void)setDisplayName:(id)arg1;	// IMP=0x0000000000204b13
- (id)displayName;	// IMP=0x00000000003a94ee
- (void)setName:(id)arg1;	// IMP=0x0000000000204acf
- (id)name;	// IMP=0x000000000020d1b0
- (void)setTableBorderDxf:(id)arg1;	// IMP=0x00000000003a944a
- (id)tableBorderDxf;	// IMP=0x000000000022f799
- (void)setDataAreaBorderDxf:(id)arg1;	// IMP=0x00000000003a93a6
- (id)dataAreaBorderDxf;	// IMP=0x00000000003a9313
- (void)setTotalsRowBorderDxf:(id)arg1;	// IMP=0x00000000003a926f
- (id)totalsRowBorderDxf;	// IMP=0x00000000003a91dc
- (void)setHeaderRowBorderDxf:(id)arg1;	// IMP=0x00000000003a9138
- (id)headerRowBorderDxf;	// IMP=0x00000000003a90a5
- (void)setDataAreaDxf:(id)arg1;	// IMP=0x00000000003a9001
- (id)dataAreaDxf;	// IMP=0x00000000003a8f6e
- (void)setTotalsRowDxf:(id)arg1;	// IMP=0x00000000003a8eca
- (id)totalsRowDxf;	// IMP=0x00000000003a8e37
- (void)setHeaderRowDxf:(id)arg1;	// IMP=0x00000000003a8d93
- (id)headerRowDxf;	// IMP=0x00000000003a8d00
- (void)setStyle:(id)arg1;	// IMP=0x00000000003a8c5c
- (id)style;	// IMP=0x000000000022f5cb
- (id)initWithResources:(id)arg1;	// IMP=0x00000000002049c1
- (id)description;	// IMP=0x00000000003a95ef
- (void)setTableBorderDxfIndex:(unsigned long long)arg1;	// IMP=0x000000000021be33
- (unsigned long long)tableBorderDxfIndex;	// IMP=0x00000000003a95e5
- (void)setDataAreaBorderDxfIndex:(unsigned long long)arg1;	// IMP=0x00000000003a95db
- (unsigned long long)dataAreaBorderDxfIndex;	// IMP=0x00000000003a95d1
- (void)setTotalsRowBorderDxfIndex:(unsigned long long)arg1;	// IMP=0x000000000023d7b0
- (unsigned long long)totalsRowBorderDxfIndex;	// IMP=0x00000000003a95c7
- (void)setHeaderRowBorderDxfIndex:(unsigned long long)arg1;	// IMP=0x000000000023d7a6
- (unsigned long long)headerRowBorderDxfIndex;	// IMP=0x00000000003a95bd
- (void)setDataAreaDxfIndex:(unsigned long long)arg1;	// IMP=0x000000000023d7ba
- (unsigned long long)dataAreaDxfIndex;	// IMP=0x00000000003a95b3
- (void)setTotalsRowDxfIndex:(unsigned long long)arg1;	// IMP=0x00000000003a95a9
- (unsigned long long)totalsRowDxfIndex;	// IMP=0x00000000003a959f
- (void)setHeaderRowDxfIndex:(unsigned long long)arg1;	// IMP=0x000000000023c240
- (unsigned long long)headerRowDxfIndex;	// IMP=0x00000000003a9595
- (void)setStyleIndex:(unsigned long long)arg1;	// IMP=0x00000000003a958b
- (unsigned long long)styleIndex;	// IMP=0x00000000003a9581

@end

