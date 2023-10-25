//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface REMeshSkinningModelDescriptor : NSObject
{
    NSArray *_inverseBindPoseAttributes;	// 8 = 0x8
    NSArray *_skinningParts;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000030e989
- (void).cxx_destruct;	// IMP=0x000000000030ef87
@property(readonly, nonatomic) NSArray *skinningParts; // @synthesize skinningParts=_skinningParts;
@property(readonly, nonatomic) NSArray *inverseBindPoseAttributes; // @synthesize inverseBindPoseAttributes=_inverseBindPoseAttributes;
- (_Bool)validateWithPayloadSize:(unsigned long long)arg1 partCount:(unsigned long long)arg2 skeletonCount:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x000000000030ec4f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000030ebda
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000030ea74
- (id)initWithInverseBindPoseAttributes:(id)arg1 skinningParts:(id)arg2;	// IMP=0x000000000030e991
- (id)initWithSkinningData:(const void *)arg1 inverseBindPoseAttributes:(id)arg2 payloadBuilder:(void *)arg3;	// IMP=0x00000000002f25cd
- (id)initWithMeshSkinningData:(const void *)arg1 inverseBindPoseAttributes:(id)arg2 payloadBuilder:(void *)arg3 deformationModelData:(void *)arg4;	// IMP=0x00000000002f234b

@end
