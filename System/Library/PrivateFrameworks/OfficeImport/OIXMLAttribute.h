//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface OIXMLAttribute
{
    NSString *_name;	// 8 = 0x8
    NSString *_value;	// 16 = 0x10
}

+ (id)attributeWithName:(id)arg1 stringValue:(id)arg2;	// IMP=0x006000000047496b
- (void).cxx_destruct;	// IMP=0x0000000000474beb
- (void)setStringValue:(id)arg1;	// IMP=0x0000000000474bda
- (id)stringValue;	// IMP=0x0000000000474bc4
- (id)name;	// IMP=0x0000000000474bae
- (void)_appendXMLStringToString:(struct __CFString *)arg1 level:(int)arg2;	// IMP=0x0000000000474abd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000474a7b
- (id)initWithName:(id)arg1 stringValue:(id)arg2;	// IMP=0x00000000004749d9

@end

