//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABContainerExternalIdentifierPredicate : CNPredicate
{
    NSString *_externalIdentifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000054e01
- (void).cxx_destruct;	// IMP=0x0000000000055130
@property(readonly, copy, nonatomic) NSString *externalIdentifier; // @synthesize externalIdentifier=_externalIdentifier;
@property(readonly, copy) NSString *description;
- (_Bool)includesDisabledContainers;	// IMP=0x000000000005504b
- (struct __CFArray *)cn_copyContainersInAddressBook:(void *)arg1 error:(struct __CFError **)arg2;	// IMP=0x0000000000054f3e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000054ebe
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000054e09
- (id)initWithExternalIdentifier:(id)arg1;	// IMP=0x0000000000054d48

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

