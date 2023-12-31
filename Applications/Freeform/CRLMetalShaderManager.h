//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary;
@protocol MTLDevice;

@interface CRLMetalShaderManager : NSObject
{
    NSMapTable *_libraries;	// 8 = 0x8
    NSMutableDictionary *_shaders;	// 16 = 0x10
    NSMutableDictionary *_computeShaders;	// 24 = 0x18
    NSMutableDictionary *_samplers;	// 32 = 0x20
    struct os_unfair_lock_s _librariesLock;	// 40 = 0x28
    struct os_unfair_lock_s _shadersLock;	// 44 = 0x2c
    struct os_unfair_lock_s _computeShadersLock;	// 48 = 0x30
    struct os_unfair_lock_s _samplersLock;	// 52 = 0x34
    id <MTLDevice> _device;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000006bfd6
@property(readonly, nonatomic) id <MTLDevice> device; // @synthesize device=_device;
- (id)nearestClampToZeroSampler;	// IMP=0x001000000006be5a
- (id)nearestClampToEdgeSampler;	// IMP=0x001000000006bcf1
- (id)linearClampToZeroSampler;	// IMP=0x001000000006bb79
- (id)linearClampToEdgeSampler;	// IMP=0x001000000006ba0a
- (id)defaultClampToZeroSampler;	// IMP=0x001000000006b9f8
- (id)defaultClampToEdgeSampler;	// IMP=0x001000000006b9e6
- (id)defaultNearestSampler;	// IMP=0x001000000006b9d4
- (id)defaultLinearSampler;	// IMP=0x001000000006b9c2
- (id)defaultSampler;	// IMP=0x001000000006b9b0
- (id)samplerWithName:(id)arg1 initBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000006b718
- (id)computeShaderWithName:(id)arg1 initBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000006b480
- (id);	// IMP=0x001000000006b1e8
- (id)libraryForBundle:(id)arg1;	// IMP=0x001000000006af23
- (id)initWithDevice:(id)arg1;	// IMP=0x001000000006ae0b

@end

