//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SceneKit/MDLComponent-Protocol.h>

@class NSArray, NSData;

@protocol MDLSkinDeformerComponent <MDLComponent>
@property(readonly, nonatomic) CDStruct_14d5dc5e meshBindTransform;
@property(readonly, nonatomic) NSData *jointBindTransforms;
@property(readonly, nonatomic) NSArray *jointPaths;
- (unsigned long long)copyJointBindTransformsInto:(CDStruct_14d5dc5e *)arg1 maxCount:(unsigned long long)arg2;
@end
