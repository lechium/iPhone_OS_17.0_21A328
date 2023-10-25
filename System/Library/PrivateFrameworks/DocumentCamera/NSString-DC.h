//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (DC)
- (unsigned long long)dc_lengthOfLongestLine;	// IMP=0x003000000009735d
- (struct _NSRange)dc_paragraphRangeForRange:(struct _NSRange)arg1 contentEnd:(unsigned long long *)arg2;	// IMP=0x00300000000972ff
- (id)dc_stringByReplacingCharactersInStringMap:(id)arg1;	// IMP=0x0030000000096be2
- (id)dc_stringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;	// IMP=0x0030000000096a8e
- (id)dc_stringByReplacingNewlineCharactersWithWhiteSpace;	// IMP=0x0030000000096a21
- (id)dc_substringWithRange:(struct _NSRange)arg1;	// IMP=0x00300000000969ed
- (id)dc_substringToIndex:(unsigned long long)arg1;	// IMP=0x0030000000096963
- (id)dc_substringFromIndex:(unsigned long long)arg1;	// IMP=0x0030000000096932
- (void)dc_enumerateContentLineRangesInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x003000000009685e
- (void)dc_enumerateParagraphsInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0030000000096796
- (unsigned long long)dc_numberOfLines;	// IMP=0x0030000000096730
@property(readonly, nonatomic) NSString *dc_stringReplacingUnsafeHTMLCharacters;
@property(readonly, nonatomic) NSString *dc_sanitizedFilenameString;
@property(readonly, nonatomic) NSString *dc_whitespaceAndNewlineCoalescedString;
@property(readonly, nonatomic) NSString *dc_trimmedString;
@end
