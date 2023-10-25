//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CRLImage, MISSING_TYPE, NSDictionary, NSMutableDictionary, NSString;

@interface CRLMutableBrushStrokeStorage : NSObject
{
    NSMutableDictionary *_paths;	// 8 = 0x8
    NSMutableDictionary *_bounds;	// 16 = 0x10
    NSMutableDictionary *_textureIndices;	// 24 = 0x18
    NSMutableDictionary *_options;	// 32 = 0x20
    NSMutableDictionary *_lineEnds;	// 40 = 0x28
    MISSING_TYPE *_image;	// 48 = 0x30
}

+ (id)p_smoothPath:(id)arg1;	// IMP=0x00200000002170f0
- (void).cxx_destruct;	// IMP=0x00200000002174a6
@property(readonly, copy, nonatomic) NSDictionary *lineEnds; // @synthesize lineEnds=_lineEnds;
@property(readonly, copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(readonly, copy, nonatomic) NSDictionary *textureIndices; // @synthesize textureIndices=_textureIndices;
@property(readonly, copy, nonatomic) NSDictionary *bounds; // @synthesize bounds=_bounds;
@property(readonly, copy, nonatomic) NSDictionary *paths; // @synthesize paths=_paths;
@property(readonly, nonatomic) CRLImage *image; // @synthesize image=_image;
- (id)deepCopy;	// IMP=0x00100000002173f0
- (void)setLineEnd:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000021725e
- (void)setOption:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000002171ed
- (void)addTextureIndex:(unsigned long long)arg1 forKey:(id)arg2;	// IMP=0x0010000000217111
- (void)addPath:(id)arg1 withBounds:(struct CGRect)arg2 shouldSmooth:(_Bool)arg3 forKey:(id)arg4;	// IMP=0x0010000000216e83
- (void)setImage:(id)arg1;	// IMP=0x0010000000216e56
@property(readonly, nonatomic) unsigned long long totalSectionCount;
- (id)init;	// IMP=0x0010000000216cfe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
