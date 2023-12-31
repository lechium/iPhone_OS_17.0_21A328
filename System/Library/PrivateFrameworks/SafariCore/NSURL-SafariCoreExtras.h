//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (SafariCoreExtras)
+ (struct _NSRange)safari_hostAndPortRangeFromUserTypedString:(id)arg1;	// IMP=0x002000000006d22a
+ (void)safari_enumeratePossibleURLsForUserTypedString:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x002000000006cc6d
+ (id)safari_URLWithUserTypedString:(id)arg1;	// IMP=0x002000000006c86d
@property(readonly, copy, nonatomic) NSURL *safari_wellKnownChangePasswordURL;
@property(readonly, nonatomic) _Bool safari_isWellKnownChangePasswordURL;
@property(readonly, copy, nonatomic) NSURL *safari_URLByRemovingUserPasswordPathQueryAndFragment;
@property(readonly, nonatomic) _Bool safari_isEligibleforDirectSSO;
- (id)safari_URLByReplacingSchemeWithString:(id)arg1;	// IMP=0x001000000006da55
@property(readonly, nonatomic) _Bool safari_isHTTPFamilyURL;
@property(readonly, nonatomic) NSString *safari_displayNameForFile;
@property(readonly, nonatomic) NSURL *safari_canonicalURL;
- (_Bool)safari_hasSameSiteAsURL:(id)arg1;	// IMP=0x001000000006d6d5
- (_Bool)safari_hasSameOriginAsURL:(id)arg1 relaxingWWW:(_Bool)arg2;	// IMP=0x001000000006d429
- (_Bool)safari_hasSameOriginAsURL:(id)arg1;	// IMP=0x001000000006d415
- (_Bool)safari_isSubdomainOfDomain:(id)arg1;	// IMP=0x001000000006c9be
- (id)_labelsOfDomainWithoutWWWOrMSubdomains:(id)arg1;	// IMP=0x001000000006c898
@end

