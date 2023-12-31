//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, OITSUCustomFormatData;

__attribute__((visibility("hidden")))
@interface OITSUCustomFormat : NSObject
{
    NSString *_formatNameStem;	// 8 = 0x8
    NSString *_formatNameTag;	// 16 = 0x10
    NSString *_currencyCode;	// 24 = 0x18
    _Bool _currencyCodeComputed;	// 32 = 0x20
    int _formatType;	// 36 = 0x24
    OITSUCustomFormatData *_defaultFormatData;	// 40 = 0x28
    NSString *_formatName;	// 48 = 0x30
    NSMutableArray *_conditionList;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000002b7d02
@property(readonly, nonatomic) NSMutableArray *conditionList; // @synthesize conditionList=_conditionList;
@property(readonly, nonatomic) NSString *formatName; // @synthesize formatName=_formatName;
@property(readonly, nonatomic) OITSUCustomFormatData *defaultFormatData; // @synthesize defaultFormatData=_defaultFormatData;
@property(readonly, nonatomic) int formatType; // @synthesize formatType=_formatType;
- (id)description;	// IMP=0x00000000002b7c21
@property(readonly, nonatomic) NSString *currencyCode;
- (id)conditionalFormatDataForKey:(unsigned long long)arg1;	// IMP=0x00000000002b79ef
- (id)conditionalFormatAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002b7990
- (id)conditionalFormatDataForValue:(double)arg1 outKey:(unsigned long long *)arg2;	// IMP=0x00000000002b76e5
- (id)conditionalFormatDataForValue:(double)arg1;	// IMP=0x00000000002b76d1
- (_Bool)isEqualWithStemNameMatching:(id)arg1;	// IMP=0x00000000002b76bd
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002b76a6
- (_Bool)p_isEqual:(id)arg1 matchingFullName:(_Bool)arg2;	// IMP=0x00000000002b712d
@property(readonly, nonatomic) NSString *formatNameTag;
@property(readonly, nonatomic) NSString *formatNameStem;
- (void)p_makeFormatNameStemAndTag;	// IMP=0x00000000002b6f74
- (unsigned long long)hash;	// IMP=0x00000000002b6ee7
- (void)p_addConditionOfType:(int)arg1 value:(double)arg2 data:(id)arg3;	// IMP=0x00000000002b6c60
@property(readonly, nonatomic) unsigned long long conditionCount;
- (id)customFormatWithNewName:(id)arg1;	// IMP=0x00000000002b69a4
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002b672c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002b6721
- (id)initWithName:(id)arg1 formatType:(int)arg2 data:(id)arg3;	// IMP=0x00000000002b670c
- (id)initWithName:(id)arg1 formatType:(int)arg2 data:(id)arg3 conditionList:(id)arg4;	// IMP=0x00000000002b63da

@end

