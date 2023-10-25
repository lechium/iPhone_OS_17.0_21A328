//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DownloadManager, MADAnalyticsManager, NSDictionary, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ControlManager : NSObject
{
    _Bool _reclaimSpace;	// 8 = 0x8
    int _notifyToken;	// 12 = 0xc
    int _reclaimUrgency;	// 16 = 0x10
    DownloadManager *_downloadManager;	// 24 = 0x18
    MADAnalyticsManager *_analytics;	// 32 = 0x20
    NSMutableDictionary *_assetTypeDescriptors;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_metaDataQueue;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_assetQueue;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_cachedeleteQueue;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_analyticsQueue;	// 72 = 0x48
    NSDictionary *_managedPrefs;	// 80 = 0x50
    long long _targetingPurgeAmount;	// 88 = 0x58
    NSString *_targetingAmountString;	// 96 = 0x60
    NSString *_reclaimUrgencyName;	// 104 = 0x68
    NSString *_reclaimVolume;	// 112 = 0x70
    NSString *_cacheDeleteOperationName;	// 120 = 0x78
    double _currentTimeInSeconds;	// 128 = 0x80
    double _preciousNumberOfSeconds;	// 136 = 0x88
    double _defaultNumberOfSeconds;	// 144 = 0x90
    double _deltaToCurrentTimeSeconds;	// 152 = 0x98
    NSString *_garbageCollectionAlterAssetType;	// 160 = 0xa0
    NSString *_garbageCollectionAlterBehavior;	// 168 = 0xa8
    NSDictionary *_unlockedAutoAssetDescriptors;	// 176 = 0xb0
    NSDictionary *_lockedOverridableAutoAssetDescriptors;	// 184 = 0xb8
    NSDictionary *_lockedNeverRemoveAutoAssetDescriptors;	// 192 = 0xc0
    NSDictionary *_stagedAutoAssetDescriptors;	// 200 = 0xc8
    long long _reclaimV2AssetSpace;	// 208 = 0xd0
    long long _reclaimV2AssetCount;	// 216 = 0xd8
    long long _reclaimUnlockedAutoAssetSpace;	// 224 = 0xe0
    long long _reclaimUnlockedAutoAssetCount;	// 232 = 0xe8
    long long _reclaimLockedOverridableAutoAssetSpace;	// 240 = 0xf0
    long long _reclaimLockedOverridableAutoAssetCount;	// 248 = 0xf8
    long long _reclaimLockedNeverRemoveAutoAssetSpace;	// 256 = 0x100
    long long _reclaimLockedNeverRemoveAutoAssetCount;	// 264 = 0x108
    long long _reclaimStagedAutoAssetSpace;	// 272 = 0x110
    long long _reclaimStagedAutoAssetCount;	// 280 = 0x118
    long long _reclaimMetadataBlockedSpace;	// 288 = 0x120
    long long _reclaimMetadataBlockedCount;	// 296 = 0x128
}

