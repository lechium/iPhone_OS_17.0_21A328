//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtCC8Freeform15CRLBoardLibrary9BoardInfo : _TtCs12_SwiftObject
{
    MISSING_TYPE *editingCoordinator;	// 16 = 0x10
    MISSING_TYPE *viewControllers;	// 24 = 0x18
    MISSING_TYPE *headlessControllers;	// 32 = 0x20
    MISSING_TYPE *subscriptionSet;	// 40 = 0x28
    MISSING_TYPE *syncObserver;	// 48 = 0x30
    MISSING_TYPE *didSetUp;	// 56 = 0x38
    MISSING_TYPE *didTearDown;	// 57 = 0x39
    MISSING_TYPE *propertyAccessLock;	// 64 = 0x40
    MISSING_TYPE *updateLastActivityPublisher;	// 72 = 0x48
    MISSING_TYPE *_unsafe_shouldUpdateLastActivity;	// 80 = 0x50
    MISSING_TYPE *_unsafe_lastActivityTime;	// 0 = 0x0
    MISSING_TYPE *hasPausedIncomingDatabaseUpdate;	// 1919052108 = 0x7262694c
    MISSING_TYPE *didLockOnPausingOutgoingRealTimeChanges;	// 0 = 0x0
    MISSING_TYPE *databaseSaveObserverForRealTimeSync;	// 0 = 0x0
    MISSING_TYPE *realTimeSyncSession;	// 0 = 0x0
    MISSING_TYPE *onlyShowJoinLeavePlacardsAfterThisTime;	// 0 = 0x0
    MISSING_TYPE *cloudQuotaExceededAlertMinimumLastShowDateInterval;	// 0 = 0x0
    MISSING_TYPE *promptCloudQuotaExceededTask;	// 0 = 0x0
    MISSING_TYPE *reloadBoardTask;	// 0 = 0x0
}

- (void)currentUserGainedEditPermissions;	// IMP=0x0040000000ea2c00
- (void)currentUserLostEditPermissions;	// IMP=0x0010000000ea2bf0
- (void)shareStateUpdatedWithShare:(id)arg1;	// IMP=0x0010000000ea2ba0
- (void)activeParticipantListChangedNotification:(id)arg1;	// IMP=0x0010000000e99f60

@end

