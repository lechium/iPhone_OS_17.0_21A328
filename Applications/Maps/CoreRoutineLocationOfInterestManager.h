//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSMutableSet;
@protocol NSObject, OS_dispatch_group, OS_dispatch_queue;

@interface CoreRoutineLocationOfInterestManager : NSObject
{
    NSMutableDictionary *_loisByType;	// 8 = 0x8
    NSMutableSet *_retrievingLOIsOfTypes;	// 16 = 0x10
    NSMutableSet *_invalidatedLOIsOfTypes;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 32 = 0x20
    NSObject<OS_dispatch_group> *_initialRetrievalDispatchGroup;	// 40 = 0x28
    id <NSObject> _notificationObserver;	// 48 = 0x30
}

+ (id)sharedManager;	// IMP=0x00400000006f5b0c
- (void).cxx_destruct;	// IMP=0x00200000006f6e3f
@property(retain, nonatomic) id <NSObject> notificationObserver; // @synthesize notificationObserver=_notificationObserver;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *initialRetrievalDispatchGroup; // @synthesize initialRetrievalDispatchGroup=_initialRetrievalDispatchGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) NSMutableSet *invalidatedLOIsOfTypes; // @synthesize invalidatedLOIsOfTypes=_invalidatedLOIsOfTypes;
@property(readonly, nonatomic) NSMutableSet *retrievingLOIsOfTypes; // @synthesize retrievingLOIsOfTypes=_retrievingLOIsOfTypes;
@property(readonly, nonatomic) NSMutableDictionary *loisByType; // @synthesize loisByType=_loisByType;
- (void)retrieveLOIsOfType:(long long)arg1;	// IMP=0x00100000006f69d0
- (id)monitoredLOITypes;	// IMP=0x00100000006f6929
- (_Bool)monitoringLOIsOfType:(long long)arg1;	// IMP=0x00100000006f682a
- (void)addNotificationObserverIfNeeded;	// IMP=0x00100000006f66f4
- (void)invalidateLOIsOfType:(long long)arg1;	// IMP=0x00100000006f65b6
- (void)invalidateLOIs;	// IMP=0x00100000006f633a
- (void)afterInitialRetrievalOfLOIsOfTypes:(id)arg1 perform:(CDUnknownBlockType)arg2;	// IMP=0x00100000006f6328
- (void)monitorLOIsOfTypes:(id)arg1 initialRetrievalComplete:(CDUnknownBlockType)arg2;	// IMP=0x00100000006f5f59
- (void)monitorLOIsOfTypes:(id)arg1;	// IMP=0x00100000006f5f3a
- (void)locationsOfInterestWithType:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000006f5d92
- (id)locationsOfInterestWithType:(long long)arg1;	// IMP=0x00100000006f5d0b
@property(readonly, nonatomic) NSArray *gymLOIs;
@property(readonly, nonatomic) NSArray *schoolLOIs;
@property(readonly, nonatomic) NSArray *workLOIs;
@property(readonly, nonatomic) NSArray *homeLOIs;
- (void)dealloc;	// IMP=0x00100000006f5c3c
- (id)init;	// IMP=0x00100000006f5b61

@end
