//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactKeyVector, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNAggregateKeyDescriptor : NSObject
{
    NSArray *_keyDescriptors;	// 8 = 0x8
    NSString *_privateDescription;	// 16 = 0x10
    CNContactKeyVector *_unauthorizedKeys;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000001029ac
+ (id)keyDescriptorWithKeyDescriptors:(id)arg1 description:(id)arg2;	// IMP=0x0010000000102891
- (void).cxx_destruct;	// IMP=0x000000000010393e
@property(retain, nonatomic) CNContactKeyVector *unauthorizedKeys; // @synthesize unauthorizedKeys=_unauthorizedKeys;
@property(copy, nonatomic) NSString *privateDescription; // @synthesize privateDescription=_privateDescription;
@property(copy, nonatomic) NSArray *keyDescriptors; // @synthesize keyDescriptors=_keyDescriptors;
- (void)_cn_setUnauthorizedKeys:(id)arg1;	// IMP=0x00000000001038df
- (id)_cn_unauthorizedKeys;	// IMP=0x00000000001038cd
- (void)_cn_executeGetterForRepresentedKeys:(CDUnknownBlockType)arg1;	// IMP=0x0000000000103772
- (id)_cn_ignorableKeys;	// IMP=0x0000000000103759
- (id)_cn_optionalKeys;	// IMP=0x0000000000103595
- (id)_cn_requiredKeys;	// IMP=0x00000000001033d1
- (id)_cn_recursiveDescriptionWithPrefix:(id)arg1;	// IMP=0x00000000001030c2
- (id)_recursiveDescription;	// IMP=0x00000000001030a9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010309e
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000102b5c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000102aef
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001029b4
- (id)initWithKeyDescriptors:(id)arg1 description:(id)arg2;	// IMP=0x00000000001028ff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

