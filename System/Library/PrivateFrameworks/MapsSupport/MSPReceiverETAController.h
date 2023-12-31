//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MDNotificationCenter, MSPSharedTripBlocklist, MSPSharedTripRelay, NSArray, NSMutableDictionary, NSMutableOrderedSet, NSString, NSTimer;
@protocol MSPReceiverETAControllerDelegate, OS_os_transaction;

__attribute__((visibility("hidden")))
@interface MSPReceiverETAController : NSObject
{
    NSObject<OS_os_transaction> *_transaction;	// 8 = 0x8
    NSMutableDictionary *_sharedSessions;	// 16 = 0x10
    NSMutableDictionary *_sharedNavStates;	// 24 = 0x18
    NSMutableDictionary *_waitingNavStates;	// 32 = 0x20
    NSMutableOrderedSet *_orderedNavStateIdentifiers;	// 40 = 0x28
    MDNotificationCenter *_mapsNotificationCenter;	// 48 = 0x30
    MSPSharedTripRelay *_idsRelay;	// 56 = 0x38
    MSPSharedTripBlocklist *_blockedList;	// 64 = 0x40
    NSTimer *_cleanupTimer;	// 72 = 0x48
    id <MSPReceiverETAControllerDelegate> _delegate;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000000e074
@property(nonatomic) __weak id <MSPReceiverETAControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)groupSessionEnded:(id)arg1;	// IMP=0x000000000000def8
- (void)groupSession:(id)arg1 participantDidLeave:(id)arg2;	// IMP=0x000000000000def2
- (void)groupSession:(id)arg1 participantDidJoin:(id)arg2;	// IMP=0x000000000000deec
- (void)storageController:(id)arg1 updatedSharedTripGroupStorage:(id)arg2;	// IMP=0x000000000000db08
- (void)relay:(id)arg1 sharingClosed:(id)arg2;	// IMP=0x000000000000d946
- (void)relay:(id)arg1 receiveData:(id)arg2 info:(id)arg3 fromID:(id)arg4;	// IMP=0x000000000000d6aa
- (void)_cleanGroup:(id)arg1;	// IMP=0x000000000000d415
- (_Bool)_cleanUpNecessaryForGroup:(id)arg1;	// IMP=0x000000000000cfe3
- (void)_cleanupIfNecessary;	// IMP=0x000000000000ce67
- (void)_updateDelegateWithUpdateState:(id)arg1 to:(id)arg2 freshAvailable:(_Bool)arg3;	// IMP=0x000000000000ca86
- (void)_updateData:(id)arg1 forGroup:(id)arg2 fromID:(id)arg3;	// IMP=0x000000000000c1af
- (_Bool)_allowMessageWithState:(id)arg1 forGroup:(id)arg2 fromID:(id)arg3;	// IMP=0x000000000000bc4d
- (void)updateContacts;	// IMP=0x000000000000b826
- (void)_resolveContactIfNeeded:(id)arg1 fromId:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000b179
- (void)_showOrUpdateNotificationIfNeeded:(id)arg1;	// IMP=0x000000000000abca
- (void)purgeExpiredBlockedTripIdentifiers;	// IMP=0x000000000000ab53
- (void)clearBlockedTripIdentifiers;	// IMP=0x000000000000aadc
- (void)blockSharedTrip:(id)arg1;	// IMP=0x000000000000a7c7
- (_Bool)unsubscribeFromUpdatesToSharedTrip:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000a5e3
- (_Bool)subscribeToUpdatesToSharedTrip:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000a2a5
@property(readonly, nonatomic) NSArray *allTrips;
- (void)cleanTimer;	// IMP=0x000000000000a049
- (void)_setNotificationCenter:(id)arg1;	// IMP=0x000000000000a038
- (void)dealloc;	// IMP=0x0000000000009f6e
- (id)initWithRelay:(id)arg1;	// IMP=0x0000000000009d8d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

