//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OADTable, OADTableRow;

__attribute__((visibility("hidden")))
@interface PMTableRowMapper
{
    OADTable *mTable;	// 40 = 0x28
    OADTableRow *mRow;	// 48 = 0x30
    unsigned long long mRowIndex;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000046facd
- (void)mapAt:(id)arg1 withState:(id)arg2;	// IMP=0x00000000001fab23
- (unsigned long long)cellCount;	// IMP=0x00000000001fbd24
- (float)height;	// IMP=0x00000000001fb46e
- (id)initWithOadTable:(id)arg1 rowIndex:(unsigned long long)arg2 parent:(id)arg3;	// IMP=0x00000000001faa24

@end

