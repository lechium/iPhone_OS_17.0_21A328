//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVWeakReference, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVCaptureProprietaryDefaultsSingleton : NSObject
{
    char *_proprietaryDefaultsSourceQueueLabel;	// 8 = 0x8
    unsigned long long _proprietaryDefaultsSourceQueueLabelLength;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_proprietaryDefaultsSourceQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_proprietaryDefaultChangeNotificationCallbackQueue;	// 32 = 0x20
    struct OpaqueFigCaptureSource *_proprietaryDefaultsSource;	// 40 = 0x28
    AVWeakReference *_weakReference;	// 48 = 0x30
    NSMutableDictionary *_defaultChangedHandlersForObserversForKeys;	// 56 = 0x38
    NSMutableArray *_keyObservationsThatFailedToRegisterWithServer;	// 64 = 0x40
}

+ (id)cameraHistoryDownplayOverrideList;	// IMP=0x006000000000deb5
+ (void)updateCameraOverrideHistory:(id)arg1 withCameraInfo:(id)arg2 setOverride:(_Bool)arg3;	// IMP=0x006000000000de69
+ (void)updateCameraHistory:(id)arg1 withCameraInfo:(id)arg2 maxLength:(unsigned long long)arg3 updateCameraHistoryDownplayOverrideList:(_Bool)arg4 cameraCanBeInOverrideList:(_Bool)arg5;	// IMP=0x006000000000de0e
+ (id)proprietaryDefaultsDomainForAuditToken:(CDStruct_6ad76789)arg1;	// IMP=0x006000000000dddc
+ (id)proprietaryDefaultsDomainForClient;	// IMP=0x006000000000dd8d
+ (int)retryPriorFailedKeyObservationRegistrations;	// IMP=0x006000000000dd5b
+ (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x006000000000dd14
+ (id)objectForKey:(id)arg1;	// IMP=0x006000000000dcdc
+ (void)removeObserver:(id)arg1 forKey:(id)arg2;	// IMP=0x006000000000dc95
+ (void)addObserver:(id)arg1 forKey:(id)arg2 callHandlerForInitialValue:(_Bool)arg3 defaultChangedHandler:(CDUnknownBlockType)arg4;	// IMP=0x006000000000dc3a
+ (id)proprietaryDefaultsSingleton;	// IMP=0x006000000000dbf5
+ (void)initialize;	// IMP=0x006000000000db3c
- (void)_runBlockOnProprietaryDefaultsSourceQueue:(CDUnknownBlockType)arg1;	// IMP=0x000000000000f957
- (void)_handleDefaultChangedNotificationForKey:(id)arg1 newValue:(id)arg2 callHandlersAsync:(_Bool)arg3;	// IMP=0x000000000000f611
- (void)_handleNotification:(id)arg1 payload:(id)arg2;	// IMP=0x000000000000f51f
- (void)_updateProprietaryDefaultsSource:(_Bool)arg1;	// IMP=0x000000000000f0ad
- (id)cameraHistoryDownplayOverrideList;	// IMP=0x000000000000ef81
- (void)updateCameraOverrideHistory:(id)arg1 withCameraInfo:(id)arg2 setOverride:(_Bool)arg3;	// IMP=0x000000000000ee46
- (void)updateCameraHistory:(id)arg1 withCameraInfo:(id)arg2 maxLength:(unsigned long long)arg3 updateCameraHistoryDownplayOverrideList:(_Bool)arg4 cameraCanBeInOverrideList:(_Bool)arg5;	// IMP=0x000000000000ecef
- (id)proprietaryDefaultsDomainForAuditToken:(CDStruct_6ad76789)arg1;	// IMP=0x000000000000eba4
- (int)_registerWithServerToObserveKey:(id)arg1;	// IMP=0x000000000000eb5b
- (int)retryPriorFailedKeyObservationRegistrations;	// IMP=0x000000000000e79e
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000000e6af
- (id)objectForKey:(id)arg1;	// IMP=0x000000000000e4d8
- (void)removeObserver:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000000e33e
- (void)addObserver:(id)arg1 forKey:(id)arg2 callHandlerForInitialValue:(_Bool)arg3 defaultChangedHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000e076
- (void)dealloc;	// IMP=0x000000000000e007
- (id)init;	// IMP=0x000000000000dee7

@end

