//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface ADDeviceSyncCommandPullGenerationsResponse : NSObject
{
    NSDictionary *_generationsByDataType;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000002f852f
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00100000002f84e2
- (void).cxx_destruct;	// IMP=0x00200000002f83c0
@property(readonly, copy, nonatomic) NSDictionary *generationsByDataType; // @synthesize generationsByDataType=_generationsByDataType;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000002f8393
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000002f82b6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000002f82ab
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000002f8208
- (unsigned long long)hash;	// IMP=0x00100000002f81f2
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00100000002f816c
- (id)description;	// IMP=0x00100000002f8158
- (id)initWithGenerationsByDataType:(id)arg1;	// IMP=0x00100000002f80c2
- (id)init;	// IMP=0x00100000002f80ae
- (id)initWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00100000002f7fbb
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00100000002f8537

@end

