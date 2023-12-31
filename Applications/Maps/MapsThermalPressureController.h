//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOObserverHashTable, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface MapsThermalPressureController : NSObject
{
    NSMutableDictionary *_mitigationObservers;	// 8 = 0x8
    GEOObserverHashTable *_thermalPressureObservers;	// 16 = 0x10
    _Bool _notifyInitialized;	// 24 = 0x18
    int _token;	// 28 = 0x1c
    unsigned long long _currentThermalPressureLevel;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_isolationQueue;	// 40 = 0x28
}

+ (id)mitigations;	// IMP=0x0020000000a0146a
+ (id)sharedController;	// IMP=0x0010000000a01415
- (void).cxx_destruct;	// IMP=0x0020000000a02d1a
- (void)valueChangedForGEOConfigKey:(CDStruct_065526f1)arg1;	// IMP=0x0010000000a02c86
- (void)_updateAllObservers;	// IMP=0x0010000000a02ada
- (void)_updateObserversOfMitigationNamed:(id)arg1;	// IMP=0x0010000000a02a6e
- (void)_handleNotifyCallback;	// IMP=0x0010000000a02964
- (id)_observersOfMitigationNamed:(id)arg1;	// IMP=0x0010000000a028cb
- (_Bool)shouldActivateMitigationNamed:(id)arg1;	// IMP=0x0010000000a02611
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000a023a0
- (void)removeThermalPressureObserver:(id)arg1;	// IMP=0x0010000000a0220b
- (void)addThermalPressureObserver:(id)arg1;	// IMP=0x0010000000a02076
- (void)removeObserver:(id)arg1 forMitigationNamed:(id)arg2;	// IMP=0x0010000000a01e8b
- (void)addObserver:(id)arg1 forMitigationNamed:(id)arg2;	// IMP=0x0010000000a01ca0
@property(readonly, nonatomic) int currentThermalPressureLevel;
- (void)dealloc;	// IMP=0x0010000000a0196e
- (id)init;	// IMP=0x0010000000a014ba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

