//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MADServiceClientTaskQueuingScheduler, NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, VCPMediaAnalysisClientProtocol;

@interface VCPMADServicePublicClientHandler
{
    NSXPCConnection *_connection;	// 8 = 0x8
    id <VCPMediaAnalysisClientProtocol> _clientProxy;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_managementQueue;	// 24 = 0x18
    struct CF<__SecTask *> _secTask;	// 32 = 0x20
    NSString *_clientBundleID;	// 40 = 0x28
    NSString *_clientTeamID;	// 48 = 0x30
    _Bool _userSafetyEntitled;	// 56 = 0x38
    MADServiceClientTaskQueuingScheduler *_queuingTaskScheduler;	// 64 = 0x40
}

+ (id)clientHandlerWithXPCConnection:(id)arg1;	// IMP=0x00200000000054a7
- (id).cxx_construct;	// IMP=0x00200000000074b4
- (void).cxx_destruct;	// IMP=0x0010000000007430
- (void)endEntryPoint;	// IMP=0x001000000000741b
- (void)cacheHitWithQueryID:(unsigned long long)arg1 cachedResultQueryID:(unsigned long long)arg2 engagementSuggestionType:(id)arg3;	// IMP=0x00100000000071bb
- (void)cacheHitWithQueryID:(unsigned long long)arg1 cachedResultQueryID:(unsigned long long)arg2;	// IMP=0x001000000000719d
- (void)startEntryPointWithQueryID:(unsigned long long)arg1 andEvent:(unsigned long long)arg2;	// IMP=0x0010000000007182
- (void)startEntryPointWithQueryID:(unsigned long long)arg1;	// IMP=0x001000000000716a
- (void)queryUserSafetyEnablement:(CDUnknownBlockType)arg1;	// IMP=0x0010000000006f98
- (void)cancelAllRequests;	// IMP=0x0010000000006e92
- (void)cancelRequest:(int)arg1;	// IMP=0x0010000000006d82
- (void)currentOutstandingTasksWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000006d2a
- (void)requestVideoProcessing:(id)arg1 assetURL:(id)arg2 sandboxToken:(id)arg3 identifier:(id)arg4 requestID:(int)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x00100000000065b0
- (void)requestImageProcessing:(id)arg1 forAssetURL:(id)arg2 withSandboxToken:(id)arg3 identifier:(id)arg4 requestID:(int)arg5 andReply:(CDUnknownBlockType)arg6;	// IMP=0x0010000000005e4b
- (void)requestImageProcessing:(id)arg1 forIOSurface:(id)arg2 withOrientation:(unsigned int)arg3 identifier:(id)arg4 requestID:(int)arg5 andReply:(CDUnknownBlockType)arg6;	// IMP=0x0010000000005772
- (long long)consumeSandboxExtension:(id)arg1 url:(id)arg2;	// IMP=0x001000000000550c
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x0010000000004d1e
- (id)init;	// IMP=0x0010000000004d10

@end

