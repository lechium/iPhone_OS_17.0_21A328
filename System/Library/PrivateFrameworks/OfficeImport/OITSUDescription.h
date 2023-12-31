//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface OITSUDescription : NSObject
{
    NSObject *_object;	// 8 = 0x8
    Class _class;	// 16 = 0x10
    void *_cfType;	// 24 = 0x18
    NSString *_header;	// 32 = 0x20
    NSMutableDictionary *_fields;	// 40 = 0x28
    NSMutableArray *_fieldOrder;	// 48 = 0x30
    unsigned long long _fieldNameWidth;	// 56 = 0x38
    _Bool _commaSeparated;	// 64 = 0x40
}

+ (id)descriptionWithObject:(id)arg1;	// IMP=0x006000000027076b
+ (id)descriptionWithCFType:(void *)arg1 format:(id)arg2;	// IMP=0x006000000027065e
+ (id)descriptionWithObject:(id)arg1 class:(Class)arg2;	// IMP=0x006000000027061a
+ (id)descriptionWithObject:(id)arg1 format:(id)arg2;	// IMP=0x0060000000270531
+ (id)descriptionWithObject:(id)arg1 class:(Class)arg2 format:(id)arg3;	// IMP=0x0060000000270450
- (id)descriptionString;	// IMP=0x0000000000270c15
- (void)setFieldOptionCommaSeparated;	// IMP=0x0000000000270c0b
- (void)addSuperDescription;	// IMP=0x0000000000270bba
- (void)addFieldValue:(id)arg1;	// IMP=0x0000000000270b9c
- (void)addFieldWithFormat:(id)arg1;	// IMP=0x0000000000270aa6
- (void)addField:(id)arg1 format:(id)arg2;	// IMP=0x00000000002709a5
- (void)addField:(id)arg1 value:(id)arg2;	// IMP=0x0000000000270881
- (id)p_header;	// IMP=0x00000000002707d7
- (void)dealloc;	// IMP=0x0000000000270786
- (id)initWithObject:(id)arg1;	// IMP=0x0000000000270418
- (id)initWithObject:(id)arg1 format:(id)arg2;	// IMP=0x000000000027033f
- (id)initWithObject:(id)arg1 class:(Class)arg2 format:(id)arg3;	// IMP=0x00000000002702a2
- (id)initWithObject:(id)arg1 class:(Class)arg2 format:(id)arg3 arguments:(struct __va_list_tag [1])arg4;	// IMP=0x0000000000270226
- (id)initWithCFType:(void *)arg1 header:(id)arg2;	// IMP=0x00000000002701bd
- (id)initWithObject:(id)arg1 class:(Class)arg2 header:(id)arg3;	// IMP=0x0000000000270146

@end

