//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDActionSet, NSArray, NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDAction : HMFObject
{
    NSUUID *_uuid;	// 8 = 0x8
    HMDActionSet *_actionSet;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000079d620
+ (id)logCategory;	// IMP=0x001000000079d5f0
+ (id)actionWithDictionaryRepresentation:(id)arg1 home:(id)arg2;	// IMP=0x001000000079d5e8
- (void).cxx_destruct;	// IMP=0x000000000079d5b9
@property(nonatomic) __weak HMDActionSet *actionSet; // @synthesize actionSet=_actionSet;
@property(copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (id)attributeDescriptions;	// IMP=0x000000000079d440
- (void)configureWithHome:(id)arg1;	// IMP=0x000000000079d43a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000079d36e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000079d188
- (id)logIdentifier;	// IMP=0x000000000079d138
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x000000000079d132
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x000000000079cf67
- (id)modelBackedObjects;	// IMP=0x000000000079cf07
- (id)backingStoreObjectsWithChangeType:(unsigned long long)arg1 version:(long long)arg2;	// IMP=0x000000000079ce6f
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;	// IMP=0x000000000079cdc9
@property(readonly, copy, nonatomic) NSUUID *modelParentIdentifier;
@property(readonly, copy, nonatomic) NSUUID *modelIdentifier;
@property(readonly) Class modelClass;
@property(readonly) _Bool isUnsecuringAction;
- (_Bool)isCompatibleWithAction:(id)arg1;	// IMP=0x000000000079cc5d
- (_Bool)isAssociatedWithAccessory:(id)arg1;	// IMP=0x000000000079cba9
@property(readonly, copy) NSArray *associatedAccessories;
@property(readonly) unsigned long long entitlementsForNotification;
@property(readonly) _Bool requiresDeviceUnlock;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 uuid:(id)arg2 parentUUID:(id)arg3;	// IMP=0x000000000079ca60
- (id)modelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x000000000079ca49
- (void)executeWithSource:(unsigned long long)arg1 clientName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000079c985
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, nonatomic) NSString *stateDump;
@property(readonly) unsigned long long type;
- (void)updateActionSetIfNil:(id)arg1;	// IMP=0x000000000079c6ce
- (id)initWithUUID:(id)arg1 actionSet:(id)arg2;	// IMP=0x000000000079c62c
- (id)init;	// IMP=0x000000000079c584

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
