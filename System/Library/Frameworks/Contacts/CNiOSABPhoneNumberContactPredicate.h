//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABPhoneNumberContactPredicate
{
}

+ (id)countryCodeForPredicate:(id)arg1;	// IMP=0x0010000000141d31
+ (id)stringValueForPredicate:(id)arg1;	// IMP=0x0010000000141c76
- (id)cn_ABQSLPredicateForAddressBook:(void *)arg1 fetchRequest:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000141f9c
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;	// IMP=0x0000000000141dec
- (_Bool)cn_supportsEncodedFetching;	// IMP=0x0000000000141c6e
- (_Bool)cn_supportsNativeBatchFetch;	// IMP=0x0000000000141c66
- (_Bool)cn_supportsNativeSorting;	// IMP=0x0000000000141c5e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

