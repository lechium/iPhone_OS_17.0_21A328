//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlaybackEngineEventStream, NSMutableDictionary, NSString;
@protocol MPCPlaybackEngineEventConsumer;

__attribute__((visibility("hidden")))
@interface _MPCPlaybackEngineEventStreamSubscription : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    id <MPCPlaybackEngineEventConsumer> _consumer;	// 16 = 0x10
    MPCPlaybackEngineEventStream *_eventStream;	// 24 = 0x18
    NSString *_streamID;	// 32 = 0x20
    unsigned long long _lastEventSuccessTimestamp;	// 40 = 0x28
    unsigned long long _maximumEventDeliveryTimestamp;	// 48 = 0x30
    NSMutableDictionary *_mutatingEventHandlers;	// 56 = 0x38
    NSMutableDictionary *_eventHandlers;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000273354
@property(readonly, nonatomic) NSMutableDictionary *eventHandlers; // @synthesize eventHandlers=_eventHandlers;
@property(readonly, nonatomic) NSMutableDictionary *mutatingEventHandlers; // @synthesize mutatingEventHandlers=_mutatingEventHandlers;
@property(nonatomic) unsigned long long maximumEventDeliveryTimestamp; // @synthesize maximumEventDeliveryTimestamp=_maximumEventDeliveryTimestamp;
@property(nonatomic) unsigned long long lastEventSuccessTimestamp; // @synthesize lastEventSuccessTimestamp=_lastEventSuccessTimestamp;
@property(readonly, copy, nonatomic) NSString *streamID; // @synthesize streamID=_streamID;
@property(readonly, nonatomic) __weak MPCPlaybackEngineEventStream *eventStream; // @synthesize eventStream=_eventStream;
@property(readonly, nonatomic) __weak id <MPCPlaybackEngineEventConsumer> consumer; // @synthesize consumer=_consumer;
- (void)_onQueue_flush;	// IMP=0x0000000000272b2d
- (void)subscribeToEventType:(id)arg1 options:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002727cf
- (void)subscribeToEventType:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002727b8
- (void)flushEventsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000002725c3
- (void)cancelSubscription;	// IMP=0x000000000027244a
@property(readonly, copy) NSString *debugDescription;
- (id)initWithConsumer:(id)arg1 eventStream:(id)arg2;	// IMP=0x00000000002721e4

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

