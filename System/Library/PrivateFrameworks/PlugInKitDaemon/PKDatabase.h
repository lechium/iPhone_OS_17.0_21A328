//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSString, PKDAnnotationStore, PKDPersonaCache;
@protocol PKApplicationWorkspaceProxy, PKDProxyFactory, PKDatabaseDelegate;

@interface PKDatabase : NSObject
{
    struct os_unfair_lock_s _cacheLock;	// 8 = 0x8
    id <PKApplicationWorkspaceProxy> _workspace;	// 16 = 0x10
    PKDAnnotationStore *_annotations;	// 24 = 0x18
    NSCache *_cache;	// 32 = 0x20
    unsigned long long _cacheHits;	// 40 = 0x28
    unsigned long long _cacheMisses;	// 48 = 0x30
    id _regionObserver;	// 56 = 0x38
    PKDPersonaCache *_personaCache;	// 64 = 0x40
    id <PKDatabaseDelegate> _delegate;	// 72 = 0x48
    id <PKDProxyFactory> _proxyFactory;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000054a0
@property(readonly, nonatomic) id <PKDProxyFactory> proxyFactory; // @synthesize proxyFactory=_proxyFactory;
@property __weak id <PKDatabaseDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PKDPersonaCache *personaCache; // @synthesize personaCache=_personaCache;
@property(retain, nonatomic) id regionObserver; // @synthesize regionObserver=_regionObserver;
@property(nonatomic) unsigned long long cacheMisses; // @synthesize cacheMisses=_cacheMisses;
@property(nonatomic) unsigned long long cacheHits; // @synthesize cacheHits=_cacheHits;
@property(retain, nonatomic) NSCache *cache; // @synthesize cache=_cache;
@property(nonatomic) struct os_unfair_lock_s cacheLock; // @synthesize cacheLock=_cacheLock;
@property(retain, nonatomic) PKDAnnotationStore *annotations; // @synthesize annotations=_annotations;
@property(retain, nonatomic) id <PKApplicationWorkspaceProxy> workspace; // @synthesize workspace=_workspace;
- (void)pluginsDidUninstall:(id)arg1;	// IMP=0x0000000000004b80
- (void)pluginsDidInstall:(id)arg1;	// IMP=0x00000000000047c0
- (void)_locked_autoElect:(id)arg1;	// IMP=0x0000000000004680
- (void)notifyAnnotationChange;	// IMP=0x0000000000004610
- (id)setAnnotation:(id)arg1 forPlugIn:(id)arg2;	// IMP=0x0000000000004570
- (id)annotationForIdentifier:(id)arg1;	// IMP=0x00000000000044d0
- (id)annotationForPlugIn:(id)arg1;	// IMP=0x0000000000004430
- (id)removePlugIn:(id)arg1;	// IMP=0x00000000000042b0
- (id)addPlugIn:(id)arg1;	// IMP=0x0000000000004130
- (id)plugInsWithExtensionPointName:(id)arg1 platforms:(id)arg2;	// IMP=0x0000000000003dd0
- (id)plugInsWithinApplication:(id)arg1;	// IMP=0x0000000000003af0
- (id)findPlugInAtPath:(id)arg1;	// IMP=0x00000000000039f0
- (id)findPlugInWithUUID:(id)arg1 discoveryUUID:(id)arg2 extensionPointCache:(id)arg3;	// IMP=0x0000000000003850
- (id)findPlugInWithUUID:(id)arg1;	// IMP=0x00000000000037c0
- (id)findPlugInsForQuery:(id)arg1 discoveryInstanceUUID:(id)arg2 allVersions:(_Bool)arg3;	// IMP=0x0000000000002e90
- (id)createPlugInForProxy:(id)arg1 uuid:(id)arg2 discoveryInstanceUUID:(id)arg3 extensionPointCache:(id)arg4;	// IMP=0x0000000000002c50
- (id)plugInForExtensionRecord:(id)arg1 discoveryInstanceUUID:(id)arg2 extensionPointCache:(id)arg3;	// IMP=0x0000000000002ad0
- (id)plugInForProxy:(id)arg1 discoveryInstanceUUID:(id)arg2 extensionPointCache:(id)arg3;	// IMP=0x0000000000002980
- (id)cachedPlugInWithUUID:(id)arg1;	// IMP=0x0000000000002910
- (id)_locked_cachedPlugInWithUUID:(id)arg1;	// IMP=0x00000000000027e0
- (void)cache:(id)arg1 willEvictObject:(id)arg2;	// IMP=0x00000000000027d0
- (id)initWithDatabase:(id)arg1 proxyFactory:(id)arg2;	// IMP=0x0000000000002460

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

