//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSArray, NSDate, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface VSPersistentSubscription : NSManagedObject
{
}

+ (id)keyPathsForValuesAffectingDerivedSubscriptionInfo;	// IMP=0x00600000000128b5
- (_Bool)validateBillingIdentifier:(id *)arg1 error:(id *)arg2;	// IMP=0x00000000000144f5
- (_Bool)validateTierIdentifiers:(id *)arg1 error:(id *)arg2;	// IMP=0x000000000001440b
- (_Bool)validateSubscriberIdentifierHash:(id *)arg1 error:(id *)arg2;	// IMP=0x00000000000143ef
- (_Bool)validateExpirationDate:(id *)arg1 error:(id *)arg2;	// IMP=0x00000000000143d3
- (_Bool)validateModificationDate:(id *)arg1 error:(id *)arg2;	// IMP=0x0000000000014370
- (_Bool)validateCreationDate:(id *)arg1 error:(id *)arg2;	// IMP=0x000000000001430d
- (_Bool)validateAccessLevel:(id *)arg1 error:(id *)arg2;	// IMP=0x00000000000142f1
- (void)didChangeValueForKey:(id)arg1;	// IMP=0x0000000000014197
- (void)awakeFromFetch;	// IMP=0x00000000000140c5
- (void)awakeFromInsert;	// IMP=0x0000000000013fe0
@property(copy, nonatomic) NSArray *tierIdentifiers; // @dynamic tierIdentifiers;
@property(copy, nonatomic) NSString *billingIdentifier; // @dynamic billingIdentifier;
@property(copy, nonatomic) NSString *subscriberIdentifierHash; // @dynamic subscriberIdentifierHash;
@property(copy, nonatomic) NSDate *mostRecentSaveDate; // @dynamic mostRecentSaveDate;
@property(copy, nonatomic) NSDate *expirationDate; // @dynamic expirationDate;
@property(copy, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(copy, nonatomic) NSNumber *accessLevel; // @dynamic accessLevel;
@property(copy, nonatomic) NSString *providedSubscriptionInfo; // @dynamic providedSubscriptionInfo;
- (void)_deriveValuesFromProvidedInfo:(id)arg1;	// IMP=0x0000000000012ed1
- (void)_updateDerivedSubscriptionInfo;	// IMP=0x00000000000129ad
- (_Bool)_validateNullableValue:(id *)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000126e6
- (void)_setNullResettableValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000001260f

// Remaining properties
@property(copy, nonatomic) NSString *derivedSubscriptionInfo; // @dynamic derivedSubscriptionInfo;
@property(copy, nonatomic) NSString *sourceIdentifier; // @dynamic sourceIdentifier;
@property(copy, nonatomic) NSNumber *sourceKind; // @dynamic sourceKind;

@end

