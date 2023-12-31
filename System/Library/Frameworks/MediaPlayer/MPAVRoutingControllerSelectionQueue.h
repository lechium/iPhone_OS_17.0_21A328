//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPAVRoute, MPAVRoutingController, MPAVRoutingControllerSelection, MSVTimer, NSMapTable, NSMutableArray, NSMutableSet, NSSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPAVRoutingControllerSelectionQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSMutableArray *_selectionsEnqueued;	// 16 = 0x10
    MPAVRoutingControllerSelection *_selectionInProgress;	// 24 = 0x18
    NSMutableSet *_pendingRoutes;	// 32 = 0x20
    MSVTimer *_selectionInProgressTimer;	// 40 = 0x28
    NSMapTable *_pendingSelectionTimers;	// 48 = 0x30
    _Bool _hasPendingPickedRoutes;	// 56 = 0x38
    MPAVRoutingController *_routingController;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000008c7c4
@property(readonly, nonatomic) _Bool hasPendingPickedRoutes; // @synthesize hasPendingPickedRoutes=_hasPendingPickedRoutes;
@property(readonly, nonatomic) __weak MPAVRoutingController *routingController; // @synthesize routingController=_routingController;
- (void)_processSelection:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000008bf9f
- (void)_dequeue;	// IMP=0x000000000008bdf3
- (void)_dequeueSelectionWhenPossible;	// IMP=0x000000000008bda8
- (void)_enqueue:(id)arg1;	// IMP=0x000000000008b551
- (void)removePendingRoutes:(id)arg1 withError:(_Bool)arg2;	// IMP=0x000000000008b239
- (void)removePendingRoutes:(id)arg1;	// IMP=0x000000000008b222
- (void)removeAllPendingRoutes;	// IMP=0x000000000008b1d2
- (void)addPendingRoutes:(id)arg1;	// IMP=0x000000000008ae9c
- (_Bool)routeIsPendingPick:(id)arg1;	// IMP=0x000000000008adc6
@property(readonly, nonatomic) NSSet *pendingPickedRoutes;
@property(readonly, nonatomic) MPAVRoute *pendingPickedRoute;
- (void)pickedRouteDidChange;	// IMP=0x000000000008abf7
- (_Bool)hasPendingRoutes;	// IMP=0x000000000008ab69
- (void)enqueueSelectionOperation:(long long)arg1 forRoutes:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000008aac6
- (void)cancelInProgressSelectionForRoute:(id)arg1;	// IMP=0x000000000008a7b3
- (id)initWithRoutingController:(id)arg1;	// IMP=0x000000000008a6b0

@end

