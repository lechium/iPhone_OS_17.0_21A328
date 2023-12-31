//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSPredicate, NSSet;

__attribute__((visibility("hidden")))
@interface HMDBulletinNotificationRegistration : HMFObject
{
    NSSet *_conditions;	// 8 = 0x8
}

+ (_Bool)doesTypeMatch:(id)arg1 against:(id)arg2;	// IMP=0x00100000002a8a83
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000002a8a7b
+ (id)type;	// IMP=0x00100000002a89d3
- (void).cxx_destruct;	// IMP=0x00000000002a85fe
@property(readonly, copy) NSSet *conditions; // @synthesize conditions=_conditions;
- (id)attributeDescriptions;	// IMP=0x00000000002a851c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002a8346
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002a82d6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002a82cb
- (unsigned long long)hash;	// IMP=0x00000000002a8287
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002a81b8
- (id)serializedRegistrationForRemoteMessage;	// IMP=0x00000000002a7fef
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000002a7ed4
@property(readonly, copy) NSPredicate *predicate;
- (id)initWithConditions:(id)arg1;	// IMP=0x00000000002a7d82

@end

