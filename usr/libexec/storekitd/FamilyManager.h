//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSLock, NSNumber;
@protocol OS_dispatch_queue;

@interface FamilyManager : NSObject
{
    NSNumber *_currentAccountDSID;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatch;	// 16 = 0x10
    NSArray *_familyAccountIDs;	// 24 = 0x18
    NSArray *_familyMembers;	// 32 = 0x20
    double _lastFamilyCheck;	// 40 = 0x28
    NSLock *_lock;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 56 = 0x38
}

+ (id)sharedInstance;	// IMP=0x002000000005834b
- (void).cxx_destruct;	// IMP=0x002000000005a49e
- (void)_updateFamilyInfoFollowingAccountChangeIfNeeded:(id)arg1;	// IMP=0x0010000000059c84
- (void)_handleAccountChangedNotification;	// IMP=0x0010000000059b69
- (id)_familyMembersSuppressDialogs:(_Bool)arg1 logKey:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000059b0c
- (void)_clearFamily;	// IMP=0x00100000000599d9
- (_Bool)_bootstrapFamilyIfNeededSuppressDialogs:(_Bool)arg1 logKey:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000059163
- (void)_beginObservingAccountChangeNotification;	// IMP=0x0010000000059082
- (void)performMigration;	// IMP=0x0010000000058acd
- (id)familyMembers;	// IMP=0x0010000000058a62
- (id)fetchFamilyAccountIDsSuppressDialogs:(_Bool)arg1;	// IMP=0x00100000000589d2
- (id)familyAccountIDs;	// IMP=0x00100000000589be
- (_Bool)askToBuyEnabledForActiveAccountWithLogKey:(id)arg1 lookupFamilyInfoIfNeeded:(_Bool)arg2 authIfNeeded:(_Bool)arg3 hadFamilyInfo:(_Bool *)arg4 error:(id *)arg5;	// IMP=0x00100000000583d0
- (id)init;	// IMP=0x001000000005829e

@end

