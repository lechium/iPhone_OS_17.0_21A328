//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OITSUColor;

__attribute__((visibility("hidden")))
@interface CMBordersProperty
{
    OITSUColor *mBorderColor;	// 16 = 0x10
    OITSUColor *mBorderTopColor;	// 24 = 0x18
    OITSUColor *mBorderLeftColor;	// 32 = 0x20
    OITSUColor *mBorderBottomColor;	// 40 = 0x28
    OITSUColor *mBorderRightColor;	// 48 = 0x30
    int mBorderStyle[5];	// 56 = 0x38
    int mBorderWidth[5];	// 76 = 0x4c
    int mCustomWidth;	// 96 = 0x60
}

+ (_Bool)isStroked:(id)arg1;	// IMP=0x00600000001476dc
- (void).cxx_destruct;	// IMP=0x000000000045be3e
- (id)colorString;	// IMP=0x00000000000fbe43
- (id)widthString;	// IMP=0x00000000000fbb28
- (id)styleString;	// IMP=0x00000000000fb879
- (id)stringFromColor:(id)arg1;	// IMP=0x00000000000fc088
- (id)stringFromWidthEnum:(int)arg1;	// IMP=0x00000000000fbdb4
- (id)stringFromStyleEnum:(int)arg1;	// IMP=0x00000000000fbb07
- (id)cssString;	// IMP=0x00000000000fb778
- (id)cssStringForName:(id)arg1;	// IMP=0x00000000000fb740
- (void)adjustValues;	// IMP=0x00000000000fa605
- (void)setFromOadStroke:(id)arg1 atLocation:(int)arg2 state:(id)arg3;	// IMP=0x00000000001eabd7
- (void)setNoneAtLocation:(int)arg1;	// IMP=0x000000000045be16
- (_Bool)isNoneAtLocation:(int)arg1;	// IMP=0x000000000045be00
- (id)initWithOADStroke:(id)arg1;	// IMP=0x00000000001054af
- (id)init;	// IMP=0x00000000000f9efa

@end

