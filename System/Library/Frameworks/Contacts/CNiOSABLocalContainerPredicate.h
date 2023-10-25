//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABLocalContainerPredicate : CNPredicate
{
    _Bool _includesDisabledContainer;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000012955c
@property(readonly, nonatomic) _Bool includesDisabledContainer; // @synthesize includesDisabledContainer=_includesDisabledContainer;
- (_Bool)includesDisabledContainers;	// IMP=0x0000000000129780
@property(readonly, copy) NSString *description;
- (struct __CFArray *)cn_copyContainersInAddressBook:(void *)arg1 error:(struct __CFError **)arg2;	// IMP=0x0000000000129672
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001295f5
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000129564
- (id)initWithDisabledContainerIncluded:(_Bool)arg1;	// IMP=0x00000000001294bf
- (id)init;	// IMP=0x00000000001294ab
- (id)initWithPredicate:(id)arg1;	// IMP=0x0000000000129499

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
