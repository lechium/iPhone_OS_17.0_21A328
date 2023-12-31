//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CHDChart, CHDData, OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDErrorBar : NSObject
{
    CHDChart *mChart;	// 8 = 0x8
    double mValue;	// 16 = 0x10
    int mType;	// 24 = 0x18
    int mValueType;	// 28 = 0x1c
    int mDirection;	// 32 = 0x20
    _Bool mNoEndCap;	// 36 = 0x24
    CHDData *mMinusValues;	// 40 = 0x28
    CHDData *mPlusValues;	// 48 = 0x30
    OADGraphicProperties *mGraphicProperties;	// 56 = 0x38
}

+ (id)errorBarWithChart:(id)arg1;	// IMP=0x006000000018c0b5
- (void).cxx_destruct;	// IMP=0x000000000038dcb2
- (id)description;	// IMP=0x000000000038dc74
- (void)setGraphicProperties:(id)arg1;	// IMP=0x000000000018c375
- (id)graphicProperties;	// IMP=0x000000000038dc66
- (void)setPlusValues:(id)arg1;	// IMP=0x000000000018c205
- (id)plusValues;	// IMP=0x000000000018c642
- (void)setMinusValues:(id)arg1;	// IMP=0x000000000018c650
- (id)minusValues;	// IMP=0x000000000018c634
- (void)setNoEndCap:(_Bool)arg1;	// IMP=0x000000000018c1ea
- (_Bool)isNoEndCap;	// IMP=0x000000000038dc5d
- (void)setDirection:(int)arg1;	// IMP=0x000000000018c1d8
- (int)direction;	// IMP=0x000000000018c5e7
- (void)setValueType:(int)arg1;	// IMP=0x000000000018c1e1
- (int)valueType;	// IMP=0x000000000018c1f3
- (void)setType:(int)arg1;	// IMP=0x000000000018c1cf
- (int)type;	// IMP=0x000000000018c1fc
- (void)setValue:(double)arg1;	// IMP=0x000000000038dc52
- (double)value;	// IMP=0x000000000018cbe5
- (id)initWithChart:(id)arg1;	// IMP=0x000000000018c11a

@end

