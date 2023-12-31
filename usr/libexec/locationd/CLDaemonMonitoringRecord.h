//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreLocation/CLMonitoringRecord.h>

@class CLCondition, CLMonitoringEvent, NSString;

@interface CLDaemonMonitoringRecord : CLMonitoringRecord
{
    CLCondition *_daemonCondition;	// 8 = 0x8
    CLMonitoringEvent *_daemonEvent;	// 16 = 0x10
    NSString *_recordIdentifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000004c9912
@property(retain, nonatomic) NSString *recordIdentifier; // @synthesize recordIdentifier=_recordIdentifier;
@property(retain, nonatomic) CLMonitoringEvent *daemonEvent; // @synthesize daemonEvent=_daemonEvent;
@property(retain, nonatomic) CLCondition *daemonCondition; // @synthesize daemonCondition=_daemonCondition;
- (_Bool)isMonitoring;	// IMP=0x00100000004c9fd9
- (id)description;	// IMP=0x00100000004c9f0d
- (id)debugDescription;	// IMP=0x00100000004c9eae
- (id)getMonitoringRecordToNotifyClient;	// IMP=0x00100000004c9e2e
- (void)updateDaemonEvent:(id)arg1;	// IMP=0x00100000004c9e1c
- (void)updateClientEvent:(id)arg1;	// IMP=0x00100000004c9ded
- (_Bool)shouldSendEvent;	// IMP=0x00100000004c9d78
@property(readonly) CLCondition *clientCondition;
@property(readonly) CLMonitoringEvent *clientEvent;
@property(readonly) unsigned long long daemonState;
@property(readonly) unsigned long long clientState;
- (void)setupDaemonPartOfConditionWithAuthContext:(id)arg1 universe:(id)arg2 identifier:(id)arg3 stopMonitoring:(_Bool)arg4 callbackHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000004c9ae8
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000004c99f4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000004c991a
- (void)dealloc;	// IMP=0x00100000004c9895
- (id)initWithClientMonitoringRecord:(id)arg1 authorizationContext:(id)arg2 universe:(id)arg3 identifier:(id)arg4 initForStopMonitoring:(_Bool)arg5 callbackHandler:(CDUnknownBlockType)arg6;	// IMP=0x00100000004c97a2

@end

