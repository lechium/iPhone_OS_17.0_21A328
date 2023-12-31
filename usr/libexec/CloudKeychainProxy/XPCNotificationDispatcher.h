//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSPointerArray;
@protocol OS_dispatch_queue;

@interface XPCNotificationDispatcher : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSPointerArray *_listeners;	// 16 = 0x10
}

+ (id)dispatcher;	// IMP=0x00400000000023dc
- (void).cxx_destruct;	// IMP=0x002000000000221b
@property(retain) NSPointerArray *listeners; // @synthesize listeners=_listeners;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)removeListener:(id)arg1;	// IMP=0x001000000000211c
- (void)addListener:(id)arg1;	// IMP=0x0010000000002063
- (void)notification:(const char *)arg1;	// IMP=0x0010000000001f8a
- (id)init;	// IMP=0x0010000000001e1e

@end

