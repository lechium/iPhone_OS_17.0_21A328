//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSHashTable;

__attribute__((visibility("hidden")))
@interface HMDWatchSystemState : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _companionReachable;	// 12 = 0xc
    NSHashTable *_watchSystemStateDelegates;	// 16 = 0x10
}

+ (id)sharedState;	// IMP=0x00600000008e5b43
- (void).cxx_destruct;	// IMP=0x00000000008e5b30
- (void)_callDidUpdateReachabilityChangeForCompanion:(_Bool)arg1 forDelegate:(id)arg2;	// IMP=0x00000000008e5ac3
- (void)registerDelegate:(id)arg1;	// IMP=0x00000000008e5a4d
@property(readonly, nonatomic) NSHashTable *watchSystemStateDelegates; // @synthesize watchSystemStateDelegates=_watchSystemStateDelegates;
@property(nonatomic, getter=isCompanionReachable) _Bool companionReachable; // @synthesize companionReachable=_companionReachable;
- (id)init;	// IMP=0x00000000008e55eb

@end

