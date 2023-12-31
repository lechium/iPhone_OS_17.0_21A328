//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate;

__attribute__((visibility("hidden")))
@interface GEOComposedStringCondition : NSObject
{
    int _conditionType;	// 8 = 0x8
    NSDate *_expirationDate;	// 16 = 0x10
    NSArray *_subConditions;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000002d153f
- (void).cxx_destruct;	// IMP=0x00000000002d17fc
@property(readonly, nonatomic) int conditionType; // @synthesize conditionType=_conditionType;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002d16d5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002d164d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002d1547
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002d148c
- (_Bool)isValid;	// IMP=0x00000000002d0f0f
- (id)initWithGeoCondition:(id)arg1;	// IMP=0x00000000002d0d5c

@end

