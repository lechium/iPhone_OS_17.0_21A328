//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNPostalAddress.h>

@interface CNPostalAddress (PKAdditions)
+ (id)_CNKeyFromABKey:(id)arg1;	// IMP=0x00600000005da2bf
+ (id)_ABKeyFromCNKey:(id)arg1;	// IMP=0x00600000005da16d
+ (id)postalAddressFromWebServiceDictionaryRepresentation:(id)arg1;	// IMP=0x00600000005d9e4c
+ (id)backwardsCompatiblePostalAddressDictionary:(id)arg1;	// IMP=0x00600000005d9b91
- (id)_countryCodeForCountryName:(id)arg1;	// IMP=0x00100000005d9956
- (id)suggestedCountryCode;	// IMP=0x00100000005d98f7
- (id)redactedPostalAddress;	// IMP=0x00100000005d9723
- (id)redactedStreetAddress;	// IMP=0x00100000005d96cf
- (id)webServiceDictionaryRepresentation;	// IMP=0x00100000005d942a
- (id)backwardsCompatibleDictionaryRepresentation;	// IMP=0x00100000005d9114
@end
