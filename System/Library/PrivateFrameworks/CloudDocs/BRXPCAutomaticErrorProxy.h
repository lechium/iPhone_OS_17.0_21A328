//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FileProvider/FPXPCAutomaticErrorProxy.h>

@class NSFileProviderService, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface BRXPCAutomaticErrorProxy : FPXPCAutomaticErrorProxy
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSFileProviderService *_service;	// 16 = 0x10
}

+ (void)decrementConnectionRefCount:(id)arg1;	// IMP=0x001000000008e63e
+ (void)incrementConnectionRefCount:(id)arg1;	// IMP=0x001000000008e4c2
+ (_Bool)sanitizeErrors;	// IMP=0x001000000008e4ba
- (void).cxx_destruct;	// IMP=0x000000000008e7de
- (void)dealloc;	// IMP=0x000000000008e47c
- (void)invalidate;	// IMP=0x000000000008e3f5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008e337
- (id)initWithConnection:(id)arg1 service:(id)arg2 interface:(id)arg3;	// IMP=0x000000000008e1cb

// Remaining properties
@property unsigned long long timeoutState;

@end
