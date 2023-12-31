//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPersistentContainer;

@interface RMStoreXPCProxyHandler : NSObject
{
    _Bool _hasCommandLineEntitlement;	// 8 = 0x8
    _Bool _hasObserverEntitlement;	// 9 = 0x9
    _Bool _hasProviderEntitlement;	// 10 = 0xa
    _Bool _hasSubscriberEntitlement;	// 11 = 0xb
    NSPersistentContainer *_persistentContainer;	// 16 = 0x10
}

+ (_Bool)_isConnection:(id)arg1 fromApplicationIdentifier:(id)arg2;	// IMP=0x002000000009a6da
+ (id)_applicationIdentifierFromConnection:(id)arg1;	// IMP=0x001000000009a6be
+ (_Bool)_doesConnection:(id)arg1 haveEntitlements:(id)arg2;	// IMP=0x001000000009a465
- (void).cxx_destruct;	// IMP=0x00200000000a0636
@property(readonly, nonatomic) _Bool hasSubscriberEntitlement; // @synthesize hasSubscriberEntitlement=_hasSubscriberEntitlement;
@property(readonly, nonatomic) _Bool hasProviderEntitlement; // @synthesize hasProviderEntitlement=_hasProviderEntitlement;
@property(readonly, nonatomic) _Bool hasObserverEntitlement; // @synthesize hasObserverEntitlement=_hasObserverEntitlement;
@property(readonly, nonatomic) _Bool hasCommandLineEntitlement; // @synthesize hasCommandLineEntitlement=_hasCommandLineEntitlement;
@property(readonly, nonatomic) NSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2 storeIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000a030b
- (void)metadataValueForKey:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a0000
- (void)metadataForStoreIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009fd32
- (void)certificateStatusWithStoreIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009fa64
- (void)certificatePersistentRefForAssetKey:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009f775
- (void)removeTrustForCertificateRef:(id)arg1 configurationKey:(id)arg2 fullTrust:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000009f48a
- (void);	// IMP=0x001000000009f19f
- (void)publishStatusWithStoreIdentifier:(id)arg1 status:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009ef00
- (void)setConfigurationUIWithStoreIdentifier:(id)arg1 declarationIdentifier:(id)arg2 declarationServerToken:(id)arg3 visible:(_Bool)arg4 ui:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000009ec2e
- (void)removeStatusWithStoreIdentifier:(id)arg1 declarationIdentifier:(id)arg2 declarationServerToken:(id)arg3 sourceIdentifier:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000009e983
- (void)writeStatusWithStoreIdentifier:(id)arg1 declarationType:(id)arg2 declarationIdentifier:(id)arg3 declarationServerToken:(id)arg4 sourceIdentifier:(id)arg5 validity:(_Bool)arg6 reasons:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;	// IMP=0x001000000009e684
- (void)unassignAssets:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009e3e5
- (void)resolveAsset:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009e0d0
- (void)subscribedStoreConfigurationsMissingUIWithTypes:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009de16
- (void)subscribedDeclarationsWithTypes:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009db27
- (void)subscribedStoreDeclarationsWithTypes:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009d86d
- (void)subscriberStoresWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000009d5e5
- (void)subscriberStoreWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009d317
- (void)applyChangesForStoreIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009d078
- (void)deleteDeclarationWithIdentifier:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009cdb8
- (void)saveDeclaration:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009cad2
- (void)providerStoresWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000009c84a
- (void)providerStoreWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009c57c
- (void)removeStoreWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009c2dd
- (void)createStoreWithType:(long long)arg1 defaultToInteractive:(_Bool)arg2 dataSeparated:(_Bool)arg3 options:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000009c017
- (void)fetchDataAtURL:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009bd28
- (void)setShouldInstallConfiguration:(id)arg1 shouldInstall:(_Bool)arg2 storeIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000009bb30
- (void)configurationUIsForStoreIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009b86a
- (void)declarationManifestForStoreIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009b59c
- (void)declarationsWithTypes:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009b2ad
- (void)declarationsForStoreIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009afdf
- (void)declarationWithIdentifier:(id)arg1 storeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009acf0
- (void)observerStoresWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000009aa68
- (void)observerStoreWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009a79a
- (id)initWithXPCConnection:(id)arg1 persistentContainer:(id)arg2;	// IMP=0x001000000009a1ef

@end

