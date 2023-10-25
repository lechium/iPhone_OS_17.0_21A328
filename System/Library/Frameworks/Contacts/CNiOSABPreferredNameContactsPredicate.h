//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABPreferredNameContactsPredicate : CNPredicate
{
    struct _NSRange _range;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001411e0
@property(readonly) struct _NSRange range; // @synthesize range=_range;
@property(readonly, copy) NSString *description;
- (id)cn_ABQSLPredicateForAddressBook:(void *)arg1 fetchRequest:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000141424
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;	// IMP=0x0000000000141381
- (_Bool)cn_supportsEncodedFetching;	// IMP=0x0000000000141379
- (_Bool)cn_supportsNativeBatchFetch;	// IMP=0x0000000000141371
- (_Bool)cn_supportsNativeSorting;	// IMP=0x0000000000141369
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001412ba
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001411e8
- (id)initWithRange:(struct _NSRange)arg1;	// IMP=0x0000000000141174

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
