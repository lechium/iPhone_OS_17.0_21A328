//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSConnection, NSString;
@protocol OS_dispatch_queue;

@interface RemoteNotificationHandler : NSObject
{
    APSConnection *_apsConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_apsQueue;	// 16 = 0x10
}

+ (id)sharedHandler;	// IMP=0x0020000000017e47
- (void).cxx_destruct;	// IMP=0x002000000001aaa8
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *apsQueue; // @synthesize apsQueue=_apsQueue;
@property(retain, nonatomic) APSConnection *apsConnection; // @synthesize apsConnection=_apsConnection;
- (id)_storeDSIDs;	// IMP=0x001000000001a80c
- (id)_cloudDSID;	// IMP=0x001000000001a78b
- (void)_registerCloudPublicToken:(id)arg1;	// IMP=0x001000000001a260
- (void)_handleRequesterNotification:(id)arg1;	// IMP=0x0010000000019fb9
- (void)_handleStoreNotificationPayload:(id)arg1;	// IMP=0x001000000001941b
- (void)_handleApproverNotification:(id)arg1;	// IMP=0x0010000000019174
- (void)_handleCloudNotificationPayload:(id)arg1;	// IMP=0x00100000000188eb
- (void)_startConnection;	// IMP=0x0010000000018579
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x0010000000018143
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x0010000000017fe2
- (void)handleLegacyStoreNotificationPayload:(id)arg1;	// IMP=0x0010000000017f0d
- (void)start;	// IMP=0x0010000000017e9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
