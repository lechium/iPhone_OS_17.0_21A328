//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface ADDeviceSyncCommandPushGenerationsRequest : NSObject
{
    NSDictionary *_generationsByDataType;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000001d2405
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00100000001d23b8
- (void).cxx_destruct;	// IMP=0x00200000001d2296
@property(readonly, copy, nonatomic) NSDictionary *generationsByDataType; // @synthesize generationsByDataType=_generationsByDataType;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001d2269
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001d218c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001d2181
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001d20de
- (unsigned long long)hash;	// IMP=0x00100000001d20c8
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00100000001d2042
- (id)description;	// IMP=0x00100000001d202e
- (id)initWithGenerationsByDataType:(id)arg1;	// IMP=0x00100000001d1f98
- (id)init;	// IMP=0x00100000001d1f84
- (id)initWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x00100000001d1e91
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00100000001d240d

@end

