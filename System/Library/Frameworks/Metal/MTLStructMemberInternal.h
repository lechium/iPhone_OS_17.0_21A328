//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLStructMember.h"

@class MTLType, NSString;

__attribute__((visibility("hidden")))
@interface MTLStructMemberInternal : MTLStructMember
{
    NSString *_name;	// 8 = 0x8
    unsigned long long _offset;	// 16 = 0x10
    unsigned int _dataType:16;	// 24 = 0x18
    id _details;	// 32 = 0x20
    unsigned long long _pixelFormat;	// 40 = 0x28
    unsigned long long _aluType;	// 48 = 0x30
    unsigned long long _argumentIndex;	// 56 = 0x38
    unsigned long long _render_target;	// 64 = 0x40
    unsigned long long _raster_order_group;	// 72 = 0x48
    MTLType *_typeInfo;	// 80 = 0x50
}

@property(readonly) unsigned long long raster_order_group; // @synthesize raster_order_group=_raster_order_group;
@property(readonly) unsigned long long render_target; // @synthesize render_target=_render_target;
- (unsigned long long)argumentIndex;	// IMP=0x0000000000111d6e
@property(readonly) unsigned long long aluType; // @synthesize aluType=_aluType;
@property(readonly) unsigned long long pixelFormat; // @synthesize pixelFormat=_pixelFormat;
- (unsigned long long)dataType;	// IMP=0x0000000000111d3b
- (unsigned long long)offset;	// IMP=0x0000000000111d2a
- (id)name;	// IMP=0x0000000000111d19
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000111bd9
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x00000000001119e9
- (id)dataTypeDescription;	// IMP=0x00000000001119d8
- (_Bool)isMemberLayoutThreadSafeWith:(id)arg1;	// IMP=0x000000000011185e
- (id)indirectArgumentType;	// IMP=0x000000000011184d
- (void)setOffset:(unsigned long long)arg1;	// IMP=0x000000000011183c
- (id)pointerType;	// IMP=0x0000000000111802
- (id)textureReferenceType;	// IMP=0x00000000001117c8
- (id)structType;	// IMP=0x00000000001117a5
- (id)arrayType;	// IMP=0x0000000000111782
- (unsigned long long)indirectArgumentIndex;	// IMP=0x0000000000111771
- (void)dealloc;	// IMP=0x000000000011170b
- (id)initWithName:(id)arg1 offset:(unsigned long long)arg2 dataType:(unsigned long long)arg3 pixelFormat:(unsigned long long)arg4 aluType:(unsigned long long)arg5 indirectArgumentIndex:(unsigned long long)arg6 render_target:(unsigned long long)arg7 raster_order_group:(unsigned long long)arg8 details:(id)arg9;	// IMP=0x00000000001115eb

@end
