//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@class NSData;

@interface NSString (WBSCloudBookmarksRecordNamingExtras)
+ (id)safari_stringAsHexWithBuffer:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00200000000469e2
+ (id)safari_stringAsHexWithData:(id)arg1;	// IMP=0x002000000004694e
+ (void)safari_reverseEnumerateComponents:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0020000000045de4
@property(readonly, nonatomic) _Bool safari_isSpecialFolderRecordName;
- (id)safari_fixedStringByExpandingTildeInPathToUserHomeDirectory;	// IMP=0x001000000004a228
- (id)safari_stringByDeletingTrailingSlash;	// IMP=0x001000000004a1c2
- (id)safari_stringByDeletingStartingSlash;	// IMP=0x001000000004a16b
@property(readonly, nonatomic) NSString *safari_stringByRemovingWrappingParenthesis;
@property(readonly, nonatomic) NSString *safari_stringByRemovingWrappingSingleQuotes;
- (unsigned long long)safari_indexOfFirstAppearanceOfCharacter:(unsigned short)arg1;	// IMP=0x0010000000049fc9
@property(readonly, nonatomic) _Bool safari_containsCJKCharacters;
@property(readonly, copy, nonatomic) NSString *safari_urlStringSuppressingHTTPFamilySchemeAndWWWSubdomain;
@property(readonly, copy, nonatomic) NSString *safari_urlStringForCompletionDeduplication;
@property(readonly, nonatomic) _Bool safari_allowsLooserMatchingInSearch;
@property(readonly, nonatomic) _Bool safari_isPrefixOfWwwDot;
- (id)safari_bestURLForUserTypedString;	// IMP=0x0010000000049d70
@property(readonly, copy, nonatomic) NSString *safari_highLevelDomainForUserTypedStringWhenAddingPasswordInPasswordManager;
@property(readonly, copy, nonatomic) NSString *safari_highLevelDomainForPasswordManager;
- (id)safari_bundleIdentifierFromApplicationIdentifier:(id *)arg1;	// IMP=0x0010000000049af7
- (unsigned long long)safari_numberOfComposedCharacters;	// IMP=0x00100000000499fa
- (_Bool)_safari_looksLikeWillRedirectToURLStringAfterAuthentication:(id)arg1 orHostAfterLogin:(id)arg2;	// IMP=0x00100000000492c7
- (_Bool)safari_looksLikeWillRedirectToHostAfterAuthentication:(id)arg1;	// IMP=0x00100000000492b0
- (_Bool)safari_looksLikeWillRedirectToURLStringAfterAuthentication:(id)arg1;	// IMP=0x001000000004929c
@property(readonly, copy, nonatomic) NSString *safari_suggestedFilenameFromTitleString;
@property(readonly, copy, nonatomic) NSString *safari_monogramString;
@property(readonly, copy, nonatomic) NSString *safari_stringByRemovingExcessWhitespace;
@property(readonly, copy, nonatomic) NSString *safari_possibleTopLevelDomainCorrectionForUserTypedString;
@property(readonly, copy, nonatomic) NSString *safari_stringByRemovingUnnecessaryCharactersFromUserTypedURLString;
@property(readonly, copy, nonatomic) NSString *safari_stringByRemovingWwwAndWildcardDotPrefixes;
@property(readonly, copy, nonatomic) NSString *safari_stringByRemovingWwwDotPrefix;
- (long long)safari_localizedCompareSortingEmptyStringAndNumericPrefixToEnd:(id)arg1;	// IMP=0x0010000000048646
@property(readonly, copy, nonatomic) NSString *safari_domainFromHost;
- (unsigned long long)safari_countOfString:(id)arg1;	// IMP=0x0010000000048453
@property(readonly, copy, nonatomic) NSString *safari_stringByRedactingBookmarkDAVServerID;
@property(readonly, nonatomic) _Bool safari_looksLikeEmailAddress;
@property(readonly, nonatomic) _Bool safari_looksLikeIPAddress;
- (id)safari_stringByRepeatingWithCount:(unsigned long long)arg1 joinedByString:(id)arg2;	// IMP=0x001000000004817a
- (id)safari_setOfAllSubstringsWithMinimumLength:(unsigned long long)arg1;	// IMP=0x0010000000048098
- (_Bool)safari_containsAllCharactersInString:(id)arg1;	// IMP=0x0010000000047f8f
- (_Bool)safari_isVersionStringBetweenVersionString:(id)arg1 andVersionString:(id)arg2;	// IMP=0x0010000000047ee6
- (_Bool)safari_isVersionStringGreaterThanOrEqualToVersionString:(id)arg1;	// IMP=0x0010000000047ec7
- (_Bool)safari_isVersionStringGreaterThanVersionString:(id)arg1;	// IMP=0x0010000000047ea8
@property(readonly, copy, nonatomic) NSString *safari_userVisibleSafariBundleVersionFromFullVersion;
@property(readonly, copy, nonatomic) NSString *safari_stringByNormalizingVersionString;
@property(readonly, copy, nonatomic) NSString *safari_stringByReplacingHomoglyphForSpaceWithSpace;
@property(readonly, nonatomic) _Bool safari_containsPeriodOrHomoglyphForPeriod;
- (id)safari_stringByReplacingCharactersInSet:(id)arg1 withString:(id)arg2;	// IMP=0x0010000000047a32
- (id)safari_stringByRemovingCharactersInSet:(id)arg1;	// IMP=0x0010000000047a09
- (_Bool)safari_anyComponentSeparatedByString:(id)arg1 hasLocalizedCaseInsensitivePrefix:(id)arg2;	// IMP=0x0010000000047872
- (_Bool)_safari_hasLocalizedPrefix:(id)arg1 withOptions:(unsigned long long)arg2;	// IMP=0x0010000000047795
- (_Bool)safari_hasLocalizedCaseAndDiacriticInsensitivePrefix:(id)arg1;	// IMP=0x001000000004777e
- (_Bool)safari_hasLocalizedCaseInsensitivePrefix:(id)arg1;	// IMP=0x0010000000047767
- (_Bool)safari_hasCaseInsensitiveSuffix:(id)arg1;	// IMP=0x00100000000476f9
- (_Bool)safari_hasCaseInsensitivePrefix:(id)arg1;	// IMP=0x001000000004768b
- (_Bool)safari_isCaseAndDiacriticInsensitiveEqualToString:(id)arg1;	// IMP=0x0010000000047627
- (_Bool)safari_isCaseInsensitiveEqualToString:(id)arg1;	// IMP=0x00100000000475c3
- (_Bool)safari_isHostOrSubdomainOfHost:(id)arg1;	// IMP=0x0010000000047517
- (id)safari_substringFromPrefix:(id)arg1;	// IMP=0x0010000000047471
- (_Bool)safari_hasPrefix:(id)arg1;	// IMP=0x0010000000047416
@property(readonly, copy, nonatomic) NSString *safari_separateResourceForkPath;
@property(readonly, copy, nonatomic) NSString *safari_simplifiedSiteNameForCredentialLookup;
@property(readonly, copy, nonatomic) NSString *safari_simplifiedUserVisibleURLString;
- (id)safari_simplifiedUserVisibleURLStringWithSimplifications:(unsigned long long)arg1 forDisplayOnly:(_Bool)arg2 simplifiedStringOffset:(unsigned long long *)arg3;	// IMP=0x0010000000046a91
@property(readonly, nonatomic) NSData *safari_base64DecodedData;
- (id)safari_highLevelDomainFromHostComponents:(id)arg1;	// IMP=0x001000000004689a
@property(readonly, copy, nonatomic) NSString *safari_highLevelDomainFromHost;
@property(readonly, copy, nonatomic) NSString *safari_filenameByFixingIllegalCharacters;
@property(readonly, nonatomic) _Bool safari_containsInteriorWhitespace;
@property(readonly, copy, nonatomic) NSString *safari_stringByTrimmingWhitespace;
@property(readonly, copy, nonatomic) NSString *safari_effectiveTopLevelDomainForHost;
- (id)safari_topLevelDomainUsingCFFromComponents:(id)arg1;	// IMP=0x0010000000046067
@end

