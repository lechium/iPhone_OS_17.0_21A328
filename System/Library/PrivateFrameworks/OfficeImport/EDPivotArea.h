//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDCollection, EDReference;

__attribute__((visibility("hidden")))
@interface EDPivotArea : NSObject
{
    _Bool mGrandCol;	// 8 = 0x8
    _Bool mGrandRow;	// 9 = 0x9
    _Bool mOutline;	// 10 = 0xa
    int mType;	// 12 = 0xc
    EDCollection *mReferences;	// 16 = 0x10
    EDReference *mOffset;	// 24 = 0x18
}

+ (id)pivotArea;	// IMP=0x00600000003a58e7
- (void).cxx_destruct;	// IMP=0x00000000003a59e7
- (id)description;	// IMP=0x00000000003a59a9
- (id)references;	// IMP=0x00000000003a599b
- (void)setOffset:(id)arg1;	// IMP=0x00000000003a5957
- (id)offset;	// IMP=0x00000000003a5949
- (void)setType:(int)arg1;	// IMP=0x00000000003a5940
- (int)type;	// IMP=0x00000000003a5937
- (void)setOutline:(_Bool)arg1;	// IMP=0x00000000003a592e
- (_Bool)outline;	// IMP=0x00000000003a5925
- (void)setGrandCol:(_Bool)arg1;	// IMP=0x00000000003a591c
- (_Bool)grandCol;	// IMP=0x00000000003a5913
- (void)setGrandRow:(_Bool)arg1;	// IMP=0x00000000003a590a
- (_Bool)grandRow;	// IMP=0x00000000003a5901
- (id)init;	// IMP=0x00000000003a5862

@end

