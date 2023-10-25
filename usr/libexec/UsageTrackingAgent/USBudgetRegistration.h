//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary, NSOperationQueue, NSPersistentContainer;

@interface USBudgetRegistration : NSObject
{
    NSMapTable *_addContextsByXPCConnection;	// 8 = 0x8
    NSMutableDictionary *_deviceActivityContextsByClientIdentifier;	// 16 = 0x10
    NSPersistentContainer *_container;	// 24 = 0x18
    NSOperationQueue *_notificationPostingQueue;	// 32 = 0x20
}

+ (id)sharedRegistration;	// IMP=0x0020000000002e6b
- (void).cxx_destruct;	// IMP=0x002000000001343b
@property(readonly) NSOperationQueue *notificationPostingQueue; // @synthesize notificationPostingQueue=_notificationPostingQueue;
@property(readonly) NSPersistentContainer *container; // @synthesize container=_container;
- (void)removeDeviceActivityBudgetsNotMatchingClients:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012c1b
- (void)fetchAllDeviceActivityBudgetsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000001299c
- (void)fetchBudgetForDeviceActivityWithURI:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012696
- (id)fetchEventsForActivity:(id)arg1 withClient:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000111ce
- (id)fetchScheduleForActivity:(id)arg1 withClient:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000108f3
- (id)fetchActivitiesForClient:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000101b8
- (void)_fetchBudgetsAndEventsMatchingBudgetedUsagePredicate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000fbed
- (void)_fetchBudgetsMatchingPredicate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000f915
- (void)fetchBudgetsWithPostedNotificationTimesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000f883
- (_Bool)_fetchAllBudgetedApplications:(id *)arg1 webDomains:(id *)arg2 error:(id *)arg3;	// IMP=0x001000000000ef99
- (id)_areCategoriesBudgetedWithPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000ea46
- (void)fetchBudgetsAndEventsForCategories:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000e9b0
- (id)areCategoriesBudgeted:(id *)arg1;	// IMP=0x001000000000e999
- (id)isCategoryBudgeted:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000e91b
- (void)fetchBudgetsAndEventsForWebDomains:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000dece
- (id)fetchAllBudgetedWebDomainsAndReturnError:(id *)arg1;	// IMP=0x001000000000d215
- (void)fetchBudgetsAndEventsForApplications:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000c643
- (id)fetchAllBudgetedApplicationsAndReturnError:(id *)arg1;	// IMP=0x001000000000bda8
- (void)fetchAllRegisteredBudgetsAndEventsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000bd91
- (void)clearPostedNotificationTimesWithCalendarIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000b9b3
- (void)_fetchBudgetsWithPredicate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000b75e
- (void)fetchBudgetsWithIdentifiers:(id)arg1 clientIdentifiers:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000b543
- (void)fetchAllBudgetsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000b52c
- (void)fetchBudgetsWithIdentifiers:(id)arg1 clientIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000b338
- (void)fetchBudgetsWithIdentifier:(id)arg1 clientIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000a320
- (void)_removeBudgetsWithPredicate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000009dc5
- (void)removeAllBudgetsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009dae
- (_Bool)removeBudgetsForActivities:(id)arg1 withClient:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000009004
- (void)removeBudgets:(id)arg1 clientIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000008e12
- (id)_getDeviceActivityContextForClientIdentifier:(id)arg1;	// IMP=0x0010000000008d0f
- (_Bool)addBudgetForActivity:(id)arg1 withSchedule:(id)arg2 events:(id)arg3 forClient:(id)arg4 withExtension:(id)arg5 isPrivateClient:(_Bool)arg6 error:(id *)arg7;	// IMP=0x0010000000006652
- (void)addBudgets:(id)arg1 darwinNotificationName:(id)arg2 notificationTimes:(id)arg3 clientIdentifier:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000033fa
- (id)init;	// IMP=0x0010000000002faf
- (id)initWithPersistentContainer:(id)arg1;	// IMP=0x0010000000002ec0

@end
