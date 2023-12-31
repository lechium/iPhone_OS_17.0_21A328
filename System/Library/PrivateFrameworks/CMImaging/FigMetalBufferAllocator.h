//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FigMetalUtils;
@protocol MTLBuffer;

__attribute__((visibility("hidden")))
@interface FigMetalBufferAllocator : NSObject
{
    id <MTLBuffer> _buffer;	// 8 = 0x8
    unsigned long long _alignment;	// 16 = 0x10
    FigMetalUtils *_utils;	// 24 = 0x18
    unsigned long long _memSize;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000252af
@property(readonly, nonatomic) unsigned long long memSize; // @synthesize memSize=_memSize;
@property(readonly, nonatomic) FigMetalUtils *utils; // @synthesize utils=_utils;
@property(readonly, nonatomic) unsigned long long alignment; // @synthesize alignment=_alignment;
- (unsigned long long)bufferOffset:(id)arg1;	// IMP=0x0000000000025289
- (unsigned long long)textureOffset:(id)arg1;	// IMP=0x0000000000025274
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2;	// IMP=0x000000000002513e
- (id)newBufferWithDescriptor:(id)arg1 offset:(unsigned long long)arg2;	// IMP=0x0000000000025136
- (CDStruct_4bcfbbae)getSizeAndAlignForBufferDescriptor:(id)arg1;	// IMP=0x000000000002512c
- (CDStruct_4bcfbbae)getSizeAndAlignForDescriptor:(id)arg1;	// IMP=0x000000000002502c
- (_Bool)hasCreatedBuffer:(id)arg1;	// IMP=0x0000000000025024
- (_Bool)hasCreatedTexture:(id)arg1;	// IMP=0x0000000000024fe1
- (void)purgeResources;	// IMP=0x0000000000024fc7
- (int)setupWithDescriptor:(id)arg1;	// IMP=0x0000000000024aef
- (id)description;	// IMP=0x0000000000024ae2
- (id)initWithMetalUtils:(id)arg1;	// IMP=0x00000000000249fb

@end

