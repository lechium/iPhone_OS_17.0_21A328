//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDCollection;

__attribute__((visibility("hidden")))
@interface EDPivotField : NSObject
{
    int mAxis;	// 8 = 0x8
    _Bool mCompact;	// 12 = 0xc
    _Bool mDataField;	// 13 = 0xd
    _Bool mShowDefaultSubTotal;	// 14 = 0xe
    _Bool mInsertBlankRow;	// 15 = 0xf
    _Bool mOutlineItems;	// 16 = 0x10
    _Bool mShowAllItems;	// 17 = 0x11
    _Bool mSubtotalTop;	// 18 = 0x12
    unsigned long long mNumFmtId;	// 24 = 0x18
    EDCollection *mPivotFieldItems;	// 32 = 0x20
}

+ (id)pivotField;	// IMP=0x006000000023474e
- (void).cxx_destruct;	// IMP=0x00000000003a568d
- (id)description;	// IMP=0x00000000003a564f
- (id)pivotFieldItems;	// IMP=0x00000000002348eb
- (void)setAxis:(int)arg1;	// IMP=0x00000000002348a3
- (int)axis;	// IMP=0x00000000003a5646
- (void)setNumFmtId:(unsigned long long)arg1;	// IMP=0x00000000002347f2
- (unsigned long long)numFmtId;	// IMP=0x00000000003a563c
- (void)setSubtotalTop:(_Bool)arg1;	// IMP=0x00000000002348e2
- (_Bool)subtotalTop;	// IMP=0x00000000003a5633
- (void)setShowAllItems:(_Bool)arg1;	// IMP=0x00000000002348d9
- (_Bool)showAllItems;	// IMP=0x00000000003a562a
- (void)setOutlineItems:(_Bool)arg1;	// IMP=0x00000000002348d0
- (_Bool)outlineItems;	// IMP=0x00000000003a5621
- (void)setInsertBlankRow:(_Bool)arg1;	// IMP=0x00000000002348c7
- (_Bool)insertBlankRow;	// IMP=0x00000000003a5618
- (void)setShowDefaultSubTotal:(_Bool)arg1;	// IMP=0x00000000002348be
- (_Bool)showDefaultSubTotal;	// IMP=0x00000000003a560f
- (void)setDataField:(_Bool)arg1;	// IMP=0x00000000002348b5
- (_Bool)dataField;	// IMP=0x00000000003a5606
- (void)setCompact:(_Bool)arg1;	// IMP=0x00000000002348ac
- (_Bool)compact;	// IMP=0x00000000003a55fd
- (id)init;	// IMP=0x0000000000234768

@end
