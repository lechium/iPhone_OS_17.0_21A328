//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSManagedObjectContext, NSMutableDictionary, NSSet, NSString, RMPersistentHistoryNotifier, RMSubscribedStatusKeyPathUpdater;
@protocol OS_dispatch_queue, RMPushControllerDelegate;

@interface RMPushController : NSObject
{
    NSMutableDictionary *_connectionByEnvironmentName;	// 8 = 0x8
    NSObject *_pushTokenByEnvironmentNameLock;	// 16 = 0x10
    NSDictionary *_pushTokenByEnvironmentName;	// 24 = 0x18
    NSManagedObjectContext *_context;	// 32 = 0x20
    RMPersistentHistoryNotifier *_persistentHistoryNotifier;	// 40 = 0x28
    RMSubscribedStatusKeyPathUpdater *_subscribedStatusKeyPathUpdater;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_serialQueue;	// 56 = 0x38
    id <RMPushControllerDelegate> _delegate;	// 64 = 0x40
}

+ (id)_connectionWithEnvironmentName:(id)arg1 queue:(id)arg2;	// IMP=0x002000000006e5cd
+ (void)start;	// IMP=0x001000000006de23
+ (id)sharedController;	// IMP=0x001000000006dc8d
- (void).cxx_destruct;	// IMP=0x0020000000070923
@property(nonatomic) __weak id <RMPushControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) RMSubscribedStatusKeyPathUpdater *subscribedStatusKeyPathUpdater; // @synthesize subscribedStatusKeyPathUpdater=_subscribedStatusKeyPathUpdater;
@property(retain, nonatomic) RMPersistentHistoryNotifier *persistentHistoryNotifier; // @synthesize persistentHistoryNotifier=_persistentHistoryNotifier;
@property(retain, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (void)persistentHistoryNotifier:(id)arg1 hasChanges:(id)arg2;	// IMP=0x001000000007071b
- (_Bool)persistentHistoryNotifier:(id)arg1 isChangeInteresting:(id)arg2 stop:(_Bool *)arg3;	// IMP=0x00100000000703d0
- (id)_environmentNameForConnection:(id)arg1;	// IMP=0x0010000000070227
- (void)_updatePushReceivedWithTopic:(id)arg1 enrollmentToken:(id)arg2 syncTokens:(id)arg3 forEnvironmentName:(id)arg4;	// IMP=0x001000000006f967
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x001000000006f660
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x001000000006f55e
- (id)_pushEnvironmentNameForManagementChannel:(id)arg1 error:(id *)arg2;	// IMP=0x001000000006f038
- (id)queryForUnacknowledgedStatusWithKeyPaths:(id)arg1 lastAcknowledgedDateByKeyPath:(id)arg2 onBehalfOfManagementChannel:(id)arg3 error:(id *)arg4;	// IMP=0x001000000006f020
- (id)queryForStatusWithKeyPaths:(id)arg1 onBehalfOfManagementChannel:(id)arg2 error:(id *)arg3;	// IMP=0x001000000006ee5f
@property(readonly, nonatomic) NSSet *supportedKeyPaths;
- (id)_currentPushTokenByEnvironmentName;	// IMP=0x001000000006ec6e
- (id)_cachedPushTokenByEnvironment;	// IMP=0x001000000006ec0b
- (void)_notifyPushTokenDidChangeIfNeeded;	// IMP=0x001000000006e735
- (void)_updateConnections;	// IMP=0x001000000006e23d
- (void)_start;	// IMP=0x001000000006e19e
- (void)_stop;	// IMP=0x001000000006e10a
- (void)dealloc;	// IMP=0x001000000006e0cc
- (id)initWithPushTokenByEnvironmentName:(id)arg1 subscribedStatusKeyPathUpdater:(id)arg2 context:(id)arg3;	// IMP=0x001000000006debc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
