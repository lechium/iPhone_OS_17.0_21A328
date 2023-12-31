//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface MapsCarEngineState : NSObject
{
    _Bool _lowRangeWarning;	// 8 = 0x8
    int _engineType;	// 12 = 0xc
    NSNumber *_range;	// 16 = 0x10
}

+ (void)prepareForUse;	// IMP=0x00200000007aabbf
+ (id)engineStateCNG;	// IMP=0x00100000007aab91
+ (id)engineStateElectric;	// IMP=0x00100000007aab63
+ (id)engineStateDiesel;	// IMP=0x00100000007aab35
+ (id)engineStateGasoline;	// IMP=0x00100000007aab07
- (void).cxx_destruct;	// IMP=0x00200000007ab589
@property(retain) NSNumber *range; // @synthesize range=_range;
@property _Bool lowRangeWarning; // @synthesize lowRangeWarning=_lowRangeWarning;
@property int engineType; // @synthesize engineType=_engineType;
- (id)description;	// IMP=0x00100000007ab3ff
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000007ab361
- (_Bool)isEqualToEngineState:(id)arg1;	// IMP=0x00100000007ab24c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000007ab1f3
- (void)updateWithVehicleInfo:(id)arg1;	// IMP=0x00100000007aadcd
- (id)initWithEngineType:(int)arg1;	// IMP=0x00100000007aada9
- (id)init;	// IMP=0x00100000007aad63

@end

