//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableString;

__attribute__((visibility("hidden")))
@interface CMStyle : NSObject
{
    NSMutableDictionary *properties;	// 8 = 0x8
    NSMutableString *mStyleString;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000464740
- (unsigned long long)hash;	// IMP=0x00000000004646fd
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000046463a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000046460b
- (void)appendDefaultBorderStyle;	// IMP=0x00000000001e06f6
- (void)appendSizeInfoFromRect:(struct CGRect)arg1;	// IMP=0x00000000000aaefb
- (void)appendOriginInfoFromPoint:(struct CGPoint)arg1;	// IMP=0x000000000046459c
- (void)appendPositionInfoFromRect:(struct CGRect)arg1;	// IMP=0x00000000000a643b
- (void)appendPropertyString:(id)arg1;	// IMP=0x00000000001eaf05
- (void)appendPropertyForName:(id)arg1 color:(id)arg2;	// IMP=0x00000000001eaa35
- (void)appendPropertyForName:(id)arg1 length:(double)arg2 unit:(int)arg3;	// IMP=0x00000000000aab22
- (void)appendPropertyForName:(id)arg1 floatValue:(float)arg2;	// IMP=0x00000000001f8660
- (void)appendPropertyForName:(id)arg1 intValue:(int)arg2;	// IMP=0x00000000000ae943
- (void)appendPropertyForName:(id)arg1 stringValue:(id)arg2;	// IMP=0x000000000003ac10
- (void)appendPropertyForName:(id)arg1 stringWithColons:(id)arg2;	// IMP=0x00000000000a8591
- (void)appendPropertyForName:(id)arg1 oadTextSpacing:(id)arg2 lineHeight:(float)arg3 unit:(int)arg4;	// IMP=0x00000000000ab8c2
- (void)appendPropertyForName:(id)arg1 oadTextSpacing:(id)arg2 unit:(int)arg3;	// IMP=0x00000000000ab79d
- (void)appendPropertyForName:(id)arg1 oadTextSpacing:(id)arg2;	// IMP=0x00000000000ab785
- (id)cacheFriendlyCSSStyleString;	// IMP=0x0000000000464541
- (id)cssStyleString;	// IMP=0x000000000003ae2d
- (void)addPropertiesToCSSStyleString:(id)arg1;	// IMP=0x00000000004642bf
- (id)attributeForName:(id)arg1;	// IMP=0x00000000000f07a3
- (id)propertyForName:(id)arg1;	// IMP=0x00000000000f38bd
- (void)addProperty:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000abf23
- (id)properties;	// IMP=0x00000000000f2c58
- (id)initWithStyle:(id)arg1;	// IMP=0x000000000046415a
- (id)init;	// IMP=0x000000000003ab6d

@end
