//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLTimer;

@interface CLDrivingRecorderTrigger
{
    struct unique_ptr<CLMotionStateObserver_Type::Client, std::default_delete<CLMotionStateObserver_Type::Client>> _motionStateObserverClient;	// 8 = 0x8
    _Bool _enableVehicularNotifications;	// 16 = 0x10
    CLTimer *_deferredStartTimer;	// 24 = 0x18
}

- (id).cxx_construct;	// IMP=0x00200000010a517c
- (void).cxx_destruct;	// IMP=0x00100000010a5154
- (void)onDeferredStopTimerShouldPublish:(_Bool)arg1;	// IMP=0x00100000010a50fd
- (void)onDeferredStartTimerSpecifyTriggerDelay:(double)arg1;	// IMP=0x00100000010a4f9e
- (void)onMotionStateObserverNotification:(const int *)arg1 data:(const NotificationData_6024acef *)arg2;	// IMP=0x00100000010a4c28
- (void)teardownListeners;	// IMP=0x00100000010a4a76
- (void)cancelDeferredStartTimer;	// IMP=0x00100000010a4a3d
- (void)scheduleStart;	// IMP=0x00100000010a4512
- (void)setupListeners;	// IMP=0x00100000010a428b
- (void)dealloc;	// IMP=0x00100000010a4238
- (id)initWithDelegate:(id)arg1 andUniverse:(id)arg2;	// IMP=0x00100000010a3f52

@end

