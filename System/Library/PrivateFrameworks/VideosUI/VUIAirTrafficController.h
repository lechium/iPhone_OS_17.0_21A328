//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VUIAirTrafficController : NSObject
{
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 8 = 0x8
    NSMutableSet *_observers;	// 16 = 0x10
}

+ (id)defaultController;	// IMP=0x006000000000d21b
- (void).cxx_destruct;	// IMP=0x000000000000d697
@property(retain, nonatomic) NSMutableSet *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
- (void)_onConnectionQueue_stopObservingIfIdle;	// IMP=0x000000000000d624
- (void)_onConnectionQueue_startObservingIfIdle;	// IMP=0x000000000000d5e7
- (void)removeAllObservers;	// IMP=0x000000000000d519
- (void)removeObserver:(id)arg1;	// IMP=0x000000000000d400
- (void)addObserver:(id)arg1;	// IMP=0x000000000000d2e7
- (id)init;	// IMP=0x000000000000d270

@end

