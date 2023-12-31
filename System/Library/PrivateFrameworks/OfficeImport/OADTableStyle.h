//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, OADTableBackground, OADTablePartStyle;

__attribute__((visibility("hidden")))
@interface OADTableStyle : NSObject
{
    NSString *mName;	// 8 = 0x8
    NSString *mId;	// 16 = 0x10
    OADTableBackground *mBackground;	// 24 = 0x18
    OADTablePartStyle *mWholeTableStyle;	// 32 = 0x20
    OADTablePartStyle *mBand1HorzStyle;	// 40 = 0x28
    OADTablePartStyle *mBand2HorzStyle;	// 48 = 0x30
    OADTablePartStyle *mBand1VertStyle;	// 56 = 0x38
    OADTablePartStyle *mBand2VertStyle;	// 64 = 0x40
    OADTablePartStyle *mFirstRowStyle;	// 72 = 0x48
    OADTablePartStyle *mFirstColumnStyle;	// 80 = 0x50
    OADTablePartStyle *mLastRowStyle;	// 88 = 0x58
    OADTablePartStyle *mLastColumnStyle;	// 96 = 0x60
    OADTablePartStyle *mNorthEastStyle;	// 104 = 0x68
    OADTablePartStyle *mNorthWestStyle;	// 112 = 0x70
    OADTablePartStyle *mSouthEastStyle;	// 120 = 0x78
    OADTablePartStyle *mSouthWestStyle;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000000003208db
- (id)description;	// IMP=0x000000000032089d
- (void)setSouthWestStyle:(id)arg1;	// IMP=0x0000000000224b62
- (id)southWestStyle;	// IMP=0x000000000032088c
- (void)setSouthEastStyle:(id)arg1;	// IMP=0x0000000000224b51
- (id)southEastStyle;	// IMP=0x000000000032087e
- (void)setNorthWestStyle:(id)arg1;	// IMP=0x0000000000224b84
- (id)northWestStyle;	// IMP=0x0000000000320870
- (void)setNorthEastStyle:(id)arg1;	// IMP=0x0000000000224b73
- (id)northEastStyle;	// IMP=0x0000000000320862
- (void)setLastColumnStyle:(id)arg1;	// IMP=0x00000000001cc960
- (id)lastColumnStyle;	// IMP=0x0000000000320854
- (void)setLastRowStyle:(id)arg1;	// IMP=0x00000000001cc982
- (id)lastRowStyle;	// IMP=0x0000000000320846
- (void)setFirstColumnStyle:(id)arg1;	// IMP=0x00000000001cc971
- (id)firstColumnStyle;	// IMP=0x0000000000320838
- (void)setFirstRowStyle:(id)arg1;	// IMP=0x00000000001cc993
- (id)firstRowStyle;	// IMP=0x00000000001faf0f
- (void)setBand2VertStyle:(id)arg1;	// IMP=0x00000000001cc8ae
- (id)band2VertStyle;	// IMP=0x000000000032082a
- (void)setBand1VertStyle:(id)arg1;	// IMP=0x00000000001cc89d
- (id)band1VertStyle;	// IMP=0x000000000032081c
- (void)setBand2HorzStyle:(id)arg1;	// IMP=0x00000000001cc88c
- (id)band2HorzStyle;	// IMP=0x000000000032080e
- (void)setBand1HorzStyle:(id)arg1;	// IMP=0x00000000001cc87b
- (id)band1HorzStyle;	// IMP=0x00000000001fc99d
- (void)setWholeTableStyle:(id)arg1;	// IMP=0x00000000001cc86a
- (id)wholeTableStyle;	// IMP=0x00000000001fbe54
- (void)setStyle:(id)arg1 forPart:(int)arg2;	// IMP=0x00000000003207a5
- (id)partStyle:(int)arg1;	// IMP=0x000000000032076b
- (void)setBackground:(id)arg1;	// IMP=0x000000000022521f
- (id)background;	// IMP=0x00000000001fa76b
- (void)setId:(id)arg1;	// IMP=0x00000000001cba9c
- (id)id;	// IMP=0x00000000001fa227
- (void)setName:(id)arg1;	// IMP=0x00000000001cbaad
- (id)name;	// IMP=0x000000000032075d

@end

