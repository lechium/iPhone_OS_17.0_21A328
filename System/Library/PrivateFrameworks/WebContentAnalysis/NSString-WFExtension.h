//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (WFExtension)
+ (id)WF_stringFromArray:(id)arg1;	// IMP=0x0050000000001a98
+ (id)WF_ignorableCharacterSet;	// IMP=0x00500000000019bb
- (id)WF_stringWithMostSignificatDomainPart;	// IMP=0x0010000000002189
- (_Bool)_isIPv4DomainAddress;	// IMP=0x00100000000020ef
- (id)WF_stringByProperlyFixingPercentEscapesUsingEncoding:(unsigned long long)arg1;	// IMP=0x00100000000020b0
- (long long)WF_numericCompare:(id)arg1;	// IMP=0x0010000000002068
- (id)WF_fuzzyStringWithWordLength:(int)arg1;	// IMP=0x0010000000001fc0
- (id)WF_stringByConvertingSpacesInHTMLSpaces;	// IMP=0x0010000000001fa0
- (id)WF_stringByReplacingString:(id)arg1 withString:(id)arg2;	// IMP=0x0010000000001ed3
- (id)WF_stringByEscapingPrintfArguments;	// IMP=0x0010000000001eb3
- (id)WF_stringByRemovingWord:(id)arg1;	// IMP=0x0010000000001da9
- (struct _NSRange)WF_rangeOfWord:(id)arg1;	// IMP=0x0010000000001c29
- (_Bool)WF_containsWord:(id)arg1;	// IMP=0x0010000000001c06
- (_Bool)WF_containsString:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0010000000001be3
- (_Bool)WF_containsString:(id)arg1;	// IMP=0x0010000000001bcc
@end

