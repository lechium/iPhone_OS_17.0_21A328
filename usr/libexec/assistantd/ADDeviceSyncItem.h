//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSUUID;

@interface ADDeviceSyncItem : NSObject
{
    NSUUID *_UUID;	// 8 = 0x8
    NSDictionary *_properties;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000029a600
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x001000000029a5b3
- (void).cxx_destruct;	// IMP=0x002000000029a3cf
@property(readonly, copy, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property(readonly, copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000029a34e
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000029a186
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000029a17b
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000029a06a
- (unsigned long long)hash;	// IMP=0x001000000029a02b
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x0010000000299fa1
- (id)description;	// IMP=0x0010000000299f8d
- (id)initWithUUID:(id)arg1 properties:(id)arg2;	// IMP=0x0010000000299ed0
- (id)init;	// IMP=0x0010000000299ebc
- (id)initWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x0010000000299d7f
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x001000000029a608

@end
