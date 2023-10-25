//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSString.h"

@class NSAttributedString, NSDictionary;

__attribute__((visibility("hidden")))
@interface __NSCFLocalizedAttributedString : NSString
{
    NSAttributedString *_original;	// 8 = 0x8
    NSString *_apparentString;	// 16 = 0x10
    NSDictionary *_formatConfiguration;	// 24 = 0x18
}

+ (id)stringEncapsulatingBaseAttributedString:(id)arg1;	// IMP=0x001000000060082a
+ (struct __CFString *)createStringRequiringInflectionWithFormat:(struct __CFString *)arg1 formatOptions:(struct __CFDictionary *)arg2 arguments:(struct __va_list_tag [1])arg3;	// IMP=0x00100000006000a2
+ (struct __CFString *)copyStringWithMarkdown:(struct __CFString *)arg1 formatConfiguration:(struct __CFDictionary *)arg2 bundle:(struct __CFBundle *)arg3 tableURL:(struct __CFURL *)arg4;	// IMP=0x0010000000600062
- (const char *)_fastCStringContents:(_Bool)arg1;	// IMP=0x0000000000600a46
- (const unsigned short *)_fastCharacterContents;	// IMP=0x0000000000600a31
- (_Bool)isEqualToString:(id)arg1;	// IMP=0x0000000000600a14
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3 locale:(id)arg4;	// IMP=0x00000000006009f7
- (id)substringWithRange:(struct _NSRange)arg1;	// IMP=0x00000000006009da
- (id)substringToIndex:(unsigned long long)arg1;	// IMP=0x00000000006009bd
- (id)substringFromIndex:(unsigned long long)arg1;	// IMP=0x00000000006009a0
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000600983
- (unsigned long long)fastestEncoding;	// IMP=0x0000000000600966
- (unsigned short)characterAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000600949
- (unsigned long long)length;	// IMP=0x000000000060092c
- (id)__baseAttributedString;	// IMP=0x000000000060091b
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006008fe
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006008f3
- (id)formatConfiguration;	// IMP=0x00000000006008e2
- (void)dealloc;	// IMP=0x0000000000600859
- (id)_initWithAttributedString:(id)arg1;	// IMP=0x0000000000600754
- (id)initWithAttributedStringMarkdown:(id)arg1 formatConfiguration:(id)arg2 bundle:(struct __CFBundle *)arg3 tableURL:(id)arg4;	// IMP=0x00000000006001e5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000600193
- (Class)classForCoder;	// IMP=0x0000000000600182
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000060014e

@end
