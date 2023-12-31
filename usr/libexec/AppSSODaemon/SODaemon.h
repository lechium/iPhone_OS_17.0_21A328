//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection, NSXPCListener, SOAuthorizationRequestParameters, SODaemonUIManager, SOExtension;

@interface SODaemon : NSObject
{
    CDUnknownBlockType _authenticateCompletion;	// 8 = 0x8
    SODaemonUIManager *_daemonUIManager;	// 16 = 0x10
    NSString *_requestQueueIdentifier;	// 24 = 0x18
    SOExtension *_extension;	// 32 = 0x20
    SOAuthorizationRequestParameters *_requestParameters;	// 40 = 0x28
    NSXPCListener *_extensionXpcListener;	// 48 = 0x30
    NSXPCConnection *_xpcConnection;	// 56 = 0x38
    CDUnknownBlockType _invalidationHandler;	// 64 = 0x40
}

+ (CDUnknownBlockType)_processRequestBlock;	// IMP=0x0020000000004fde
- (void).cxx_destruct;	// IMP=0x00200000000090fa
@property(copy) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
- (void)authorization:(id)arg1 didCompleteWithCredential:(id)arg2 error:(id)arg3;	// IMP=0x0010000000008eb5
- (void)_extensionCleanup;	// IMP=0x0010000000008dde
- (void)_updateCallerPropertiesFromAuditTokenInParameters:(id)arg1;	// IMP=0x001000000000898e
- (void)_updateUsageOfInternalExtensionsInParameters:(id)arg1;	// IMP=0x0010000000008907
- (void)beginAuthorizationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000883d
- (void)connectionInvalidated;	// IMP=0x001000000000879d
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000000084d1
- (void)authorizationDidCompleteWithCredential:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000008215
- (void)isExtensionProcessWithAuditToken:(CDStruct_6ad76789)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000007ffe
- (void)finishAuthorization:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000007bb6
- (void)debugHintsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000007abf
- (void)realmsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000079aa
- (void)configurationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000007870
- (void);	// IMP=0x00100000000074af
- (_Bool)_doAKshouldProcessURL:(id)arg1;	// IMP=0x0010000000007381
- (void)_doPerformAuthorizationWithRequestParameters:(id)arg1 profile:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000006d74
- (void)beginAuthorizationWithRequestParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000006479
- (void)_performAuthorizationWithRequestParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000006103
- (void)performAuthorizationWithRequestParameters:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000057a1
- (void)_doGetAuthorizationHintsWithURL:(id)arg1 responseCode:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000053de
- (void)getAuthorizationHintsWithURL:(id)arg1 responseCode:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000052c0
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x0010000000004dcf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

