//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSConnection, NSOrderedSet, NSString;
@protocol OS_dispatch_queue, _BDSNotificationConnectionListenerDelegate;

@interface _BDSLegacyAPSNotificationConnectionListener : NSObject
{
    NSOrderedSet *_configurations;	// 8 = 0x8
    id <_BDSNotificationConnectionListenerDelegate> _delegate;	// 16 = 0x10
    APSConnection *_connection;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000068267
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
@property(retain, nonatomic) APSConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) __weak id <_BDSNotificationConnectionListenerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSOrderedSet *configurations; // @synthesize configurations=_configurations;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x0010000000067fc5
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x0010000000067f84
- (void)startListeningForNotifications;	// IMP=0x0010000000067adc
- (id)initWithContainerConfigurations:(id)arg1 delegate:(id)arg2;	// IMP=0x0010000000067a05

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

