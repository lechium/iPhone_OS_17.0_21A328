//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EDReference : NSObject
{
    struct EDAreaReference mAreaReference;	// 8 = 0x8
}

+ (id)referenceWithReference:(id)arg1;	// IMP=0x00100000003a5ecc
+ (id)referenceWithAreaReference:(struct EDAreaReference *)arg1;	// IMP=0x00100000001c1d88
+ (id)referenceWithFirstRow:(int)arg1 lastRow:(int)arg2 firstColumn:(int)arg3 lastColumn:(int)arg4;	// IMP=0x0010000000125640
+ (id)reference;	// IMP=0x00100000003a5eb2
- (id)description;	// IMP=0x00000000003a5f8e
- (_Bool)fullyAdjacentToReference:(id)arg1;	// IMP=0x000000000014ea80
- (unsigned long long)countOfCellsBeingReferenced;	// IMP=0x000000000018d044
- (_Bool)isValidAreaReference;	// IMP=0x000000000013f2c6
- (_Bool)isValidCellReference;	// IMP=0x000000000018d0b9
- (_Bool)isColumnReference;	// IMP=0x00000000003a5f74
- (_Bool)isRowReference;	// IMP=0x00000000003a5f5a
- (_Bool)isCellReference;	// IMP=0x00000000003a5f3f
- (_Bool)containsRow:(int)arg1 column:(int)arg2;	// IMP=0x000000000013f7b2
- (int)lastColumn;	// IMP=0x00000000001300b9
- (int)lastRow;	// IMP=0x000000000013f7a9
- (int)firstColumn;	// IMP=0x0000000000125965
- (int)firstRow;	// IMP=0x000000000013f7a0
- (struct EDAreaReference)areaReference;	// IMP=0x00000000003a5f31
- (unsigned long long)hash;	// IMP=0x00000000002369bf
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002380e7
- (_Bool)isEqualToReference:(id)arg1;	// IMP=0x000000000014eb3b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002369e1
- (id)initWithReference:(id)arg1;	// IMP=0x00000000003a5e2a
- (id)initWithAreaReference:(struct EDAreaReference *)arg1;	// IMP=0x00000000001c1dbf
- (id)initWithFirstRow:(int)arg1 lastRow:(int)arg2 firstColumn:(int)arg3 lastColumn:(int)arg4;	// IMP=0x0000000000125690
- (id)init;	// IMP=0x000000000014c2e2
- (void)unionWithRow:(int)arg1 column:(int)arg2;	// IMP=0x000000000014c31f
- (void)unionWithFirstRow:(int)arg1 lastRow:(int)arg2 firstColumn:(int)arg3 lastColumn:(int)arg4;	// IMP=0x000000000014c339
- (void)unionWithReference:(id)arg1;	// IMP=0x00000000003a3a24
- (void)setLastColumn:(int)arg1;	// IMP=0x00000000003a3a10
- (void)setLastRow:(int)arg1;	// IMP=0x00000000003a39fc
- (void)setFirstColumn:(int)arg1;	// IMP=0x00000000003a39e8
- (void)setFirstRow:(int)arg1;	// IMP=0x00000000003a39d5

@end

