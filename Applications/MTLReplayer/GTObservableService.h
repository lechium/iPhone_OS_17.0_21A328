//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface GTObservableService : NSObject
{
    NSMutableDictionary *_observerIdToObserver;	// 8 = 0x8
    unsigned long long _nextObserverId;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000008189
@property(readonly) unsigned long long count;
- (void)notifyAll:(CDUnknownBlockType)arg1;	// IMP=0x0010000000007fec
- (void)deregisterObserversForConnection:(id)arg1 path:(id)arg2;	// IMP=0x0010000000007c1d
- (void)deregisterObserver:(unsigned long long)arg1;	// IMP=0x0010000000007bc9
- (unsigned long long)registerObserver:(id)arg1;	// IMP=0x0010000000007b3e
- (id)init;	// IMP=0x0010000000007ae0

@end
