//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EDTable;

__attribute__((visibility("hidden")))
@interface EPTableStyleFlattener
{
    EDTable *mTable;	// 128 = 0x80
    unsigned long long mHeaderRowCount;	// 136 = 0x88
    unsigned long long mTotalsRowCount;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00000000003ad349
- (void)clearCache;	// IMP=0x0000000000231e9a
- (void)cacheSizes:(id)arg1 inObject:(id)arg2;	// IMP=0x000000000022f82c
- (int)borderFlagsForStyleType:(int)arg1 row:(int)arg2 column:(int)arg3;	// IMP=0x000000000022ffd6
- (id)keysInTheOrderTheyShouldBeApplied;	// IMP=0x00000000001c3f59
- (id)newExtractedCellStyleElements:(id)arg1 parentScope:(id)arg2 row:(int)arg3 column:(int)arg4;	// IMP=0x00000000003ace4e
- (id)newExtractedRowStyleElements:(id)arg1 parentScope:(id)arg2 row:(int)arg3;	// IMP=0x00000000003acc27
- (id)newExtractedGlobalStyleElements:(id)arg1;	// IMP=0x00000000003acb0f
- (id)styleFromObject:(id)arg1;	// IMP=0x000000000022f423
- (id)collectionFromWorksheet:(id)arg1;	// IMP=0x00000000001c43ae
- (_Bool)isObjectSupported:(id)arg1;	// IMP=0x00000000001c0050
- (int)stripeOffset:(int)arg1 row:(_Bool)arg2;	// IMP=0x0000000000231e1c

@end

