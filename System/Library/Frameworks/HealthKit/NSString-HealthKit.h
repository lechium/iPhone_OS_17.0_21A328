//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (HealthKit)
+ (id)hk_randomStringOfLength:(long long)arg1;	// IMP=0x00500000001caffc
- (id)hk_MD5HashAsUUID;	// IMP=0x00100000001cb65b
- (id)hk_MD5Hash;	// IMP=0x00100000001cb552
- (id)hk_SHA512Hash;	// IMP=0x00100000001cb443
- (id)hk_SHA384Hash;	// IMP=0x00100000001cb33a
- (id)hk_SHA256Hash;	// IMP=0x00100000001cb231
- (id)hk_SHA224Hash;	// IMP=0x00100000001cb128
- (_Bool)hk_isBetweenLowerBuildVersion:(id)arg1 upperBuildVersion:(id)arg2;	// IMP=0x00100000001caf10
- (long long)hk_compareBuildVersionWithString:(id)arg1;	// IMP=0x001000000001e402
- (id)hk_stringIndentedBy:(unsigned long long)arg1 prefix:(id)arg2;	// IMP=0x00100000001cae28
- (id)hk_stringIndentedBy:(unsigned long long)arg1;	// IMP=0x00100000001cae14
- (_Bool)hk_isBase64;	// IMP=0x00100000001cad14
- (id)hk_localizedFirstWordCapitalizedString;	// IMP=0x00100000001cacae
- (id)hk_firstWordCapitalizedStringWithLocale:(id)arg1;	// IMP=0x00100000001caa73
- (_Bool)hk_isCaseInsensitiveSubstringInString:(id)arg1;	// IMP=0x00100000001caa4b
- (id)hk_stringByAppendingKeyPathComponent:(id)arg1;	// IMP=0x00100000001ca940
- (id)hk_stringByUnescapingJSONCharactersForDisplay;	// IMP=0x00100000001ca8cc
- (id)hk_stringByReplacingSpacesWithString:(id)arg1;	// IMP=0x00100000001ca75a
- (id)hk_stringByNormalizingSpaces;	// IMP=0x00100000001ca741
- (id)hk_stringByRemovingCharactersInSet:(id)arg1;	// IMP=0x00100000001ca5c5
- (id)hk_trimWhitespaceAndNewlines;	// IMP=0x00100000001ca55f
- (id)hk_stripLeadingTrailingWhitespace;	// IMP=0x00100000001ca4f9
- (_Bool)hk_isValidPurposeString;	// IMP=0x00100000001ca452
- (id)hk_copyNonEmptyString;	// IMP=0x00100000000108c4
- (_Bool)hk_hasMetadataKeyPathPrefix;	// IMP=0x001000000027300c
- (_Bool)hk_hasDevicePropertyKeyPathPrefix;	// IMP=0x0010000000272ff3
@end

