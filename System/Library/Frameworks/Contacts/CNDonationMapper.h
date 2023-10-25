//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactsEnvironment, CNDonationStore, NSString;

__attribute__((visibility("hidden")))
@interface CNDonationMapper : NSObject
{
    CNContactsEnvironment *_environment;	// 8 = 0x8
    CNDonationStore *_donationStore;	// 16 = 0x10
}

+ (id)mapperIdentifier;	// IMP=0x0010000000127fef
+ (id)log;	// IMP=0x0010000000127f93
- (void).cxx_destruct;	// IMP=0x000000000012882c
@property(readonly, nonatomic) CNDonationStore *donationStore; // @synthesize donationStore=_donationStore;
@property(readonly, nonatomic) CNContactsEnvironment *environment; // @synthesize environment=_environment;
- (id)contactCountForFetchRequest:(id)arg1 error:(id *)arg2;	// IMP=0x000000000012880b
- (id)defaultContainerIdentifier;	// IMP=0x0000000000128803
- (id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001287f6
- (id)groupsMatchingPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001287e9
- (id)accountsMatchingPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001287dc
- (id)policyWithDescription:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001287d4
- (id)policyForContainerWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000128744
- (id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000128737
- (id)containersMatchingPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x000000000012872a
- (_Bool)executeSaveRequest:(id)arg1 response:(id *)arg2 authorizationContext:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000128722
- (_Bool)executeSaveRequest:(id)arg1 error:(id *)arg2;	// IMP=0x000000000012871a
- (id)meContactIdentifiers:(id *)arg1;	// IMP=0x00000000001286b3
- (id)contactObservableForFetchRequest:(id)arg1;	// IMP=0x00000000001281fe
@property(readonly) _Bool shouldLogContactsAccess;
- (id)authorizedKeysForContactKeys:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001281e9
- (_Bool)requestAccessForEntityType:(long long)arg1 error:(id *)arg2;	// IMP=0x00000000001281e1
- (void)requestAccessForEntityType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001281cc
- (id)initWithDonationStore:(id)arg1 environment:(id)arg2;	// IMP=0x0000000000128123
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000000127ffc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *legacyTetheredSyncComputerAnchor;
@property(retain, nonatomic) NSString *legacyTetheredSyncDeviceAnchor;
@property(readonly, nonatomic) _Bool shouldCaptureMetricsForQueries;
@property(readonly, nonatomic) _Bool shouldLogPrivacyAccountingAccessEvents;
@property(readonly) Class superclass;

@end
