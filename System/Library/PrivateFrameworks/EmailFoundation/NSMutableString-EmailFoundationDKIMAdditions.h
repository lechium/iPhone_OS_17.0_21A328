//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableString.h>

@interface NSMutableString (EmailFoundationDKIMAdditions)
- (void)ef_appendQuotedSQLEscapedString:(id)arg1;	// IMP=0x0060000000020a06
- (void)ef_appendSQLEscapedString:(id)arg1;	// IMP=0x00600000000209a3
- (void)ef_trimTrailingCharactersInSet:(id)arg1;	// IMP=0x00600000000208c7
- (void)ef_trimLeadingCharactersInSet:(id)arg1;	// IMP=0x0060000000020817
- (void)ef_replaceContiguousSequencesOfCharactersInSet:(id)arg1 withString:(id)arg2;	// IMP=0x00600000000206f2
- (void)ef_removeCharactersInSet:(id)arg1 beforeOccurrencesOfString:(id)arg2;	// IMP=0x0060000000020524
- (void)ef_rfc5322Unfold;	// IMP=0x00600000000203f0
@end

