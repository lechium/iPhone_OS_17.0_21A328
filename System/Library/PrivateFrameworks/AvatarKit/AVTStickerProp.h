//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString, SCNNode;

__attribute__((visibility("hidden")))
@interface AVTStickerProp : NSObject
{
    _Bool _orientToCamera;	// 8 = 0x8
    _Bool _renderLast;	// 9 = 0x9
    SCNNode *_node;	// 16 = 0x10
    NSString *_originalName;	// 24 = 0x18
    NSArray *_palettesDescriptions;	// 32 = 0x20
    NSArray *_shaderModifiers;	// 40 = 0x28
    NSArray *_adjustments;	// 48 = 0x30
    double _opacity;	// 56 = 0x38
    struct CGSize _size;	// 64 = 0x40
    MISSING_TYPE *_position;	// 80 = 0x50
    MISSING_TYPE *_scale;	// 96 = 0x60
    MISSING_TYPE *_rotation;	// 112 = 0x70
}

+ (void)applyPalettesForAvatar:(id)arg1 toNode:(id)arg2 palettesDescriptions:(id)arg3;	// IMP=0x001000000003229b
+ (id)propFromDictionary:(id)arg1 assetsPath:(id)arg2;	// IMP=0x00100000000314d2
+ (float)getOpacityInDictionary:(id)arg1;	// IMP=0x0010000000031453
+ (id)adjustmentFromDictionary:(id)arg1 presetCategory:(id)arg2;	// IMP=0x001000000003136c
+ (MISSING_TYPE *)getScaleInDictionary:(id)arg1;	// IMP=0x00100000000311ed
+ (MISSING_TYPE *)getRotationInDictionary:(id)arg1;	// IMP=0x0010000000031093
+ (MISSING_TYPE *)getPositionInDictionary:(id)arg1;	// IMP=0x0010000000030f39
+ (struct CGSize)getSizeInDictionary:(id)arg1;	// IMP=0x0010000000030e3d
+ (_Bool)getRenderLastInDictionary:(id)arg1;	// IMP=0x0010000000030de6
+ (_Bool)getOrientToCameraInDictionary:(id)arg1;	// IMP=0x0010000000030d8f
+ (id)cacheKeyForSize:(struct CGSize)arg1 position:(id)arg2 rotation:(id)arg3 scale:palettesDescriptions:filePath: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000030bfc
+ (id)stickerPropCache;	// IMP=0x0010000000030ba7
- (void).cxx_destruct;	// IMP=0x0000000000033a82
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(nonatomic) MISSING_TYPE *rotation; // @synthesize rotation=_rotation;
@property(nonatomic) MISSING_TYPE *scale; // @synthesize scale=_scale;
@property(nonatomic) MISSING_TYPE *position; // @synthesize position=_position;
@property(readonly, nonatomic) NSArray *adjustments; // @synthesize adjustments=_adjustments;
@property(copy, nonatomic) NSArray *shaderModifiers; // @synthesize shaderModifiers=_shaderModifiers;
@property(readonly, nonatomic) NSArray *palettesDescriptions; // @synthesize palettesDescriptions=_palettesDescriptions;
@property(readonly, nonatomic) _Bool renderLast; // @synthesize renderLast=_renderLast;
@property(readonly, nonatomic) _Bool orientToCamera; // @synthesize orientToCamera=_orientToCamera;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *originalName; // @synthesize originalName=_originalName;
@property(retain, nonatomic) SCNNode *node; // @synthesize node=_node;
- (id)dictionaryWithTargetPath:(id)arg1;	// IMP=0x00000000000331f8
- (void)stickerGenerationDidEnd;	// IMP=0x00000000000331f2
- (void)updateNode:(id)arg1 withContentAtTime:(CDStruct_198678f7)arg2;	// IMP=0x00000000000331ec
- (_Bool)wantsTimedUpdates;	// IMP=0x00000000000331e4
- (void)stickerGenerationWillBegin;	// IMP=0x00000000000331de
- (void)buildNodeForAvatar:(id)arg1 withCamera:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000033166
- (void)applyCamera:(id)arg1 toNode:(id)arg2 distToHead:(double)arg3;	// IMP=0x0000000000032e97
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, nonatomic) NSString *nodeName;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)cloneWithShaderModifiers:(id)arg1;	// IMP=0x0000000000032bf0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000032aaf
- (id)initWithSize:(struct CGSize)arg1 scale:(_Bool)arg2 position:(_Bool)arg3 renderLast:(id)arg4 orientToCamera:(id)arg5 rotation:(id)arg6 palettesDescriptions:shaderModifiers:adjustments: /* Error: Ran out of types for this method. */;	// IMP=0x0000000000032914

@end
