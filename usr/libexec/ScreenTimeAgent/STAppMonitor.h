//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSBackgroundActivityScheduler, NSMutableSet, NSOperationQueue, NSString;
@protocol STPersistenceControllerProtocol;

@interface STAppMonitor : NSObject
{
    MISSING_TYPE *_running;	// 8 = 0x8
    _Bool _operationInProgress;	// 9 = 0x9
    NSOperationQueue *_operationQueue;	// 16 = 0x10
    id <STPersistenceControllerProtocol> _persistenceController;	// 24 = 0x18
    NSBackgroundActivityScheduler *_appDiscoveryActivity;	// 32 = 0x20
    NSMutableSet *_cachedAppBundleIdentifiers;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000008486
@property _Bool operationInProgress; // @synthesize operationInProgress=_operationInProgress;
@property _Bool running; // @synthesize running=_running;
@property(retain) NSMutableSet *cachedAppBundleIdentifiers; // @synthesize cachedAppBundleIdentifiers=_cachedAppBundleIdentifiers;
@property(retain) NSBackgroundActivityScheduler *appDiscoveryActivity; // @synthesize appDiscoveryActivity=_appDiscoveryActivity;
@property(readonly, nonatomic) id <STPersistenceControllerProtocol> persistenceController; // @synthesize persistenceController=_persistenceController;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void)_updateLocalAppsWithBackgroundActivity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000008142
- (void)_scheduleAppDiscoveryBackgroundActivity;	// IMP=0x0010000000007f8f
- (void)_didDetectNewAppUsage:(id)arg1;	// IMP=0x0010000000007e7c
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x0010000000007e66
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x0010000000007e50
- (void)resume;	// IMP=0x0010000000007dd8
- (void)dealloc;	// IMP=0x0010000000007d63
- (id)initWithPersistenceController:(id)arg1;	// IMP=0x0010000000007c5a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

