//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface ARUIRingUniforms : NSObject
{
    CDStruct_ee1f7a4d _vertexAttributes;	// 16 = 0x10
    struct {
        MISSING_TYPE *color1__color2__center__startPosition__endPosition__ringValues__blendingValues__trigResults;
    } _uniforms;	// 144 = 0x90
}

@property(readonly, nonatomic) struct uniforms; // @synthesize uniforms=_uniforms;
@property(readonly, nonatomic) CDStruct_ee1f7a4d vertexAttributes; // @synthesize vertexAttributes=_vertexAttributes;
- (void)_updateUniformsWithRing:(id)arg1 inContext:(id)arg2;	// IMP=0x000000000001ef52
- (void)_updateVertexAttributesWithRing:(id)arg1 inContext:(id)arg2;	// IMP=0x000000000001ea85
- (void *)uniformsBytes;	// IMP=0x000000000001ea78
- (void *)vertexAttributesBytes;	// IMP=0x000000000001ea6e
- (id)initWithRing:(id)arg1 inContext:(id)arg2;	// IMP=0x000000000001e9ca

@end

