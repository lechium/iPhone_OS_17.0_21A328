//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSManagedObjectContext, NSMutableDictionary, NSPersistentContainer;

@interface RMStoreController : NSObject
{
    NSManagedObjectContext *_context;	// 8 = 0x8
    NSPersistentContainer *_persistentContainer;	// 16 = 0x10
    NSMutableDictionary *_clientByIdentifier;	// 24 = 0x18
}

+ (void)start;	// IMP=0x0020000000088097
+ (id)sharedController;	// IMP=0x0010000000087ee2
- (void).cxx_destruct;	// IMP=0x002000000009531f
@property(retain, nonatomic) NSMutableDictionary *clientByIdentifier; // @synthesize clientByIdentifier=_clientByIdentifier;
@property(readonly, nonatomic) NSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (id)_newPayloadWithDeclaration:(id)arg1 managementSource:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000094fe6
- (id)_payloadsForPayloadClass:(Class)arg1 identifier:(id)arg2 managementSource:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000094cc7
- (id)_payloadsForDeclarationIdentifier:(id)arg1 managementSource:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000949d6
- (id)_buildFlattenedConfigurations:(id)arg1 includeAssets:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0010000000094284
- (id)_configurationsWithMissingUIForConfigurationTypes:(id)arg1 managementSource:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000093fd5
- (id)_activeConfigurationsForStoreIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000093e5e
- (id)_activeDeclarationsForConfigurationTypes:(id)arg1 storeIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000093b2f
- (id)_declarationsOfClass:(Class)arg1 managementSource:(id)arg2 declarationTypes:(id)arg3 identifier:(id)arg4 error:(id *)arg5;	// IMP=0x0010000000093440
- (id)_declarationsForStoreIdentifier:(id)arg1 declarationTypes:(id)arg2 identifier:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000930c7
- (void)_addOptionsToManagementSource:(id)arg1 options:(id)arg2;	// IMP=0x0010000000092f8d
- (id)_allManagementSourcesReturningError:(id *)arg1;	// IMP=0x0010000000092d08
- (id)_managementSourceWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000092af5
- (id)_subscriberStoreWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000092a46
- (MISSING_TYPE *)_providerStoreWithIdentifier:error: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000092997
- (id)_observerStoreWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000928e8
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2 storeIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000091ff0
- (void)metadataValueForKey:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000091a59
- (void)metadataForStoreIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000091401
- (void)certificateStatusWithStoreIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000090b33
- (void)certificatePersistentRefForAssetKey:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000090815
- (void)removeTrustForCertificateRef:(id)arg1 configurationKey:(id)arg2 fullTrust:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000009052f
- (void)setTrustForCertificateRef:(id)arg1 configurationKey:(id)arg2 fullTrust:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000901c9
- (void)setConfigurationUIWithStoreIdentifier:(id)arg1 declarationIdentifier:(id)arg2 declarationServerToken:(id)arg3 visible:(_Bool)arg4 ui:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000008fb34
- (void)unassignAssets:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008f7e7
- (void)resolveAsset:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008ed05
- (void)subscribedStoreConfigurationsMissingUIWithTypes:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008e65e
- (void)subscribedDeclarationsWithTypes:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008e337
- (void)subscribedStoreDeclarationsWithTypes:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008dc55
- (void)subscriberStoresWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000008d7c7
- (void)subscriberStoreWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008d4dc
- (void)applyChangesForStoreIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008d387
- (void)deleteDeclarationWithIdentifier:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008cc97
- (void)saveDeclaration:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008c2c7
- (void)providerStoresWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000008be39
- (void)providerStoreWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008bb4e
- (void)removeStoreWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008b739
- (void)createStoreWithType:(long long)arg1 defaultToInteractive:(_Bool)arg2 dataSeparated:(_Bool)arg3 options:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000008ad9b
- (void)observerStoresDidChange;	// IMP=0x001000000008acf4
- (void)fetchDataAtURL:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008a860
- (void)setShouldInstallConfiguration:(id)arg1 shouldInstall:(_Bool)arg2 storeIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000008a72e
- (void)configurationUIsForStoreIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000089d68
- (void)declarationManifestForStoreIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000089a4c
- (void)declarationsWithTypes:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000008972e
- (void)declarationsForStoreIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000008943e
- (void)declarationWithIdentifier:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000890aa
- (void)observerStoresWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000088c1c
- (void)observerStoreWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000088931
- (id)_clientForIdentifier:(id)arg1;	// IMP=0x00100000000888b7
- (void)_stopClientForIdentifier:(id)arg1;	// IMP=0x00100000000887f1
- (id)_makeClientWithManagementSourceObjectID:(id)arg1 storeIdentifier:(id)arg2 persistentContainer:(id)arg3;	// IMP=0x001000000008872c
- (id)_startClientForSourceIdentifier:(id)arg1 objectID:(id)arg2;	// IMP=0x0010000000088641
- (void)_start;	// IMP=0x0010000000088130
- (id)initWithPersistentContainer:(id)arg1 context:(id)arg2;	// IMP=0x0010000000087fe1

@end
