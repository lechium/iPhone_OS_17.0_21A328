//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CMLengthProperty
{
    double value;	// 16 = 0x10
    int unitType;	// 24 = 0x18
}

+ (double)convertToPoints:(double)arg1 unit:(int)arg2;	// IMP=0x0060000000462ae4
+ (id)cssStringValue:(double)arg1 unit:(int)arg2;	// IMP=0x00600000000aac10
- (void)addNumber:(double)arg1 unit:(int)arg2;	// IMP=0x0000000000462ba8
- (id)description;	// IMP=0x0000000000462b0c
- (id)cssString;	// IMP=0x0000000000145695
- (id)cssStringForName:(id)arg1;	// IMP=0x00000000000ac08b
- (int)compareValue:(id)arg1;	// IMP=0x00000000004629f7
- (int)unitType;	// IMP=0x0000000000100f1b
- (int)intValue;	// IMP=0x00000000004629e5
- (double)value;	// IMP=0x0000000000100f07
- (id)initWithNumber:(double)arg1 unit:(int)arg2;	// IMP=0x00000000000abf3b
- (id)initWithNumber:(double)arg1;	// IMP=0x0000000000131c04

@end

