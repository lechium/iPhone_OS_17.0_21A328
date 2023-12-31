//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOActiveTileGroup, GEOActiveTileGroupMigrationTaskOptions, GEODataSetDescription, GEOPowerAssertion, GEOReportedProgress, GEOResourceLoader, GEOResourceManifestConfiguration, GEOResources, GEOResourcesVersionMigrator, GEOTileGroup, NSArray, NSProgress, NSSet, NSString;
@protocol NSObject, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GEOResourcesVersionMigrationTask : NSObject
{
    GEOResourcesVersionMigrator *_migrator;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    _Bool _running;	// 24 = 0x18
    GEOResourceManifestConfiguration *_manifestConfiguration;	// 32 = 0x20
    GEOTileGroup *_newTileGroup;	// 40 = 0x28
    GEOResources *_resourceManifest;	// 48 = 0x30
    GEODataSetDescription *_preferredDataSet;	// 56 = 0x38
    GEOActiveTileGroup *_oldTileGroup;	// 64 = 0x40
    NSSet *_activeScales;	// 72 = 0x48
    NSSet *_activeScenarios;	// 80 = 0x50
    CDUnknownBlockType _completionHandler;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 96 = 0x60
    GEOResourceLoader *_immediateResourceLoader;	// 104 = 0x68
    GEOResourceLoader *_wifiOnlyResourceLoader;	// 112 = 0x70
    NSArray *_loadedResources;	// 120 = 0x78
    NSArray *_unloadedConditionalResources;	// 128 = 0x80
    GEOReportedProgress *_progress;	// 136 = 0x88
    id <NSObject> _transaction;	// 144 = 0x90
    GEOActiveTileGroupMigrationTaskOptions *_options;	// 152 = 0x98
    GEOPowerAssertion *_powerAssertion;	// 160 = 0xa0
}

+ (id)_resourcesDirectory:(id)arg1;	// IMP=0x0010000000a8af52
+ (Class)_resourceLoaderClass;	// IMP=0x0010000000a8af41
- (void).cxx_destruct;	// IMP=0x0000000000a8f2ba
@property(retain, nonatomic) GEOActiveTileGroupMigrationTaskOptions *options; // @synthesize options=_options;
@property(retain, nonatomic) id <NSObject> transaction; // @synthesize transaction=_transaction;
- (id)_staleResourceForResource:(id)arg1;	// IMP=0x0000000000a8e0f7
- (void)_loadImmediateResources:(id)arg1 conditionalWifiResources:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000a8d81c
- (void)removeOldData:(id)arg1;	// IMP=0x0000000000a8cf35
- (void)populateTileGroup:(id)arg1;	// IMP=0x0000000000a8c2d7
- (void)cancel;	// IMP=0x0000000000a8c0df
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2;	// IMP=0x0000000000a8afab
- (id)_resourcesDirectory;	// IMP=0x0000000000a8af83
@property(readonly) NSProgress *progress;
@property(readonly, nonatomic) long long estimatedWeight;
- (id)initWithMigrator:(id)arg1 manifestConfiguration:(id)arg2 newTileGroup:(id)arg3 inResourceManifest:(id)arg4 dataSet:(id)arg5 oldTileGroup:(id)arg6 activeScales:(id)arg7 activeScenarios:(id)arg8;	// IMP=0x0000000000a8ac7a
- (id)init;	// IMP=0x0000000000a8ac50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

