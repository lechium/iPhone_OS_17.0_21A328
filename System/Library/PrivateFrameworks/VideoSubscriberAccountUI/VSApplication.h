//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKAppContext, NSError, NSHTTPCookieStorage, NSString, NSURL, VSAppDeviceConfig, VSAuditToken, VSStateMachine;
@protocol VSApplicationDelegate;

__attribute__((visibility("hidden")))
@interface VSApplication : NSObject
{
    _Bool _shouldAllowRemoteInspection;	// 8 = 0x8
    NSURL *_bootURL;	// 16 = 0x10
    IKAppContext *_appContext;	// 24 = 0x18
    id <VSApplicationDelegate> _delegate;	// 32 = 0x20
    VSAuditToken *_auditToken;	// 40 = 0x28
    NSString *_vendorIdentifier;	// 48 = 0x30
    VSStateMachine *_stateMachine;	// 56 = 0x38
    VSAppDeviceConfig *_appDeviceConfig;	// 64 = 0x40
    NSHTTPCookieStorage *_cookieStorage;	// 72 = 0x48
    NSError *_failureToStart;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000032ec4
@property(retain, nonatomic) NSError *failureToStart; // @synthesize failureToStart=_failureToStart;
@property(retain, nonatomic) NSHTTPCookieStorage *cookieStorage; // @synthesize cookieStorage=_cookieStorage;
@property(retain, nonatomic) VSAppDeviceConfig *appDeviceConfig; // @synthesize appDeviceConfig=_appDeviceConfig;
@property(retain, nonatomic) VSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(copy, nonatomic) NSString *vendorIdentifier; // @synthesize vendorIdentifier=_vendorIdentifier;
@property(nonatomic) _Bool shouldAllowRemoteInspection; // @synthesize shouldAllowRemoteInspection=_shouldAllowRemoteInspection;
@property(copy, nonatomic) VSAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(nonatomic) __weak id <VSApplicationDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IKAppContext *appContext; // @synthesize appContext=_appContext;
@property(readonly, copy, nonatomic) NSURL *bootURL; // @synthesize bootURL=_bootURL;
- (id)viewElementRegistry;	// IMP=0x0000000000032a15
- (id)activeDocument;	// IMP=0x00000000000329b6
- (id)appLaunchParams;	// IMP=0x0000000000032957
- (id)userDefaultsStorage;	// IMP=0x000000000003294f
- (id)vendorStorage;	// IMP=0x0000000000032947
- (id)localStorage;	// IMP=0x000000000003293f
- (id)appIdentifier;	// IMP=0x00000000000328e8
- (id)appJSURL;	// IMP=0x00000000000328d6
- (_Bool)shouldIgnoreJSValidation;	// IMP=0x00000000000328ce
- (_Bool)appIsTrusted;	// IMP=0x00000000000328c6
- (void)willPerformXhrRequest:(id)arg1;	// IMP=0x00000000000328ac
- (id)sourceApplicationAuditTokenDataForContext:(id)arg1;	// IMP=0x000000000003285c
- (id)sourceApplicationBundleIdentifierForContext:(id)arg1;	// IMP=0x000000000003280c
- (id)xhrSessionConfigurationForContext:(id)arg1;	// IMP=0x0000000000032760
- (id)objectForPlayer:(id)arg1;	// IMP=0x0000000000032758
- (id)objectForPlaylist:(id)arg1;	// IMP=0x0000000000032750
- (id)objectForMediaItem:(id)arg1;	// IMP=0x0000000000032748
- (void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;	// IMP=0x00000000000326dd
- (void)appContext:(id)arg1 didStopWithOptions:(id)arg2;	// IMP=0x00000000000325f8
- (void)appContext:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000000003254b
- (void)appContext:(id)arg1 didStartWithOptions:(id)arg2;	// IMP=0x0000000000032507
- (_Bool)appContext:(id)arg1 validateDOMDocument:(id)arg2 inContext:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000324ff
- (id)deviceConfigForContext:(id)arg1;	// IMP=0x00000000000324ed
- (void)appDocumentForDocument:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000032281
- (void)sendErrorWithMessage:(id)arg1;	// IMP=0x0000000000032216
- (void)evaluate:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003218b
- (void)stop;	// IMP=0x0000000000032147
- (void)start;	// IMP=0x0000000000032103
- (void)transitionToInvalidState;	// IMP=0x00000000000320a3
- (void)transitionToStoppingState;	// IMP=0x0000000000032066
- (void)transitionToReadyState;	// IMP=0x0000000000031fc9
- (void)transitionToNotifyingOfFailureToStartState;	// IMP=0x0000000000031ebc
- (void)transitionToStartingState;	// IMP=0x0000000000031ddf
- (void)dealloc;	// IMP=0x0000000000031d2e
- (id)initWithBootURL:(id)arg1;	// IMP=0x0000000000031a8c
- (id)init;	// IMP=0x0000000000031a1d
- (oneway void)release;	// IMP=0x000000000000c3d7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

