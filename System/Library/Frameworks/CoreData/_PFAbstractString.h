//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

__attribute__((visibility("hidden")))
@interface _PFAbstractString : NSString
{
}

+ (Class)classForKeyedUnarchiver;	// IMP=0x008000000007ce24
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x008000000007cdfd
+ (id)alloc;	// IMP=0x008000000007cdf1
+ (_Bool)accessInstanceVariablesDirectly;	// IMP=0x008000000007cde9
- (id)description;	// IMP=0x000000000007cf15
- (unsigned long long)smallestEncoding;	// IMP=0x000000000007cf0a
- (unsigned long long)fastestEncoding;	// IMP=0x000000000007ceff
- (const char *)cStringUsingEncoding:(unsigned long long)arg1;	// IMP=0x000000000007cead
- (const unsigned short *)_fastCharacterContents;	// IMP=0x000000000007cea5
- (const char *)_fastCStringContents:(_Bool)arg1;	// IMP=0x000000000007ce93
- (const char *)cString;	// IMP=0x000000000007ce81
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007ce35
- (Class)classForCoder;	// IMP=0x000000000007ce13
- (void)dealloc;	// IMP=0x000000000007ce09

@end

