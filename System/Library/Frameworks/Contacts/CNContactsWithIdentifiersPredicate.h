//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CNContactsWithIdentifiersPredicate : CNPredicate
{
    NSMutableDictionary *_internalIdentifiers;	// 24 = 0x18
    NSArray *_identifiers;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000116da3
- (void).cxx_destruct;	// IMP=0x00000000001175d2
@property(readonly, copy, nonatomic) NSArray *identifiers; // @synthesize identifiers=_identifiers;
- (_Bool)cn_hasHighSpecificity;	// IMP=0x00000000001175b9
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001173cb
@property(readonly, copy) NSString *description;
- (id)internalIdentifiersForStoreWithIdentifier:(id)arg1;	// IMP=0x0000000000116f2a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000116ead
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000116dab
- (id)initWithIdentifiers:(id)arg1;	// IMP=0x0000000000116cda
- (id)suggestionsWithSortOrder:(long long)arg1 mutableObjects:(_Bool)arg2 service:(id)arg3 error:(id *)arg4;	// IMP=0x000000000003298c
- (_Bool)cn_supportsNativeSorting;	// IMP=0x0000000000032984
- (id)contactsFromDonationStore:(id)arg1;	// IMP=0x000000000006f2b6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

