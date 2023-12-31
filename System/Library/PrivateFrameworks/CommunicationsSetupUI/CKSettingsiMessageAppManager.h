//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CKSettingsiMessageAppManager : NSObject
{
    NSArray *_payloadProviderExtensions;	// 8 = 0x8
    NSArray *_highMemoryPayloadProviderExtensions;	// 16 = 0x10
    NSArray *_alliMessageApps;	// 24 = 0x18
    NSArray *_deletableAppsWithiMessageApp;	// 32 = 0x20
    NSArray *_deletableiMessageOnlyApps;	// 40 = 0x28
    id _payloadProviderExtensionsMonitoringContext;	// 48 = 0x30
    id _highMemoryPayloadProviderExtensionsMonitoringContext;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000000b08c
@property(retain, nonatomic) id highMemoryPayloadProviderExtensionsMonitoringContext; // @synthesize highMemoryPayloadProviderExtensionsMonitoringContext=_highMemoryPayloadProviderExtensionsMonitoringContext;
@property(retain, nonatomic) id payloadProviderExtensionsMonitoringContext; // @synthesize payloadProviderExtensionsMonitoringContext=_payloadProviderExtensionsMonitoringContext;
- (void)dealloc;	// IMP=0x000000000000b018
- (void)_endMonitoringExtensionInstallation;	// IMP=0x000000000000afa4
- (void)_notifyForInstalledAppChange;	// IMP=0x000000000000af57
- (id)_beginMonitoringExtensionPoint:(id)arg1;	// IMP=0x000000000000a9f9
- (id)_loadiMessageAppsSyncronouslyForExtensionPoint:(id)arg1;	// IMP=0x000000000000a72f
- (id)extensionAttributesForExtensionPoint:(id)arg1;	// IMP=0x000000000000a687
- (void)_clearCacheForDerivableiMessageAppLists;	// IMP=0x000000000000a643
@property(readonly) _Bool haveDeletableApps;
- (id)appWithBundleID:(id)arg1;	// IMP=0x000000000000a329
@property(readonly, nonatomic) NSArray *deletableAppsWithiMessageApp; // @synthesize deletableAppsWithiMessageApp=_deletableAppsWithiMessageApp;
@property(readonly, nonatomic) NSArray *deletableiMessageOnlyApps; // @synthesize deletableiMessageOnlyApps=_deletableiMessageOnlyApps;
@property(readonly, nonatomic) NSArray *alliMessageApps; // @synthesize alliMessageApps=_alliMessageApps;
@property(readonly, nonatomic) NSArray *highMemoryPayloadProviderExtensions; // @synthesize highMemoryPayloadProviderExtensions=_highMemoryPayloadProviderExtensions;
@property(readonly, nonatomic) NSArray *payloadProviderExtensions; // @synthesize payloadProviderExtensions=_payloadProviderExtensions;
- (id)init;	// IMP=0x0000000000009c0f

@end

