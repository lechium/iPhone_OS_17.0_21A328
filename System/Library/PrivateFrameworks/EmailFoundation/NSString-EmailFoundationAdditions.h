//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@class EFSQLBinding, NSData, UTType;

@interface NSString (EmailFoundationAdditions)
+ (id)ef_emptyStringIfNil:(id)arg1;	// IMP=0x001000000002a744
+ (id)ef_stringByIsolatingDirectionalityForString:(id)arg1;	// IMP=0x001000000002a70f
+ (id)ef_UUID;	// IMP=0x0010000000028a9c
- (id)ef_UTF8ConvertibleString;	// IMP=0x001000000002c407
- (id)ef_pathByReplacingRelativePathWithFolderName:(id)arg1;	// IMP=0x001000000002bb6e
- (id)ef_filenameWithExtensionForMimeType:(id)arg1;	// IMP=0x001000000002ba01
- (id)ef_sanitizedFileName;	// IMP=0x001000000002b948
- (id)ef_stringByEscapingSingleQuotes;	// IMP=0x001000000002b928
@property(readonly) UTType *ef_declaredUTTypeFromExtension;
@property(readonly) _Bool ef_conformsToRFC822UTType;
@property(readonly) _Bool ef_conformsToIWorkUTType;
@property(readonly) _Bool ef_conformsToMarkupUTType;
- (id)ef_stringByEscapingForMessageBody;	// IMP=0x001000000002b60b
- (id)ef_stringByEscapingForXML;	// IMP=0x001000000002b601
- (_Bool)ef_isUnsignedIntegerString;	// IMP=0x001000000002b38e
- (struct _NSRange)ef_rangeOfWebAddressContainingRange:(struct _NSRange)arg1;	// IMP=0x001000000002b082
- (_Bool)ef_isWebAddress;	// IMP=0x001000000002af49
- (const void *)ef_lossyDefaultCStringBytes;	// IMP=0x001000000002add0
- (id)ef_stringByApplyingJavaScriptArguments:(id)arg1;	// IMP=0x001000000002aa6a
- (id)ef_stringByReplacingPercentEscapesUsingEncoding:(unsigned long long)arg1;	// IMP=0x001000000002a9a8
- (id)ef_stringByAddingPercentEscapesUsingEncoding:(unsigned long long)arg1;	// IMP=0x001000000002a8a8
- (id)ef_stringWithNoExtraSpaces;	// IMP=0x001000000002a75c
- (_Bool)ef_hasCaseInsensitivePrefix:(id)arg1;	// IMP=0x001000000002a6e7
- (_Bool)ef_caseInsensitiveIsEqualToString:(id)arg1;	// IMP=0x001000000002a6c9
- (id)ef_substringWithIndexes:(id)arg1;	// IMP=0x001000000002a4fa
- (id)ef_stringByEscapingSQLLikeSpecialCharactersWithEscapeCharater:(unsigned short)arg1;	// IMP=0x001000000002a24a
- (id)ef_quotedWordComponentsForLanguages:(id)arg1;	// IMP=0x0010000000029f9e
- (id)ef_wordComponentsForLocale:(id)arg1 minimumWordLength:(long long)arg2;	// IMP=0x0010000000029d6d
- (id)ef_wordComponentsForLocale:(id)arg1;	// IMP=0x0010000000029d49
- (id)ef_componentsSeparatedByString:(id)arg1 maxSeparations:(unsigned long long)arg2;	// IMP=0x0010000000029b4f
- (id)ef_stringByRFC5322Unfolding;	// IMP=0x0010000000029b07
- (id)ef_stringByTrimmingTrailingCharactersInSet:(id)arg1;	// IMP=0x0010000000029a35
- (id)ef_stringByTrimmingLeadingCharactersInSet:(id)arg1;	// IMP=0x00100000000299b9
- (id)ef_stringByReplacingContiguousSequencesOfCharactersInSet:(id)arg1 withString:(id)arg2;	// IMP=0x0010000000029917
- (id)ef_stringByRemovingCharactersInSet:(id)arg1 beforeOccurrencesOfString:(id)arg2;	// IMP=0x0010000000029875
- (id)ef_stringByRemovingCharactersInSet:(id)arg1;	// IMP=0x001000000002980a
- (id)ef_stringByTrimmingOuterQuotes;	// IMP=0x0010000000029722
- (id)ef_stringByRemovingQuotesForLanguages:(id)arg1;	// IMP=0x0010000000029485
- (id)ef_stringByRemovingTokenizedLinksUsingTokenizationHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000293d4
- (id)ef_stringByRemovingUnbalancedQuotesForLanguages:(id)arg1;	// IMP=0x0010000000029162
- (id)ef_stringByRemovingUnbalancedOpenQuote:(id)arg1 closeQuote:(id)arg2;	// IMP=0x0010000000028bb4
- (id)ef_stringByRemovingQuotedSubstringsForLocales:(id)arg1 tokenizationHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000028b07
- (const char *)ef_sqliteAllocatedStringWithHexFromUTF8;	// IMP=0x0010000000028815
- (id)_ef_sqliteFormattedWithFormatSpecifier:(const char *)arg1;	// IMP=0x0010000000028789
@property(readonly) _Bool ef_lastStrongDirectionalityIsLeftToRight;
@property(readonly) _Bool ef_firstStrongDirectionalityIsLeftToRight;
@property(readonly, copy) NSString *ef_sha256String;
@property(readonly, copy) NSData *ef_sha256Digest;
@property(readonly, copy) NSData *ef_md5Digest;
@property(readonly, copy) NSString *ef_quotedSQLEscapedString;
@property(readonly, copy) NSString *ef_SQLEscapedString;
@property(readonly, nonatomic) EFSQLBinding *ef_SQLBinding;
- (id)ef_SQLIsolatedExpression;	// IMP=0x0010000000042972
- (void)ef_renderSQLExpressionInto:(id)arg1;	// IMP=0x0010000000042957
@property(readonly, copy, nonatomic) NSString *ef_SQLExpression;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
