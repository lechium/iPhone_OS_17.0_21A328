//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMHomeManager, NSMutableSet, NSString;
@protocol MediaControlsHomeObserverDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MediaControlsHomeObserver : NSObject
{
    HMHomeManager *_homeManager;	// 8 = 0x8
    NSMutableSet *_knownUIDs;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_serialQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_notifyQueue;	// 32 = 0x20
    id <MediaControlsHomeObserverDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000030143
@property(nonatomic) __weak id <MediaControlsHomeObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;	// IMP=0x000000000003008d
- (void)home:(id)arg1 didAddAccessory:(id)arg2;	// IMP=0x000000000002fffe
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;	// IMP=0x000000000002fe00
- (void)homeManager:(id)arg1 didAddHome:(id)arg2;	// IMP=0x000000000002fbd0
- (void)homeManagerDidUpdateHomes:(id)arg1;	// IMP=0x000000000002fa7b
- (void)_notifyDelegate;	// IMP=0x000000000002f99c
- (void)_updateUIDs;	// IMP=0x000000000002f67c
- (_Bool)hasAccessoryWithUID:(id)arg1;	// IMP=0x000000000002f4fb
- (void)stopObserving;	// IMP=0x000000000002f3c8
- (void)beginObserving;	// IMP=0x000000000002f27b
- (id)init;	// IMP=0x000000000002f068

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

