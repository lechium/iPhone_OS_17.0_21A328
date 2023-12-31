//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLArrayType.h"

@class MTLType;

__attribute__((visibility("hidden")))
@interface MTLArrayTypeInternal : MTLArrayType
{
    unsigned long long _dataType;	// 8 = 0x8
    unsigned int _arrayLength:32;	// 16 = 0x10
    unsigned int _stride:32;	// 20 = 0x14
    id _details;	// 24 = 0x18
    unsigned long long _elementType;	// 32 = 0x20
    unsigned long long _pixelFormat;	// 40 = 0x28
    unsigned long long _aluType;	// 48 = 0x30
    MTLType *_elementTypeInfo;	// 56 = 0x38
    _Bool _isIndirectArgumentBuffer;	// 64 = 0x40
    unsigned long long _argumentIndexStride;	// 72 = 0x48
}

@property _Bool isIndirectArgumentBuffer; // @synthesize isIndirectArgumentBuffer=_isIndirectArgumentBuffer;
@property(nonatomic) unsigned long long argumentIndexStride; // @synthesize argumentIndexStride=_argumentIndexStride;
@property(readonly) unsigned long long aluType; // @synthesize aluType=_aluType;
@property(readonly) unsigned long long pixelFormat; // @synthesize pixelFormat=_pixelFormat;
- (unsigned long long)elementType;	// IMP=0x0000000000112468
- (unsigned long long)dataType;	// IMP=0x0000000000112457
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000112337
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x0000000000112155
- (id)elementTypeDescription;	// IMP=0x0000000000112144
- (id)elementIndirectArgumentType;	// IMP=0x0000000000112133
@property(nonatomic) unsigned long long indirectArgumentIndexStride;
- (id)elementPointerType;	// IMP=0x00000000001120d7
- (id)elementTextureReferenceType;	// IMP=0x000000000011209d
- (id)elementStructType;	// IMP=0x000000000011207a
- (id)elementArrayType;	// IMP=0x0000000000112057
- (void)setStride:(unsigned long long)arg1;	// IMP=0x0000000000112047
- (_Bool)isArrayLayoutThreadSafeWith:(id)arg1;	// IMP=0x0000000000111fa6
- (unsigned long long)stride;	// IMP=0x0000000000111f96
- (unsigned long long)arrayLength;	// IMP=0x0000000000111f86
- (void)dealloc;	// IMP=0x0000000000111f2e
- (id)initWithArrayLength:(unsigned long long)arg1 elementType:(unsigned long long)arg2 stride:(unsigned long long)arg3 pixelFormat:(unsigned long long)arg4 aluType:(unsigned long long)arg5 details:(id)arg6;	// IMP=0x0000000000111e3e

@end

