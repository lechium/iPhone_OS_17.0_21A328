//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPolicy.h"

__attribute__((visibility("hidden")))
@interface CNiOSABPolicy : CNPolicy
{
    void *_iOSABPolicy;	// 8 = 0x8
    void *_fakePerson;	// 16 = 0x10
    _Bool _abSourceIsContentReadonly;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000ac778
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ac807
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ac780
- (_Bool)isEqualToPolicy:(id)arg1;	// IMP=0x00000000000ac742
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ac6e5
- (_Bool)shouldRemoveContact:(id)arg1;	// IMP=0x00000000000ac6ad
- (_Bool)shouldAddContact:(id)arg1;	// IMP=0x00000000000ac675
- (_Bool)shouldSetValue:(id)arg1 property:(id)arg2 contact:(id)arg3 replacementValue:(id *)arg4;	// IMP=0x00000000000ac4f0
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1 label:(id)arg2;	// IMP=0x00000000000ac37e
- (id)_orderedLabels:(id)arg1 withOrder:(id)arg2;	// IMP=0x00000000000ac286
- (id)supportedLabelsForContactProperty:(id)arg1;	// IMP=0x00000000000abf1e
- (unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1;	// IMP=0x00000000000abe1d
- (_Bool)isReadonly;	// IMP=0x00000000000abe0d
- (void)dealloc;	// IMP=0x00000000000abdbc
- (id)initWithAddressBookPolicy:(void *)arg1 readOnly:(_Bool)arg2;	// IMP=0x00000000000abd40

@end

