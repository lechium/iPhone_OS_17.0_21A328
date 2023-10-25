//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABAccountForContainerPredicate : CNPredicate
{
    NSString *_containerIdentifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000006f684
- (void).cxx_destruct;	// IMP=0x000000000006f979
@property(readonly, copy, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
- (struct __CFArray *)cn_copyAccountsInAddressBook:(void *)arg1 error:(struct __CFError **)arg2;	// IMP=0x000000000006f7dd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006f760
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006f68c
- (id)initWithContainerIdentifier:(id)arg1;	// IMP=0x000000000006f5bb
- (id)initWithPredicate:(id)arg1;	// IMP=0x000000000006f5a7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
