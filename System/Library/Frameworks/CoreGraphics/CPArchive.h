//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableString;

__attribute__((visibility("hidden")))
@interface CPArchive : NSObject
{
    struct __CFArray *selections;	// 8 = 0x8
    struct __CFArray *imageNodes;	// 16 = 0x10
    NSMutableString *plainText;	// 24 = 0x18
    NSMutableString *htmlString;	// 32 = 0x20
    NSMutableString *htmlStringNoImages;	// 40 = 0x28
    NSData *webArchiveData;	// 48 = 0x30
}

- (id)webArchiveData;	// IMP=0x000000000010107c
- (id)html;	// IMP=0x0000000000100ac9
- (id)plainText;	// IMP=0x00000000001009c4
- (void)addSelection:(struct CGPDFSelection *)arg1;	// IMP=0x0000000000100957
- (void)dealloc;	// IMP=0x00000000001008f2
- (void)finalize;	// IMP=0x00000000001008b4
- (void)dispose;	// IMP=0x0000000000100878
- (id)init;	// IMP=0x0000000000100820

@end
