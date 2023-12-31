//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface FROnboardingLayout : NSObject
{
    long long _countOfItems;	// 8 = 0x8
    long long _countOfVisibleItems;	// 16 = 0x10
    double _horizontalCellMargin;	// 24 = 0x18
    double _verticalCellMargin;	// 32 = 0x20
    long long _columnCount;	// 40 = 0x28
    long long _maxVisibleRow;	// 48 = 0x30
    struct CGSize _sizeOfViewport;	// 56 = 0x38
    struct CGSize _cellSize;	// 72 = 0x48
    struct UIEdgeInsets _contentInsets;	// 88 = 0x58
}

+ (double)cardMarginForSize:(struct CGSize)arg1;	// IMP=0x00200000000aa651
@property(nonatomic) long long maxVisibleRow; // @synthesize maxVisibleRow=_maxVisibleRow;
@property(nonatomic) long long columnCount; // @synthesize columnCount=_columnCount;
@property(nonatomic) struct CGSize cellSize; // @synthesize cellSize=_cellSize;
@property(nonatomic) double verticalCellMargin; // @synthesize verticalCellMargin=_verticalCellMargin;
@property(nonatomic) double horizontalCellMargin; // @synthesize horizontalCellMargin=_horizontalCellMargin;
@property(nonatomic) struct CGSize sizeOfViewport; // @synthesize sizeOfViewport=_sizeOfViewport;
@property(nonatomic) long long countOfVisibleItems; // @synthesize countOfVisibleItems=_countOfVisibleItems;
@property(nonatomic) long long countOfItems; // @synthesize countOfItems=_countOfItems;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (long long)calculatePotentialMaxVisibleRowThatWouldBeFullyPopulated;	// IMP=0x00100000000aabc0
- (struct CGPoint)centerForRow:(long long)arg1 column:(long long)arg2;	// IMP=0x00100000000aaa90
- (struct CGRect)boundsForIndex:(long long)arg1;	// IMP=0x00100000000aaa3d
- (struct CGPoint)centerForIndex:(long long)arg1;	// IMP=0x00100000000aaa09
- (CDStruct_912cb5d2)positionOfIndex:(long long)arg1;	// IMP=0x00100000000aa9e1
@property(readonly, nonatomic) double contentHeight;
- (double)adjustedWidthOfViewPort;	// IMP=0x00100000000aa8d3
- (double)contentSideMargin;	// IMP=0x00100000000aa849
@property(readonly, nonatomic) long long rowCount;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000aa6ee

@end