+ (id)getStringFromXpcMessage:(id)arg1 forKey:(const char *)arg2;	// IMP=0x00600000001bc829
- (void).cxx_destruct;	// IMP=0x00000000001bccbc
@property(nonatomic) long long reclaimMetadataBlockedCount; // @synthesize reclaimMetadataBlockedCount=_reclaimMetadataBlockedCount;
@property(nonatomic) long long reclaimMetadataBlockedSpace; // @synthesize reclaimMetadataBlockedSpace=_reclaimMetadataBlockedSpace;
@property(nonatomic) long long reclaimStagedAutoAssetCount; // @synthesize reclaimStagedAutoAssetCount=_reclaimStagedAutoAssetCount;
@property(nonatomic) long long reclaimStagedAutoAssetSpace; // @synthesize reclaimStagedAutoAssetSpace=_reclaimStagedAutoAssetSpace;
@property(nonatomic) long long reclaimLockedNeverRemoveAutoAssetCount; // @synthesize reclaimLockedNeverRemoveAutoAssetCount=_reclaimLockedNeverRemoveAutoAssetCount;
@property(nonatomic) long long reclaimLockedNeverRemoveAutoAssetSpace; // @synthesize reclaimLockedNeverRemoveAutoAssetSpace=_reclaimLockedNeverRemoveAutoAssetSpace;
@property(nonatomic) long long reclaimLockedOverridableAutoAssetCount; // @synthesize reclaimLockedOverridableAutoAssetCount=_reclaimLockedOverridableAutoAssetCount;
@property(nonatomic) long long reclaimLockedOverridableAutoAssetSpace; // @synthesize reclaimLockedOverridableAutoAssetSpace=_reclaimLockedOverridableAutoAssetSpace;
@property(nonatomic) long long reclaimUnlockedAutoAssetCount; // @synthesize reclaimUnlockedAutoAssetCount=_reclaimUnlockedAutoAssetCount;
@property(nonatomic) long long reclaimUnlockedAutoAssetSpace; // @synthesize reclaimUnlockedAutoAssetSpace=_reclaimUnlockedAutoAssetSpace;
@property(nonatomic) long long reclaimV2AssetCount; // @synthesize reclaimV2AssetCount=_reclaimV2AssetCount;
@property(nonatomic) long long reclaimV2AssetSpace; // @synthesize reclaimV2AssetSpace=_reclaimV2AssetSpace;
@property(retain, nonatomic) NSDictionary *stagedAutoAssetDescriptors; // @synthesize stagedAutoAssetDescriptors=_stagedAutoAssetDescriptors;
@property(retain, nonatomic) NSDictionary *lockedNeverRemoveAutoAssetDescriptors; // @synthesize lockedNeverRemoveAutoAssetDescriptors=_lockedNeverRemoveAutoAssetDescriptors;
@property(retain, nonatomic) NSDictionary *lockedOverridableAutoAssetDescriptors; // @synthesize lockedOverridableAutoAssetDescriptors=_lockedOverridableAutoAssetDescriptors;
@property(retain, nonatomic) NSDictionary *unlockedAutoAssetDescriptors; // @synthesize unlockedAutoAssetDescriptors=_unlockedAutoAssetDescriptors;
@property(retain, nonatomic) NSString *garbageCollectionAlterBehavior; // @synthesize garbageCollectionAlterBehavior=_garbageCollectionAlterBehavior;
@property(retain, nonatomic) NSString *garbageCollectionAlterAssetType; // @synthesize garbageCollectionAlterAssetType=_garbageCollectionAlterAssetType;
@property(nonatomic) double deltaToCurrentTimeSeconds; // @synthesize deltaToCurrentTimeSeconds=_deltaToCurrentTimeSeconds;
@property(nonatomic) double defaultNumberOfSeconds; // @synthesize defaultNumberOfSeconds=_defaultNumberOfSeconds;
@property(nonatomic) double preciousNumberOfSeconds; // @synthesize preciousNumberOfSeconds=_preciousNumberOfSeconds;
@property(nonatomic) double currentTimeInSeconds; // @synthesize currentTimeInSeconds=_currentTimeInSeconds;
@property(retain, nonatomic) NSString *cacheDeleteOperationName; // @synthesize cacheDeleteOperationName=_cacheDeleteOperationName;
@property(retain, nonatomic) NSString *reclaimVolume; // @synthesize reclaimVolume=_reclaimVolume;
@property(retain, nonatomic) NSString *reclaimUrgencyName; // @synthesize reclaimUrgencyName=_reclaimUrgencyName;
@property(nonatomic) int reclaimUrgency; // @synthesize reclaimUrgency=_reclaimUrgency;
@property(retain, nonatomic) NSString *targetingAmountString; // @synthesize targetingAmountString=_targetingAmountString;
@property(nonatomic) long long targetingPurgeAmount; // @synthesize targetingPurgeAmount=_targetingPurgeAmount;
@property(nonatomic) _Bool reclaimSpace; // @synthesize reclaimSpace=_reclaimSpace;
@property(nonatomic) int notifyToken; // @synthesize notifyToken=_notifyToken;
@property(retain, nonatomic) NSDictionary *managedPrefs; // @synthesize managedPrefs=_managedPrefs;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *analyticsQueue; // @synthesize analyticsQueue=_analyticsQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *cachedeleteQueue; // @synthesize cachedeleteQueue=_cachedeleteQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *assetQueue; // @synthesize assetQueue=_assetQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *metaDataQueue; // @synthesize metaDataQueue=_metaDataQueue;
@property(readonly, nonatomic) NSMutableDictionary *assetTypeDescriptors; // @synthesize assetTypeDescriptors=_assetTypeDescriptors;
@property(readonly, nonatomic) MADAnalyticsManager *analytics; // @synthesize analytics=_analytics;
@property(readonly, nonatomic) DownloadManager *downloadManager; // @synthesize downloadManager=_downloadManager;
- (void)activityNotification:(id)arg1 ofStatusChange:(unsigned long long)arg2 withReason:(id)arg3;	// IMP=0x00000000001bc869
- (long long)handleInstallAsset:(id)arg1 forType:(id)arg2;	// IMP=0x00000000001bbde8
- (void)handleUpdateMABrain:(id)arg1 message:(id)arg2 clientName:(id)arg3;	// IMP=0x00000000001bbdd3
- (void)handleGetMABrainInfo:(id)arg1 message:(id)arg2 clientName:(id)arg3;	// IMP=0x00000000001bbdbe
- (void)moveAssetIntoRepo:(id)arg1 forType:(id)arg2 forAsset:(id)arg3 cleanUp:(id)arg4 with:(id)arg5;	// IMP=0x00000000001bb812
- (void)writeJsonDictionaryToFile:(id)arg1 to:(id)arg2 with:(id)arg3;	// IMP=0x00000000001bb013
- (void)writeDictionaryToFile:(id)arg1 to:(id)arg2 with:(id)arg3;	// IMP=0x00000000001bac01
- (long long)updateLastFetchedDate:(id)arg1 assetType:(id)arg2 withPurpose:(id)arg3 with:(id)arg4;	// IMP=0x00000000001ba96d
- (void)setServerConnectionHandler:(id)arg1 with:(id)arg2 and:(id)arg3;	// IMP=0x00000000001ba783
- (id)associateOptionalFields:(long long)arg1 fromRequest:(id)arg2 toCommandRequest:(id)arg3 forCommandTracker:(id)arg4;	// IMP=0x00000000001ba19c
- (id)associateRequiredFields:(long long)arg1 fromRequest:(id)arg2 toCommandRequest:(id)arg3 forCommandTracker:(id)arg4;	// IMP=0x00000000001b876f
- (_Bool)associateFieldsFromRequest:(id)arg1 withCommandTracker:(id)arg2;	// IMP=0x00000000001b8481
- (void)handleClientConnection:(id)arg1 on:(id)arg2;	// IMP=0x00000000001b67c6
- (void)handleClientConnection:(id)arg1 usingDispatchQueue:(id)arg2;	// IMP=0x00000000001b6590
- (void)handleClientCommand:(id)arg1;	// IMP=0x00000000001b6350
- (void)handleCommandGarbageCollect:(id)arg1;	// IMP=0x00000000001b634a
- (void)handleCommandDumpClidentUsage:(id)arg1;	// IMP=0x00000000001b6344
- (void)handleCommandNSURLStateDump:(id)arg1;	// IMP=0x00000000001b633e
- (void)handleCommandRepairState:(id)arg1;	// IMP=0x00000000001b6338
- (void)handleCommandOverrideGC:(id)arg1;	// IMP=0x00000000001b6332
- (void)handleCommandUpdateClientUsage:(id)arg1;	// IMP=0x00000000001b632c
- (void)handleCommandConfigDownload:(id)arg1;	// IMP=0x00000000001b6326
- (void)handleCommandSpaceCheck:(id)arg1;	// IMP=0x00000000001b6320
- (void)handleCommandRefreshAssetState:(id)arg1;	// IMP=0x00000000001b631a
- (void)handleCommandGetSandboxExtension:(id)arg1;	// IMP=0x00000000001b6314
- (void)handleCommandPurgeAsset:(id)arg1;	// IMP=0x00000000001b630e
- (void)handleCommandDownloadAsset:(id)arg1;	// IMP=0x00000000001b6308
- (void)handleCommandDownloadMetadata:(id)arg1;	// IMP=0x00000000001b6302
- (void)handleCommandLoadAssetByID:(id)arg1;	// IMP=0x00000000001b62fc
- (void)handleCommandCancelCatalogDownload:(id)arg1;	// IMP=0x00000000001b62f6
- (void)handleCommandCancelDownload:(id)arg1;	// IMP=0x00000000001b62f0
- (void)handleCommandQuerInstalledIDs:(id)arg1;	// IMP=0x00000000001b62ea
- (void)handleCommandQueryAssetType:(id)arg1;	// IMP=0x00000000001b62e4
- (void)handleCommandPurgeCatalogs:(id)arg1;	// IMP=0x00000000001b62de
- (void)handleCommandPurgeAll:(id)arg1;	// IMP=0x00000000001b62d8
- (void)handleCommandCleanV1Assets:(id)arg1;	// IMP=0x00000000001b62d2
- (void)handleCommandMigrateAssets:(id)arg1;	// IMP=0x00000000001b62cc
- (void)handleCommandServerURLOverride:(id)arg1;	// IMP=0x00000000001b62c6
- (void)handleCommandDownloadPMV:(id)arg1;	// IMP=0x00000000001b62c0
- (void)handleCommandQueryPMV:(id)arg1;	// IMP=0x00000000001b62ba
- (void)handleCommandCancelPMVDownload:(id)arg1;	// IMP=0x00000000001b62b4
- (void)handleCommandSetPallasURL:(id)arg1;	// IMP=0x00000000001b62ae
- (void)handleCommandSetPallasEnabled:(id)arg1;	// IMP=0x00000000001b62a8
- (void)handleCommandSetPallasAudience:(id)arg1;	// IMP=0x00000000001b62a2
- (void)handleCommandGetPallasEnabled:(id)arg1;	// IMP=0x00000000001b629c
- (void)handleCommandGetPallasAudience:(id)arg1;	// IMP=0x00000000001b6296
- (void)handleReportingRequest:(id)arg1 message:(id)arg2 clientName:(id)arg3;	// IMP=0x00000000001b5f3c
- (void)handleMigrateAssetsRequest:(id)arg1 using:(id)arg2 and:(id)arg3;	// IMP=0x00000000001b56e7
- (void)handleUpdateClientUsage:(id)arg1 using:(id)arg2 and:(id)arg3 clientName:(id)arg4;	// IMP=0x00000000001b5025
- (void)dumpClientUsage:(id)arg1 using:(id)arg2 and:(id)arg3 clientName:(id)arg4;	// IMP=0x00000000001b4ca6
- (void)overrideGCValue:(id)arg1 using:(id)arg2 and:(id)arg3 clientName:(id)arg4;	// IMP=0x00000000001b4907
- (void)handleGarbageCollect:(id)arg1 and:(id)arg2;	// IMP=0x00000000001b482e
- (void)purgeAll:(id)arg1 and:(id)arg2 assetTypesList:(id)arg3 clientName:(id)arg4;	// IMP=0x00000000001b3b41
- (id)dictionaryWithArrayOfStringValues:(id)arg1 forXpcKey:(const char *)arg2 andLengthKey:(const char *)arg3 failureReason:(id *)arg4;	// IMP=0x00000000001b3666
- (id)dictionaryWithArrayOfStringValues:(id)arg1 forXpcKey:(const char *)arg2 andLengthKey:(const char *)arg3 clientName:(id)arg4;	// IMP=0x00000000001b31bb
- (void)purgeCatalogs:(id)arg1 and:(id)arg2 assetTypesList:(id)arg3 clientName:(id)arg4;	// IMP=0x00000000001b2be6
- (void)getProductMarketingVersions:(id)arg1 and:(id)arg2 clientName:(id)arg3 assetType:(id)arg4;	// IMP=0x00000000001b2b19
- (_Bool)purgeCatalogOfType:(id)arg1 clientName:(id)arg2 withPurpose:(id)arg3;	// IMP=0x00000000001b2857
- (_Bool)purgeAllAssetsOfType:(id)arg1 forPurpose:(id)arg2 clientName:(id)arg3 exceptForAssetIds:(id)arg4;	// IMP=0x00000000001b20a2
- (_Bool)purgeAllAssetsInDirectory:(id)arg1 clientName:(id)arg2 exceptForAssetIds:(id)arg3;	// IMP=0x00000000001b1c9e
- (void)respondToCacheDelete:(_Bool)arg1 targetingPurgeAmount:(long long)arg2 withUrgency:(int)arg3 forVolume:(id)arg4 then:(CDUnknownBlockType)arg5;	// IMP=0x00000000001b01eb
- (long long)performCacheDeleteForGroup:(id)arg1 forAssetTypeDir:(id)arg2;	// IMP=0x00000000001afae6
- (long long)performCacheDeleteCollection:(id)arg1 forCollectionType:(long long)arg2 withGarbageCollectionTypes:(id)arg3;	// IMP=0x00000000001af8f7
- (long long)performGarbageCollectionOfType:(long long)arg1 forAssetTypeDir:(id)arg2 fromDescriptors:(id)arg3;	// IMP=0x00000000001af09d
- (double)alterSecondsBeforeCollection:(double)arg1 forAssetTypeDir:(id)arg2 determinedDescriptorType:(long long)arg3 fromDescriptors:(id)arg4 isAutoAsset:(_Bool *)arg5 autoAssetDescriptor:(id *)arg6 assetFilesystemSize:(long long *)arg7;	// IMP=0x00000000001aeebb
- (id)alterGarbageColletionLevel:(id)arg1 basedOnAssetDirectory:(id)arg2;	// IMP=0x00000000001aed08
- (void)maintainReclaimCountsByCollectionType:(long long)arg1 reclaimAssetSpace:(long long)arg2;	// IMP=0x00000000001aec72
- (id)locateDescriptorForAssetDirectory:(id)arg1 fromDescriptors:(id)arg2;	// IMP=0x00000000001ae937
- (id)chooseDescriptorsOfType:(long long)arg1;	// IMP=0x00000000001ae8fc
- (long long)garbageCollectionDescriptorType:(id)arg1;	// IMP=0x00000000001ade74
- (id)getAssetAttributes:(id)arg1;	// IMP=0x00000000001add63
- (void)handleServerUrlOverride:(id)arg1 message:(id)arg2 client:(id)arg3 clientName:(id)arg4;	// IMP=0x00000000001ad9b7
- (void)handleGetServerUrl:(id)arg1 message:(id)arg2 client:(id)arg3 clientName:(id)arg4;	// IMP=0x00000000001ad7c3
- (void)handleGetAllowNonUserInitiated:(id)arg1 message:(id)arg2 clientName:(id)arg3;	// IMP=0x00000000001ad65e
- (void)handleDataMigrator:(id)arg1 message:(id)arg2 clientName:(id)arg3;	// IMP=0x00000000001ad5eb
- (void)handleEnsureDataVault:(id)arg1 message:(id)arg2 client:(id)arg3 clientName:(id)arg4;	// IMP=0x00000000001ad46c
- (void)setPreferenceKeyAsync:(id)arg1 andValue:(id)arg2 allowNilToClear:(_Bool)arg3 replyUsing:(id)arg4 and:(id)arg5;	// IMP=0x00000000001ad2ff
- (void)setPreferenceKeySync:(id)arg1 andValue:(id)arg2 allowNilToClear:(_Bool)arg3;	// IMP=0x00000000001ad234
- (void)removeAssetDir:(id)arg1 assetType:(id)arg2 clientName:(id)arg3 using:(id)arg4;	// IMP=0x00000000001ac931
- (long long)removeDirectoryAtPath:(id)arg1 firstRenamingWithExtension:(id)arg2;	// IMP=0x00000000001ac8d1
- (void)cancelDownload:(id)arg1 using:(id)arg2 for:(id)arg3 assetType:(id)arg4 purpose:(id)arg5 withExtension:(id)arg6;	// IMP=0x00000000001ac375
- (id)newExtractor:(id)arg1 downloadOptions:(id)arg2 sessionID:(id)arg3 error:(id *)arg4;	// IMP=0x00000000001ab1da
- (id)hashToString:(id)arg1;	// IMP=0x00000000001ab121
- (void)checkAndInitiateDownloadForAssetType:(id)arg1 message:(id)arg2 forClientName:(id)arg3 usingConnection:(id)arg4 requiringClientExtractor:(_Bool)arg5;	// IMP=0x00000000001aa825
- (_Bool)isAssetInCatalog:(id)arg1 assetId:(id)arg2;	// IMP=0x00000000001aa810
- (_Bool)isAssetInCatalog:(id)arg1 assetId:(id)arg2 withPurpose:(id)arg3;	// IMP=0x00000000001aa755
- (void)getStateOfAsset:(id)arg1 incoming:(id)arg2 assetType:(id)arg3;	// IMP=0x00000000001aa30e
- (long long)getStateOfAssetInCatalog:(id)arg1 assetId:(id)arg2 withPurpose:(id)arg3;	// IMP=0x00000000001aa206
- (void)sendStateOfAssetReply:(id)arg1 incoming:(id)arg2 with:(long long)arg3;	// IMP=0x00000000001aa18d
- (void)ensureProperDirectoryState;	// IMP=0x00000000001a9fb8
- (void)removeDownloadsNotRecentlyInFlight:(id)arg1;	// IMP=0x00000000001a9d16
- (void)cleanObsoleteSURepo;	// IMP=0x00000000001a90c0
- (void)ensureSUDownloadTempDir;	// IMP=0x00000000001a8ecd
- (id)checkEntitlement:(id)arg1 forAssetTypes:(id)arg2;	// IMP=0x00000000001a8be4
- (id)checkEntitlement:(id)arg1 forAssetType:(id)arg2;	// IMP=0x00000000001a8afb
- (_Bool)checkEntitlementAndRespondIfErrorForConnection:(id)arg1 usingMessage:(id)arg2 forAssetTypes:(id)arg3 withCommand:(long long)arg4;	// IMP=0x00000000001a8801
- (_Bool)checkEntitlementAndRespondIfErrorForConnection:(id)arg1 usingMessage:(id)arg2 forAssetType:(id)arg3 withCommand:(long long)arg4;	// IMP=0x00000000001a8720
- (_Bool)isEntitledForCommand:(long long)arg1 forConnection:(id)arg2 forAssetType:(id)arg3;	// IMP=0x00000000001a8430
- (_Bool)isAllowlistedForCommand:(long long)arg1;	// IMP=0x00000000001a833e
- (_Bool)isCommandAllowedForAllClientsWithoutAssetType:(long long)arg1;	// IMP=0x00000000001a82d2
- (_Bool)isAssetTypeOptionalForCommand:(long long)arg1;	// IMP=0x00000000001a8287
- (_Bool)isAssetTypeRequiredForCommand:(long long)arg1;	// IMP=0x00000000001a8246
- (int)getNotEntitledResultForCommand:(unsigned long long)arg1;	// IMP=0x00000000001a81fd
- (_Bool)commandRequiresForcedSoftwareUpdateType:(id)arg1;	// IMP=0x00000000001a817f
- (_Bool)isCommandRequiringForcedSoftwareUpdateType:(long long)arg1;	// IMP=0x00000000001a8139
- (void)handleLoadRequest:(id)arg1 clientName:(id)arg2 connection:(id)arg3 message:(id)arg4;	// IMP=0x00000000001a7ba4
- (id)decodeXpcObject:(id)arg1 ofClass:(Class)arg2 dataKey:(id)arg3 lengthKey:(id)arg4 decodeClasses:(id)arg5 error:(id *)arg6;	// IMP=0x00000000001a7769
- (void)handleQueryRequest:(id)arg1 clientName:(id)arg2 connection:(id)arg3 message:(id)arg4;	// IMP=0x00000000001a6fbc
- (void)handlePmvRequest:(id)arg1 clientName:(id)arg2 connection:(id)arg3 message:(id)arg4;	// IMP=0x00000000001a6bef
- (void)determineAssets:(id)arg1 clientName:(id)arg2 connection:(id)arg3 downloadingTasks:(id)arg4 message:(id)arg5 resultTypes:(long long)arg6 queryArray:(id)arg7 isForSpecificAsset:(_Bool)arg8 specificAssetId:(id)arg9 specificAllowedDifferences:(id)arg10;	// IMP=0x00000000001a5d56
- (void)determineOneAsset:(id)arg1 clientName:(id)arg2 connection:(id)arg3 message:(id)arg4 specificAssetId:(id)arg5 specificAllowedDifferences:(id)arg6;	// IMP=0x00000000001a5d11
- (void)determineAssets:(id)arg1 clientName:(id)arg2 connection:(id)arg3 downloadingTasks:(id)arg4 message:(id)arg5 resultTypes:(long long)arg6 queryArray:(id)arg7;	// IMP=0x00000000001a5cd5
- (void)determinePmv:(id)arg1 clientName:(id)arg2 connection:(id)arg3 message:(id)arg4 queryDict:(id)arg5;	// IMP=0x00000000001a4fcd
- (_Bool)categorizeAssetResults:(id)arg1 fromCatalogIds:(id)arg2 repositoryIds:(id)arg3 andPreinstalledIds:(id)arg4 intoServerOnlyIds:(id *)arg5 installedCatalogIds:(id *)arg6 andObsoleteIds:(id *)arg7;	// IMP=0x00000000001a4e97
- (_Bool)loadCatalog:(id)arg1 catalogAssets:(id *)arg2 assetIds:(id *)arg3 postedDate:(id *)arg4 lastFetchDate:(id *)arg5 catalogInfo:(id *)arg6;	// IMP=0x00000000001a4e6b
- (_Bool)loadCatalog:(id)arg1 catalogAssets:(id *)arg2 assetIds:(id *)arg3 postedDate:(id *)arg4 lastFetchDate:(id *)arg5 catalogInfo:(id *)arg6 withPurpose:(id)arg7;	// IMP=0x00000000001a4c1a
- (_Bool)loadRepository:(id)arg1 localIds:(id *)arg2;	// IMP=0x00000000001a4c05
- (_Bool)loadRepository:(id)arg1 localIds:(id *)arg2 withPurpose:(id)arg3;	// IMP=0x00000000001a4adb
- (_Bool)returnTypeIncludesServerOnly:(long long)arg1;	// IMP=0x00000000001a4ac1
- (_Bool)returnTypeIncludesInstalledInCatalog:(long long)arg1;	// IMP=0x00000000001a4aa7
- (_Bool)returnTypeIncludesObsolete:(long long)arg1 andHasCatalog:(_Bool)arg2;	// IMP=0x00000000001a4a8b
- (id)applyPmvQuery:(id)arg1 queryDict:(id)arg2 explanation:(id *)arg3;	// IMP=0x00000000001a4748
- (id)determineBestMatchFor:(id)arg1 absoluteId:(id)arg2 allowedDifferences:(id)arg3 fromResults:(id)arg4 isExact:(_Bool *)arg5 candidates:(unsigned long long *)arg6 bestMatch:(id *)arg7 differencesFound:(id *)arg8 missedTypeAndAssetIdMatch:(id *)arg9;	// IMP=0x00000000001a3b84
- (_Bool)hasOnlyAllowedDifferencesFrom:(id)arg1 inAttributes:(id)arg2 assetId:(id)arg3 assetType:(id)arg4 allowed:(id)arg5 foundAbsoluteId:(id *)arg6 foundDiff:(id *)arg7;	// IMP=0x00000000001a3a09
- (_Bool)returnTypeIncludesPreinstalled:(long long)arg1;	// IMP=0x00000000001a39fc
- (id)getCatalogLastModifiedDate:(id)arg1 ifFromXmlUrl:(id)arg2 withPurpose:(id)arg3;	// IMP=0x00000000001a32e9
- (id)getMetadataFromCatalog:(id)arg1 key:(id)arg2 withPurpose:(id)arg3;	// IMP=0x00000000001a3201
- (id)newCatalogLoad:(id)arg1;	// IMP=0x00000000001a31ed
- (id)newCatalogLoad:(id)arg1 withPurpose:(id)arg2;	// IMP=0x00000000001a2ff1
- (void)sendQueryResults:(id)arg1 assetType:(id)arg2 purpose:(id)arg3 catalogInfo:(id)arg4 returnTypes:(long long)arg5 postedDate:(id)arg6 lastFetchedDate:(id)arg7 result:(long long)arg8 isFiltered:(_Bool)arg9 requireSpecificAsset:(_Bool)arg10 connection:(id)arg11 message:(id)arg12 clientName:(id)arg13;	// IMP=0x00000000001a2a73
- (void)sendPmvResults:(id)arg1 pmvInfo:(id)arg2 postedDate:(id)arg3 lastFetchedDate:(id)arg4 result:(long long)arg5 connection:(id)arg6 message:(id)arg7;	// IMP=0x00000000001a286e
- (_Bool)beforeFirstUnlock;	// IMP=0x00000000001a2855
- (void)analyticsInitialization;	// IMP=0x00000000001a2543
- (id)init;	// IMP=0x00000000001a21c5
- (void)loadAssetTypeDescriptors;	// IMP=0x00000000001a1e0d
- (void)applyDataVaults;	// IMP=0x00000000001a1ae0
- (void)removeAllObsoletedV1Assets;	// IMP=0x00000000001a183e
- (id)newPrefsCopyValueForKey:(id)arg1;	// IMP=0x00000000001a1668
- (void)loadManagedPrefs;	// IMP=0x00000000001a15cc
- (id)convertToArchiveable:(id)arg1 incoming:(id)arg2 overrideState:(long long)arg3 filterToIds:(id)arg4 withPurpose:(id)arg5;	// IMP=0x00000000001a11fd

@end
