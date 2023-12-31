//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSXPCConnection;
@protocol MRXPCConnectionMonitorDelegate, OS_dispatch_queue, OS_xpc_object;

@interface MRXPCConnectionMonitor : NSObject
{
    NSString *_label;	// 8 = 0x8
    _Bool _pendingBarrierCompletion;	// 16 = 0x10
    int _pid;	// 20 = 0x14
    id <MRXPCConnectionMonitorDelegate> _delegate;	// 24 = 0x18
    NSXPCConnection *_connection;	// 32 = 0x20
    NSObject<OS_xpc_object> *_connection_t;	// 40 = 0x28
    NSString *_bundleID;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 56 = 0x38
    unsigned long long _currentMessageCount;	// 64 = 0x40
    unsigned long long _totalMessageCount;	// 72 = 0x48
    unsigned long long _status;	// 80 = 0x50
    NSDate *_lastStatusCheckDate;	// 88 = 0x58
    NSDate *_lastStatusChangeDate;	// 96 = 0x60
    NSDate *_lastMessageSentDate;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x002000000010654c
@property(retain, nonatomic) NSDate *lastMessageSentDate; // @synthesize lastMessageSentDate=_lastMessageSentDate;
@property(retain, nonatomic) NSDate *lastStatusChangeDate; // @synthesize lastStatusChangeDate=_lastStatusChangeDate;
@property(retain, nonatomic) NSDate *lastStatusCheckDate; // @synthesize lastStatusCheckDate=_lastStatusCheckDate;
@property(nonatomic) _Bool pendingBarrierCompletion; // @synthesize pendingBarrierCompletion=_pendingBarrierCompletion;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) unsigned long long totalMessageCount; // @synthesize totalMessageCount=_totalMessageCount;
@property(nonatomic) unsigned long long currentMessageCount; // @synthesize currentMessageCount=_currentMessageCount;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue; // @synthesize calloutQueue=_calloutQueue;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
@property(retain, nonatomic) NSObject<OS_xpc_object> *connection_t; // @synthesize connection_t=_connection_t;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) __weak id <MRXPCConnectionMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_onCalloutQueue_notifyStatusDidChange:(unsigned long long)arg1;	// IMP=0x0010000000106002
- (void)_checkConnectionStatus;	// IMP=0x0010000000105b36
- (_Bool)_canSendMessage;	// IMP=0x0010000000105a50
- (void)canSendMessage:(CDUnknownBlockType)arg1;	// IMP=0x0010000000105993
- (id)label;	// IMP=0x001000000010594b
- (id)debugDescription;	// IMP=0x00100000001056c2
- (id)description;	// IMP=0x0010000000105637
- (id)_initWithLabel:(id)arg1;	// IMP=0x0010000000105586
- (id)initWithXPCConnection:(id)arg1 label:(id)arg2;	// IMP=0x00100000001054cb
- (id)initWithConnection:(id)arg1 label:(id)arg2;	// IMP=0x00100000001053ff

@end

