//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object;

@interface CSVoiceIdXPCConnection : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_xpc_object> *_connection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000cfaa5
@property(retain, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_sendReplyMessageWithResult:(_Bool)arg1 error:(id)arg2 event:(id)arg3 client:(id)arg4;	// IMP=0x00100000000cf97b
- (void)_handleClientError:(id)arg1 client:(id)arg2;	// IMP=0x00100000000cf7b2
- (void)_handleClientMessage:(id)arg1 client:(id)arg2;	// IMP=0x00100000000cf081
- (void)_handleClientEvent:(id)arg1;	// IMP=0x00100000000cef1b
- (void)activateConnection;	// IMP=0x00100000000cee6c
- (id)initWithConnection:(id)arg1;	// IMP=0x00100000000ced2d

@end
