//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CPFontInfo : NSObject
{
    struct __CFData *fontData;	// 8 = 0x8
    const char *dataPtr;	// 16 = 0x10
    unsigned int offset;	// 24 = 0x18
    unsigned int fontDataLength;	// 28 = 0x1c
    _Bool valid;	// 32 = 0x20
}

- (struct __CFData *)newKernData;	// IMP=0x00000000003d8e11
- (int)kernUnitsPerEm;	// IMP=0x00000000003d8de0
- (_Bool)getDescriptor:(CDStruct_05724ab2 *)arg1;	// IMP=0x00000000003d8c0e
- (struct CGRect)readRect;	// IMP=0x00000000003d8b84
- (float)readFloat;	// IMP=0x00000000003d8b6d
- (int)readLong;	// IMP=0x00000000003d8b5b
- (unsigned int)readUnsignedLong;	// IMP=0x00000000003d8ae5
- (unsigned char)readByte;	// IMP=0x00000000003d8abf
- (void)dealloc;	// IMP=0x00000000003d8a81
- (void)finalize;	// IMP=0x00000000003d8a43
- (void)dispose;	// IMP=0x00000000003d8a1d
- (id)initWithFontData:(struct __CFData *)arg1;	// IMP=0x00000000003d89bd

@end

