//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EBFill : NSObject
{
}

+ (id)edFillFromXlDXf:(struct XlDXf *)arg1 edResources:(id)arg2;	// IMP=0x008000000014f7ff
+ (id)edFillFromXlXf:(struct XlXf *)arg1 edResources:(id)arg2;	// IMP=0x008000000011c70d
+ (int)convertEDPatternFillEnumToXl:(int)arg1;	// IMP=0x0080000000397b0d
+ (int)convertXlFillPatternEnumToED:(int)arg1;	// IMP=0x008000000011c97e
+ (_Bool)extractFromEDFill:(id)arg1 foreColorReference:(id *)arg2 backColorReference:(id *)arg3 fillPatternEnum:(int *)arg4;	// IMP=0x00800000003979f7

@end
