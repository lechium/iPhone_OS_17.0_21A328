//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSNumberFormatter.h>

@class NSString;

@interface NSNumberFormatter (CRLAccessibility)
+ (id)crlaxLocalizedNumber:(id)arg1 numberStyle:(unsigned long long)arg2 maximumNumberOfDigitsAfterDecimalSeparator:(unsigned long long)arg3;	// IMP=0x00200000003d39ec
+ (id)crlaxLocalizedNumber:(id)arg1 numberStyle:(unsigned long long)arg2;	// IMP=0x00100000003d39d4
+ (id)crlaxLocalizedNumber:(id)arg1 maximumNumberOfDigitsAfterDecimalSeparator:(unsigned long long)arg2;	// IMP=0x00100000003d39ba
+ (id)crlaxLocalizedNumber:(id)arg1;	// IMP=0x00100000003d39a3
+ (id)crlaxLocalizedPercentage:(double)arg1 maximumNumberOfDigitsAfterDecimalSeparator:(unsigned long long)arg2;	// IMP=0x00100000003d3933
+ (id)crlaxLocalizedPercentage:(double)arg1;	// IMP=0x00100000003d391c
+ (id)crlaxLocalizedDouble:(double)arg1 maximumNumberOfDigitsAfterDecimalSeparator:(unsigned long long)arg2;	// IMP=0x00100000003d38b1
+ (id)crlaxLocalizedDouble:(double)arg1;	// IMP=0x00100000003d389a
+ (id)crlaxLocalizedUnsignedInteger:(unsigned long long)arg1;	// IMP=0x00100000003d3832
- (void)crl_setFormat:(id)arg1;	// IMP=0x0020000000ef0d40
@property(nonatomic, copy) NSString *crl_format;
- (struct _NSRange)crl_rangeOfNumericValueInString:(id)arg1;	// IMP=0x0010000000ef0a50
@property(nonatomic, readonly) NSNumberFormatter *crl_numberFormatterForAnalysis;
- (id)displayStringForIntegerValue:(long long)arg1;	// IMP=0x0010000000f58690
@end

