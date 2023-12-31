//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@class ECEmailAddress;

@interface NSString (ECEmailAddressQuoting)
+ (id)ec_partialSurnames;	// IMP=0x001000000002eada
+ (id)ec_nameExtensions;	// IMP=0x001000000002e992
+ (void)__ec_extractFirstName:(id *)arg1 middleName:(id *)arg2 lastName:(id *)arg3 extension:(id *)arg4 fromString:(id)arg5;	// IMP=0x001000000002ddcd
@property(readonly, copy, nonatomic) NSString *ecemailaddress_uniquedDomain;
- (id)ecemailaddress_quotedString;	// IMP=0x001000000001604b
@property(readonly, copy, nonatomic) NSString *ecemailaddress_trimmedAndQuotedDisplayName;
@property(readonly, copy, nonatomic) NSString *ecemailaddress_trimmedAndQuotedLocalPart;
@property(readonly, nonatomic) NSString *stringValue;
@property(readonly, nonatomic) ECEmailAddress *emailAddressValue;
@property(readonly) _Bool ec_isHorizontalSeparator;
- (_Bool)ec_isSignature;	// IMP=0x0010000000028b8b
- (_Bool)ec_isForwardSeparator;	// IMP=0x0010000000028b23
- (_Bool)ec_isAttributionPrefix;	// IMP=0x0010000000028abb
- (_Bool)ec_isAttribution;	// IMP=0x0010000000028a53
- (_Bool)ec_isWhitespace;	// IMP=0x00100000000289e0
@property(readonly, copy) NSString *ec_messageIDSubstring;
- (id)ec_trimCommasSpacesQuotes;	// IMP=0x001000000002ec24
- (_Bool)ec_appearsToBeAnInitial;	// IMP=0x001000000002ebb8
- (id)ec_personNameComponents;	// IMP=0x001000000002dc5e
- (unsigned int)ec_parseHTMLEntityCharacter;	// IMP=0x0010000000044a6c
- (id)ec_parseHTMLEntity;	// IMP=0x00100000000445dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

