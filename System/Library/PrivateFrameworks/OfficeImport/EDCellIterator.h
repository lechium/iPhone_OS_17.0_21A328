//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDRowBlock, EDRowBlocks;

__attribute__((visibility("hidden")))
@interface EDCellIterator : NSObject
{
    EDRowBlocks *mRowBlocks;	// 8 = 0x8
    EDRowBlock *mCurrentRowBlock;	// 16 = 0x10
    struct EDRowInfo *mCurrentRowInfo;	// 24 = 0x18
    unsigned int mCurrentRowInfoIndex;	// 32 = 0x20
    struct EDCellHeader *mCurrentCell;	// 40 = 0x28
    unsigned int mCurrentCellIndex;	// 48 = 0x30
    unsigned int mDesiredRowNumber;	// 52 = 0x34
    unsigned int mDesiredColumnNumber;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000003bc480
- (struct EDCellHeader *)scanToRowNumber:(unsigned int)arg1 columnNumber:(unsigned int)arg2;	// IMP=0x00000000003bc2c9
- (struct EDCellHeader *)adjacentCellRight;	// IMP=0x00000000003bc2b2
- (struct EDCellHeader *)adjacentCellLeft;	// IMP=0x00000000003bc29b
- (void)dealloc;	// IMP=0x00000000003bc215
- (id)initWithWorksheet:(id)arg1;	// IMP=0x00000000003bc150
- (struct EDCellHeader *)adjacentCell:(int)arg1;	// IMP=0x00000000003bc4a8

@end
