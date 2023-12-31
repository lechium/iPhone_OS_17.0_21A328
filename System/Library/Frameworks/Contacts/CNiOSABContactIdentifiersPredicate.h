//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABContactIdentifiersPredicate
{
    _Bool _ignoreUnifiedIdentifiers;	// 24 = 0x18
}

@property(readonly) _Bool ignoreUnifiedIdentifiers; // @synthesize ignoreUnifiedIdentifiers=_ignoreUnifiedIdentifiers;
- (id)cn_ABQSLPredicateForAddressBook:(void *)arg1 fetchRequest:(id)arg2 error:(id *)arg3;	// IMP=0x000000000012a522
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;	// IMP=0x000000000012a40d
- (_Bool)cn_supportsEncodedFetching;	// IMP=0x000000000012a405
- (_Bool)cn_supportsNativeBatchFetch;	// IMP=0x000000000012a3f3
- (_Bool)cn_supportsNativeSorting;	// IMP=0x000000000012a3eb
- (id)initWithIdentifiers:(id)arg1 ignoreUnifiedIdentifiers:(_Bool)arg2;	// IMP=0x000000000012a38c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

