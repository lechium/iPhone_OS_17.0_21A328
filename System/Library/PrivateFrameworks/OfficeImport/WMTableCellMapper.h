//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class WDTableCell;

__attribute__((visibility("hidden")))
@interface WMTableCellMapper
{
    WDTableCell *mWdTableCell;	// 40 = 0x28
    unsigned int mColSpan;	// 48 = 0x30
    double mHeight;	// 56 = 0x38
    double mWidth;	// 64 = 0x40
    double mLeftPadding;	// 72 = 0x48
    double mRightPadding;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000045b098
- (void)mapAt:(id)arg1 withState:(id)arg2;	// IMP=0x00000000000fc9c6
- (unsigned int)colSpan;	// IMP=0x00000000000fd8ad
- (id)initWithWDTableCell:(id)arg1 atIndex:(unsigned int)arg2 parent:(id)arg3;	// IMP=0x00000000000fc653
- (id)tableMapper;	// IMP=0x00000000000fc85e
- (void)mapCellStyleAt:(id)arg1;	// IMP=0x00000000000fcd3f

@end

