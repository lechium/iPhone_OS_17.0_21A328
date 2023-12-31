//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProxy.h>

@class IMMessageContext, IMRemoteObjectBroadcaster, NSArray, NSString, Protocol;

@interface Broadcaster : NSProxy
{
    NSArray *_targets;	// 8 = 0x8
    IMRemoteObjectBroadcaster *_parent;	// 16 = 0x10
    Protocol *_protocol;	// 24 = 0x18
    IMMessageContext *_messageContext;	// 32 = 0x20
    int _curXPCMessagePriority;	// 40 = 0x28
    CDUnknownBlockType _completion;	// 48 = 0x30
}

@property(nonatomic) int curXPCMessagePriority; // @synthesize curXPCMessagePriority=_curXPCMessagePriority;
- (void)forwardInvocation:(id)arg1;	// IMP=0x000000000002946d
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000000029408
- (void)sendXPCObject:(id)arg1;	// IMP=0x0000000000028f32
- (void)dealloc;	// IMP=0x0000000000028ec7
- (id)initWithNotifier:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 targets:(id)arg4 priority:(int)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000028e16
- (id)initWithNotifier:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 targets:(id)arg4 priority:(int)arg5;	// IMP=0x0000000000028dfb
- (id)initWithNotifier:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 targets:(id)arg4;	// IMP=0x0000000000028dd9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

