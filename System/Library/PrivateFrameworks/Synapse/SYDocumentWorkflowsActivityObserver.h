//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SYApplicationStateObserver, SYDocumentWorkflowsActivityChangeHandler, SYDocumentWorkflowsCloseConfirmationSettings;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SYDocumentWorkflowsActivityObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_observerQueue;	// 8 = 0x8
    SYApplicationStateObserver *_appStateObserver;	// 16 = 0x10
    SYDocumentWorkflowsCloseConfirmationSettings *_closeConfirmationSettings;	// 24 = 0x18
    SYDocumentWorkflowsActivityChangeHandler *_handler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000014e64
@property(retain, nonatomic) SYDocumentWorkflowsActivityChangeHandler *handler; // @synthesize handler=_handler;
- (void)_updateLinkedDocuments;	// IMP=0x0000000000014ca0
- (void)_handleActiveUserActivityChangeAfterDelay:(id)arg1;	// IMP=0x0000000000014ae0
- (void)_handleActiveUserActivityChange:(id)arg1;	// IMP=0x00000000000149ce
- (void)userActivityPersistentIdentifierWasChanged:(id)arg1 persistentIdentifier:(id)arg2 previousValue:(id)arg3;	// IMP=0x00000000000148ca
- (void)userActivityDidBecomeCurrent:(id)arg1 current:(_Bool)arg2;	// IMP=0x0000000000014827
- (void)_handleAppResignActive:(id)arg1;	// IMP=0x000000000001475f
- (void)_handleAppBecomeActive:(id)arg1;	// IMP=0x0000000000014642
- (void)registerForAppStateNotifications;	// IMP=0x000000000001445c
- (void)dealloc;	// IMP=0x00000000000143a4
- (id)init;	// IMP=0x0000000000014309

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

