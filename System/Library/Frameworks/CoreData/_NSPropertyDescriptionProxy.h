//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSEntityDescription, NSPropertyDescription;

__attribute__((visibility("hidden")))
@interface _NSPropertyDescriptionProxy : NSObject
{
    id _sourceBuffer;	// 8 = 0x8
    NSPropertyDescription *_underlyingProperty;	// 16 = 0x10
    NSEntityDescription *_entityDescription;	// 24 = 0x18
    unsigned int _entitysReferenceIDForProperty;	// 32 = 0x20
}

+ (_Bool)resolveInstanceMethod:(SEL)arg1;	// IMP=0x001000000024d417
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000024d168
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x000000000024d401
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x000000000024d3f7
- (unsigned long long)hash;	// IMP=0x000000000024d3e1
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000024d3cb
- (Class)class;	// IMP=0x000000000024d3bd
- (void)_versionHash:(char *)arg1 inStyle:(unsigned long long)arg2;	// IMP=0x000000000024d352
- (_Bool)isKindOfClass:(Class)arg1;	// IMP=0x000000000024d33e
- (void)_setEntityAndMaintainIndices:(id)arg1;	// IMP=0x000000000024d334
- (void)_setEntity:(id)arg1;	// IMP=0x000000000024d32a
- (void)_createCachesAndOptimizeState;	// IMP=0x000000000024d324
- (id)entity;	// IMP=0x000000000024d31a
- (unsigned int)_entitysReferenceID;	// IMP=0x000000000024d311
- (void)_setEntitysReferenceID:(unsigned int)arg1;	// IMP=0x000000000024d308
- (id)_underlyingProperty;	// IMP=0x000000000024d2fe
- (id)description;	// IMP=0x000000000024d290
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000024d227
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000024d170
- (id)initWithPropertyDescription:(id)arg1;	// IMP=0x000000000024d15b

@end

