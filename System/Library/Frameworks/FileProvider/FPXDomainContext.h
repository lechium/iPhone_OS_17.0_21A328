//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FPProviderDomain, FPSpotlightIndexer, FPXExtensionContext, NSDictionary, NSFileProviderDomain, NSFileProviderDomainVersion, NSFileProviderExtension;
@protocol NSFileProviderReplicatedExtension, OS_os_log;

__attribute__((visibility("hidden")))
@interface FPXDomainContext : NSObject
{
    NSFileProviderDomainVersion *_lastKnownDomainVersion;	// 8 = 0x8
    NSDictionary *_lastKnownUserInfo;	// 16 = 0x10
    long long _sequenceNumber;	// 24 = 0x18
    int _selfPid;	// 32 = 0x20
    _Bool _usesFPFS;	// 36 = 0x24
    unsigned long long _extensionCapabilities;	// 40 = 0x28
    FPXExtensionContext *_extensionContext;	// 48 = 0x30
    NSObject<NSFileProviderReplicatedExtension> *_vendorInstance;	// 56 = 0x38
    NSFileProviderDomain *_domain;	// 64 = 0x40
    FPProviderDomain *_providerDomain;	// 72 = 0x48
    NSObject<OS_os_log> *_log;	// 80 = 0x50
    FPSpotlightIndexer *_spotlightIndexer;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000111926
@property(readonly, nonatomic) FPSpotlightIndexer *spotlightIndexer; // @synthesize spotlightIndexer=_spotlightIndexer;
@property(retain, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(readonly, nonatomic) _Bool usesFPFS; // @synthesize usesFPFS=_usesFPFS;
@property(readonly, nonatomic) FPProviderDomain *providerDomain; // @synthesize providerDomain=_providerDomain;
@property(readonly, nonatomic) NSFileProviderDomain *domain; // @synthesize domain=_domain;
@property(readonly, nonatomic) NSObject<NSFileProviderReplicatedExtension> *vendorInstance; // @synthesize vendorInstance=_vendorInstance;
@property(readonly, nonatomic) __weak FPXExtensionContext *extensionContext; // @synthesize extensionContext=_extensionContext;
@property(readonly, nonatomic) unsigned long long extensionCapabilities; // @synthesize extensionCapabilities=_extensionCapabilities;
- (_Bool)shouldIngestDomainUserInfoUpdateWithOldVersion:(id)arg1 newVersion:(id)arg2;	// IMP=0x000000000011182d
- (id)currentResponseWithRequest:(id)arg1;	// IMP=0x00000000001116c8
- (void)retrieveUserInfoFromExtension;	// IMP=0x0000000000111585
@property(readonly, nonatomic) NSDictionary *userInfo;
@property(readonly, nonatomic) NSFileProviderDomainVersion *domainVersion;
- (id)instanceWithPrivateSelector:(SEL)arg1;	// IMP=0x00000000001111aa
@property(readonly, nonatomic) NSFileProviderExtension *v2Instance;
- (void)invalidate;	// IMP=0x00000000001110e0
- (id)itemIDsFromVendorItemIDs:(id)arg1;	// IMP=0x0000000000111066
- (id)itemsFromVendorItems:(id)arg1;	// IMP=0x0000000000110fec
- (id)itemIDFromVendorItemID:(id)arg1;	// IMP=0x0000000000110ede
- (id)itemFromVendorItem:(id)arg1;	// IMP=0x0000000000110b7f
- (id)internalErrorFromVendorError:(id)arg1 callerDescription:(id)arg2;	// IMP=0x0000000000110b02
- (void)prepareForDomainRemovalWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000110a5a
- (void)updateCapabilities;	// IMP=0x00000000001106fb
- (id)initWithVendorInstance:(id)arg1 domain:(id)arg2 extensionContext:(id)arg3 providerDomain:(id)arg4 domainVersion:(id)arg5;	// IMP=0x00000000001104d8

@end
