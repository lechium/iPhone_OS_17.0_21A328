//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface REMeshSkinningPartDescriptor : NSObject
{
    unsigned int _skeletonIndex;	// 8 = 0x8
    NSDictionary *_attributes;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000030e471
- (void).cxx_destruct;	// IMP=0x000000000030e979
@property(readonly, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) unsigned int skeletonIndex; // @synthesize skeletonIndex=_skeletonIndex;
- (_Bool)validateWithPayloadSize:(unsigned long long)arg1 skeletonCount:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000030e6ff
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000030e692
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000030e51f
- (id)initWithSkeletonIndex:(unsigned int)arg1 attributes:(id)arg2;	// IMP=0x000000000030e479
- (void)addToSkinningModelBuilder:(struct SkinningModelBuilder *)arg1 payloadBuffer:(const struct Buffer *)arg2;	// IMP=0x00000000002f1cd0
- (id)initWithSkinningPartPayload:(void *)arg1 payloadBuilder:(void *)arg2;	// IMP=0x00000000002f1b10
- (id)initWithSkinningData:(const void *)arg1 payloadBuilder:(void *)arg2;	// IMP=0x00000000002f19c1

@end

