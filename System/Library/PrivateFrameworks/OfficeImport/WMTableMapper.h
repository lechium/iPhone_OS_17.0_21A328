//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class WDTable, WMBordersProperty, WMTableColumnInfo, WMTableStyle;

__attribute__((visibility("hidden")))
@interface WMTableMapper
{
    WDTable *mWdTable;	// 40 = 0x28
    WMBordersProperty *mInsideBorders;	// 48 = 0x30
    WMTableStyle *mStyle;	// 56 = 0x38
    WMTableColumnInfo *mColumnInfo;	// 64 = 0x40
}

+ (_Bool)isTableDeleted:(id)arg1;	// IMP=0x00600000000fb4d2
- (void).cxx_destruct;	// IMP=0x000000000045b18d
- (void)mapAt:(id)arg1 withState:(id)arg2;	// IMP=0x00000000000fafca
- (void)setInsideBorders:(id)arg1;	// IMP=0x000000000045b179
- (id)columnInfo;	// IMP=0x00000000000fc8f6
- (id)insideBorders;	// IMP=0x00000000000fd86d
- (id)initWithWDTable:(id)arg1 parent:(id)arg2;	// IMP=0x00000000000f9814
- (id)copyStopArrayForRow:(unsigned long long)arg1;	// IMP=0x00000000000fa9b5
- (id)copyColumnInfo;	// IMP=0x00000000000fa894

@end

