//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ADCommandExecutionContext, NSObject;
@protocol ADCommandCenterRequestDelegate, ADUIServiceDelegate, OS_dispatch_queue;

@interface ADUIService
{
    id <ADCommandCenterRequestDelegate> _requestDelegate;	// 8 = 0x8
    id <ADUIServiceDelegate> _delegate;	// 16 = 0x10
    ADCommandExecutionContext *_lastHandledContext;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

+ (id)serviceIdentifierForRequestDelegate:(id)arg1;	// IMP=0x004000000021294a
- (void).cxx_destruct;	// IMP=0x002000000021213f
- (void)setDelegate:(id)arg1;	// IMP=0x001000000021212b
- (void)handleCommand:(id)arg1 forDomain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000211bb0
- (void)_wakeSystemForHandlingCommand;	// IMP=0x0010000000211baa
- (_Bool)_isWakeSystemSupportedOnPlatform;	// IMP=0x0010000000211ba0
- (_Bool)_shouldWakeSystemForHandlingCommand:(id)arg1 executionContext:(id)arg2;	// IMP=0x0010000000211b0c
- (void)cancelOperationsForRequestID:(id)arg1 forAssistantID:(id)arg2 fromRemote:(_Bool)arg3;	// IMP=0x0010000000211a65
- (id)controlCenterLockRestrictedCommands;	// IMP=0x0010000000211a5d
- (_Bool)implementsCommand:(id)arg1 forDomain:(id)arg2;	// IMP=0x0010000000211a55
- (id)commandsForDomain:(id)arg1;	// IMP=0x0010000000211783
- (id)domains;	// IMP=0x001000000021169b
- (id)handle;	// IMP=0x0010000000211686
- (id)initWithRequestDelegate:(id)arg1;	// IMP=0x0010000000211584

@end

