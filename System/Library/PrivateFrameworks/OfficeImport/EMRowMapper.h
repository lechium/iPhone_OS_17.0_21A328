//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EDRowBlock;

__attribute__((visibility("hidden")))
@interface EMRowMapper
{
    EDRowBlock *mRowBlock;	// 40 = 0x28
    struct EDRowInfo *mRowInfo;	// 48 = 0x30
    double *columnGrid;	// 56 = 0x38
    unsigned long long columnCount;	// 64 = 0x40
}

+ (void)mapEmptyRowAt:(id)arg1 colspan:(unsigned long long)arg2 height:(double)arg3;	// IMP=0x0060000000134ab3
- (void).cxx_destruct;	// IMP=0x000000000046cb3e
- (void)mapAt:(id)arg1 withState:(id)arg2;	// IMP=0x0000000000131d8d
- (void)mapEmptyCellsAt:(id)arg1 withState:(id)arg2 firstColumn:(unsigned long long)arg3 lastColumn:(unsigned long long)arg4;	// IMP=0x0000000000134236
- (_Bool)isColumnHidden:(unsigned long long)arg1;	// IMP=0x00000000001324ba
- (id)initWithEDRowBlock:(id)arg1 rowInfo:(struct EDRowInfo *)arg2 parent:(id)arg3;	// IMP=0x0000000000131c2b
- (void)insertEmptyCellAt:(id)arg1 withColSpan:(unsigned long long)arg2 height:(double)arg3;	// IMP=0x0000000000134874
- (_Bool)isMergedCell:(struct EDCellHeader *)arg1;	// IMP=0x000000000046cb51
- (struct EDCellHeader *)cellWithColumnNumber:(unsigned long long)arg1;	// IMP=0x0000000000134597

@end

