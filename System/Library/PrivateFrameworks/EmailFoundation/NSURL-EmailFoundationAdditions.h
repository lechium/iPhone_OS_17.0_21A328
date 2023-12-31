//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@class EFPathComponent, NSString;

@interface NSURL (EmailFoundationAdditions)
+ (id)ef_yahooAuthAllowedCharacterSet;	// IMP=0x002000000002d2c6
+ (id)ef_gmailAuthAllowedCharacterSet;	// IMP=0x002000000002d254
+ (id)ef_messageAllowedCharacterSet;	// IMP=0x002000000002d1e2
+ (id)ef_accountAllowedCharacterSet;	// IMP=0x002000000002d170
+ (id)ef_defaultAllowedCharacterSet;	// IMP=0x002000000002d0fe
+ (id)ef_urlWithString:(id)arg1;	// IMP=0x002000000002c450
- (id)ef_URLByAppendingTimestampedPathComponent:(id)arg1 withExtension:(id)arg2;	// IMP=0x001000000002cf54
- (id)ef_urlByRemovingPrefixFromScheme:(id)arg1;	// IMP=0x001000000002ce26
- (id)ef_urlByAddingPrefixToScheme:(id)arg1;	// IMP=0x001000000002cd08
- (id)ef_urlByReplacingSchemeWithScheme:(id)arg1;	// IMP=0x001000000002cc54
- (id)ef_hostNilForEmpty;	// IMP=0x001000000002cbed
@property(readonly, nonatomic) NSString *ef_highLevelDomain;
@property(readonly, nonatomic) NSURL *ef_urlByAddingSchemeIfNeeded;
@property(readonly, nonatomic) _Bool ef_isEligibleForRichLink;
- (_Bool)ef_isHTTPOrHTTPSURL;	// IMP=0x001000000002c7af
- (_Bool)ef_hasHost:(id)arg1;	// IMP=0x001000000002c723
- (_Bool)ef_hasScheme:(id)arg1;	// IMP=0x001000000002c697
@property(readonly, nonatomic) NSURL *ef_caseNormalizedURL;
- (id)ef_URLByAppendingPathComponent:(id)arg1 isDirectory:(_Bool)arg2;	// IMP=0x0010000000034cc2
- (id)ef_URLByAppendingPathComponent:(id)arg1;	// IMP=0x0010000000034c4c
@property(readonly, nonatomic) EFPathComponent *ef_lastPathComponent;
@end

