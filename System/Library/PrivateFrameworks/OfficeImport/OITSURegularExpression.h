//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface OITSURegularExpression : NSObject
{
    NSString *_expressionString;	// 8 = 0x8
    void *_reserved;	// 16 = 0x10
}

+ (id)regularExpressionWithString:(id)arg1;	// IMP=0x0010000000280950
+ (void)initialize;	// IMP=0x0010000000280914
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002810d7
- (const char *)getBytesForString:(id)arg1 lossByte:(unsigned char)arg2;	// IMP=0x0000000000281081
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000280fd5
- (struct _NSRange)matchedRangeForString:(id)arg1 range:(struct _NSRange)arg2 subexpressionRanges:(struct _NSRange *)arg3 count:(unsigned int)arg4;	// IMP=0x0000000000280e7e
- (struct _NSRange)matchedRangeForCString:(const char *)arg1 range:(struct _NSRange)arg2 subexpressionRanges:(struct _NSRange *)arg3 count:(unsigned int)arg4;	// IMP=0x0000000000280cd8
- (id)expressionString;	// IMP=0x0000000000280cce
- (unsigned long long)hash;	// IMP=0x0000000000280cb8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000280c3e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000280bcd
- (id)init;	// IMP=0x0000000000280bb4
- (unsigned long long)numberOfSubexpressions;	// IMP=0x0000000000280ba6
- (id)initWithExpressionString:(id)arg1 options:(unsigned int)arg2;	// IMP=0x00000000002809f8
- (id)initWithExpressionString:(id)arg1;	// IMP=0x00000000002809e4
- (void)dealloc;	// IMP=0x000000000028097f

@end

