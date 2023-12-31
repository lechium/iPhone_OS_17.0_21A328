//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNMockContactsLogger : NSObject
{
}

- (void)failedToApplyContactUpdateOfKind:(const char *)arg1 value:(id)arg2 property:(id)arg3 error:(id)arg4;	// IMP=0x00000000001227a3
- (void)deletePosterRecentsMetadataRequestFailed:(id)arg1;	// IMP=0x000000000012279d
- (void)deleteImageRecentsMetadataRequestFailed:(id)arg1;	// IMP=0x0000000000122797
- (void)setContactImageDataZeroCropRect:(id)arg1 format:(const char *)arg2;	// IMP=0x0000000000122791
- (void)setContactImageData:(id)arg1 format:(const char *)arg2 cropRect:(struct CGRect)arg3;	// IMP=0x000000000012278b
- (void)removeContactImageData;	// IMP=0x0000000000122785
- (void)setContactImageData:(id)arg1;	// IMP=0x000000000012277f
- (void)applyContactUpdateOfKind:(const char *)arg1 value:(id)arg2 property:(id)arg3;	// IMP=0x0000000000122779
- (void)postingNotificationWithName:(id)arg1;	// IMP=0x0000000000122773
- (void)XPCConnectionWasInterrupted;	// IMP=0x000000000012276d
- (void)XPCConnectionWasInvalidated;	// IMP=0x0000000000122767
- (void)errorWhenQueryingTetheredSyncData:(id)arg1;	// IMP=0x0000000000122761
- (void)internalError:(id)arg1;	// IMP=0x000000000012275b
- (void)SPIUsageLackingEntitlementRejectedForPID:(int)arg1;	// IMP=0x0000000000122755
- (void)SPIUsageLackingEntitlementGrantedForPID:(int)arg1;	// IMP=0x000000000012274f
- (void)serviceError:(id)arg1;	// IMP=0x0000000000122749
- (void)changedMeContact:(id)arg1;	// IMP=0x0000000000122743
- (void)updatingContact:(id)arg1;	// IMP=0x000000000012273d
- (void)deletingContact:(id)arg1;	// IMP=0x0000000000122737
- (void)addingContacts:(id)arg1 toContainerWithIdentifier:(id)arg2;	// IMP=0x0000000000122731
- (void)saveRequestFailed:(id)arg1;	// IMP=0x000000000012272b
- (void)saveRequestInvalid:(id)arg1;	// IMP=0x0000000000122725
- (void)didFetchEncodedContacts:(id)arg1 error:(id)arg2;	// IMP=0x000000000012271f
- (void)didFetchContacts:(id)arg1 error:(id)arg2;	// IMP=0x0000000000122719
- (void)fetchEncodedContactsMatchingPredicate:(id)arg1 unifyResults:(_Bool)arg2 keysToFetch:(id)arg3;	// IMP=0x0000000000122713
- (void)fetchContactsProgressivelyMatchingPredicate:(id)arg1 unifyResults:(_Bool)arg2 keysToFetch:(id)arg3;	// IMP=0x000000000012270d
- (void)fetchContactsMatchingPredicate:(id)arg1 unifyResults:(_Bool)arg2 keysToFetch:(id)arg3;	// IMP=0x0000000000122707
- (void)contactsAccessWasDeniedWithError:(id)arg1;	// IMP=0x0000000000122701
- (void)contactsAccessWasGranted;	// IMP=0x00000000001226fb
- (void)requestAuthorizationWasDenied;	// IMP=0x00000000001226f5
- (void)accessAuthorizationStatusWasDenied;	// IMP=0x00000000001226ef
- (void)requestingExtensionCommand:(CDUnknownBlockType)arg1;	// IMP=0x00000000001226d4
- (void)postingNotification:(CDUnknownBlockType)arg1;	// IMP=0x00000000001226b9
- (void)servicingContactsRequest:(CDUnknownBlockType)arg1;	// IMP=0x000000000012269e
- (void)settingDefaultAccount:(CDUnknownBlockType)arg1;	// IMP=0x0000000000122683
- (void)resettingSortDataIfNeeded:(CDUnknownBlockType)arg1;	// IMP=0x0000000000122668
- (void)clearingChangeHistory:(CDUnknownBlockType)arg1;	// IMP=0x000000000012264d
- (void)fetchingChangeHistory:(CDUnknownBlockType)arg1;	// IMP=0x0000000000122632
- (void)unregisteringForChangeHistory:(CDUnknownBlockType)arg1;	// IMP=0x0000000000122617
- (void)registeringForChangeHistory:(CDUnknownBlockType)arg1;	// IMP=0x00000000001225fc
- (void)saving:(CDUnknownBlockType)arg1;	// IMP=0x00000000001225e1
- (void)fetchingDefaultContainerIdentifier:(CDUnknownBlockType)arg1;	// IMP=0x00000000001225c6
- (void)fetchingContainers:(CDUnknownBlockType)arg1;	// IMP=0x00000000001225ab
- (void)fetchingGroups:(CDUnknownBlockType)arg1;	// IMP=0x0000000000122590
- (void)fetchingContactsBatch:(CDUnknownBlockType)arg1;	// IMP=0x0000000000122575
- (void)fetchingContactIdentifierWithMatchingDictionary:(CDUnknownBlockType)arg1;	// IMP=0x000000000012255a
- (void)fetchingContactWithUserActivity:(CDUnknownBlockType)arg1;	// IMP=0x000000000012253f
- (void)fetchingContacts:(CDUnknownBlockType)arg1;	// IMP=0x0000000000122524
- (void)fetchingContactSectionCounts:(CDUnknownBlockType)arg1;	// IMP=0x0000000000122509
- (void)fetchingContactCount:(CDUnknownBlockType)arg1;	// IMP=0x00000000001224ee
- (void)changingMeContact:(CDUnknownBlockType)arg1;	// IMP=0x00000000001224d3
- (void)fetchingMeContactIdentifier:(CDUnknownBlockType)arg1;	// IMP=0x00000000001224b8
- (void)requestingAccessForContacts:(CDUnknownBlockType)arg1;	// IMP=0x000000000012249d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

