//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableString;

@interface APSStatusPrinter : NSObject
{
    NSMutableString *_s;	// 8 = 0x8
    unsigned long long _indent;	// 16 = 0x10
}

+ (id)statusPrinter;	// IMP=0x00400000000977eb
- (void).cxx_destruct;	// IMP=0x0020000000097e09
- (id)description;	// IMP=0x0010000000097df3
- (void)appendDescription:(id)arg1 successRateWithSuccessCount:(unsigned long long)arg2 failureCount:(unsigned long long)arg3;	// IMP=0x0010000000097c13
- (void)appendDescription:(id)arg1 unsignedIntegerValue:(unsigned long long)arg2;	// IMP=0x0010000000097c01
- (void)appendDescription:(id)arg1 integerValue:(long long)arg2;	// IMP=0x0010000000097bef
- (void)appendDescription:(id)arg1 unsignedLongLongValue:(unsigned long long)arg2;	// IMP=0x0010000000097b88
- (void)appendDescription:(id)arg1 longLongValue:(long long)arg2;	// IMP=0x0010000000097b21
- (void)appendDescription:(id)arg1 intValue:(int)arg2;	// IMP=0x0010000000097b0c
- (void)appendDescription:(id)arg1 unsignedShortValue:(unsigned short)arg2;	// IMP=0x0010000000097af8
- (void)appendDescription:(id)arg1 timeIntervalValue:(double)arg2;	// IMP=0x0010000000097a59
- (void)appendDescription:(id)arg1 dateValue:(id)arg2;	// IMP=0x001000000009799d
- (void)appendDescription:(id)arg1 enabledValue:(_Bool)arg2;	// IMP=0x0010000000097924
- (void)appendDescription:(id)arg1 boolValue:(_Bool)arg2;	// IMP=0x00100000000978ab
- (void)appendDescription:(id)arg1 stringValue:(id)arg2;	// IMP=0x0010000000097818
- (void)popIndent;	// IMP=0x001000000009780e
- (void)pushIndent;	// IMP=0x0010000000097804
- (void)appendLine:(id)arg1;	// IMP=0x001000000009779b
- (id)lineWithDescription:(id)arg1;	// IMP=0x00100000000976b9
- (id)init;	// IMP=0x0010000000097663

@end

