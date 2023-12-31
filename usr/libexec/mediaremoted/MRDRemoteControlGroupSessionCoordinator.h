//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CARSessionStatus, CUSystemMonitor, IDSAccountController, NSString;
@protocol OS_dispatch_queue;

@interface MRDRemoteControlGroupSessionCoordinator : NSObject
{
    _Bool _throttled;	// 8 = 0x8
    _Bool _startingSession;	// 9 = 0x9
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    IDSAccountController *_accountController;	// 24 = 0x18
    CUSystemMonitor *_systemMonitor;	// 32 = 0x20
    CARSessionStatus *_carStatus;	// 40 = 0x28
    NSString *_hostedSessionIdentifier;	// 48 = 0x30
    NSString *_rotatingSessionIdentifier;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000004b55c
@property(retain, nonatomic) NSString *rotatingSessionIdentifier; // @synthesize rotatingSessionIdentifier=_rotatingSessionIdentifier;
@property(retain, nonatomic) NSString *hostedSessionIdentifier; // @synthesize hostedSessionIdentifier=_hostedSessionIdentifier;
@property(nonatomic, getter=isStartingSession) _Bool startingSession; // @synthesize startingSession=_startingSession;
@property(nonatomic, getter=isThrottled) _Bool throttled; // @synthesize throttled=_throttled;
@property(retain, nonatomic) CARSessionStatus *carStatus; // @synthesize carStatus=_carStatus;
@property(retain, nonatomic) CUSystemMonitor *systemMonitor; // @synthesize systemMonitor=_systemMonitor;
@property(retain, nonatomic) IDSAccountController *accountController; // @synthesize accountController=_accountController;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)collectDiagnostic:(id)arg1;	// IMP=0x001000000004b39d
- (void)clearHostedSessionState;	// IMP=0x001000000004b339
- (void)applySessionStartingThrottle:(double)arg1;	// IMP=0x001000000004b19e
- (void)accountController:(id)arg1 accountDisabled:(id)arg2;	// IMP=0x001000000004b18c
- (void)accountController:(id)arg1 accountEnabled:(id)arg2;	// IMP=0x001000000004b17a
- (void)accountController:(id)arg1 accountRemoved:(id)arg2;	// IMP=0x001000000004b168
- (void)accountController:(id)arg1 accountAdded:(id)arg2;	// IMP=0x001000000004b156
- (void)sessionDidRemoveAllParticipants:(id)arg1;	// IMP=0x001000000004af15
- (void)session:(id)arg1 didChangeState:(long long)arg2;	// IMP=0x001000000004ac09
- (void)sessionDidDisconnect:(id)arg1;	// IMP=0x001000000004ab82
- (void)sessionDidConnect:(id)arg1;	// IMP=0x001000000004aafb
- (void)reevaluateSystemState;	// IMP=0x001000000004a2da
- (void)handleUserNotification:(id)arg1;	// IMP=0x001000000004a253
- (void)handleEndpointNotification:(id)arg1;	// IMP=0x001000000004a1cc
- (_Bool)isCarPlay;	// IMP=0x001000000004a169
- (_Bool)userStateIsValidForHostingGroupSession:(id *)arg1;	// IMP=0x0010000000049e64
- (_Bool)manateeStateIsValidForHostingGroupSession;	// IMP=0x0010000000049e4e
- (_Bool)accountIsValidForHostingGroupSession;	// IMP=0x0010000000049e14
- (unsigned char)pickedRouteType;	// IMP=0x0010000000049b89
- (void)initializeObserversAndState;	// IMP=0x0010000000049620
- (id)diagnosticDescription;	// IMP=0x00100000000494d3
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x001000000004929a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

