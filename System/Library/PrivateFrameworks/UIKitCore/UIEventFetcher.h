//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableArray, NSMutableDictionary, NSMutableSet, _UIHIDEventSynchronizer;
@protocol UIEventFetcherSink;

__attribute__((visibility("hidden")))
@interface UIEventFetcher : NSObject
{
    NSMutableArray *_incomingHIDEventsFiltered;	// 8 = 0x8
    struct __CFRunLoop *_cfRunLoop;	// 16 = 0x10
    CDUnknownBlockType _receiveBlock;	// 24 = 0x18
    CDUnknownBlockType _addToFilteredEventsBlock;	// 32 = 0x20
    CDUnknownBlockType _gameControllerEventFilterGenerator;	// 40 = 0x28
    CDUnknownBlockType _passiveObservationFilterGenerator;	// 48 = 0x30
    CDUnknownBlockType _watchSystemAppFilter;	// 56 = 0x38
    NSMutableArray *_eventFilters;	// 64 = 0x40
    int _displayLinkIdleTicks;	// 72 = 0x48
    CADisplayLink *_displayLink;	// 80 = 0x50
    long long _countOfEventsReceivedSinceLastDisplayLinkCallback;	// 88 = 0x58
    long long _countOfEventsReceivedInPreviousFrame;	// 96 = 0x60
    _Bool _didSignalOneMoveEventSinceLastDisplayLinkCallback;	// 104 = 0x68
    double _lastImportantEventTimestamp;	// 112 = 0x70
    double _lastSignalTimestamp;	// 120 = 0x78
    double _lastSignalEventTimestamp;	// 128 = 0x80
    double _lastFilteredEventTimestamp;	// 136 = 0x88
    double _estimatedDisplayLinkDrift;	// 144 = 0x90
    long long _lastSignalType;	// 152 = 0x98
    unsigned long long _lastSignalReason;	// 160 = 0xa0
    _Bool _needsSignalOnDisplayLink;	// 168 = 0xa8
    double _commitTimeForTouchEvents;	// 176 = 0xb0
    double _beginTimeForTouchEvents;	// 184 = 0xb8
    double _deadlineTimeForTouchEvents;	// 192 = 0xc0
    NSMutableDictionary *_latestMoveDragEventsBySessionID;	// 200 = 0xc8
    double _latestMoveDragEventTimestamp;	// 208 = 0xd0
    double _latestMoveDragEventResendTimestamp;	// 216 = 0xd8
    struct __CFRunLoopTimer *_resendDragEventsTimer;	// 224 = 0xe0
    NSMutableSet *_contextIDsNeedingHoverEventResend;	// 232 = 0xe8
    NSMutableDictionary *_latestHoverEventsByContextID;	// 240 = 0xf0
    _UIHIDEventSynchronizer *_synchronizer;	// 248 = 0xf8
    id <UIEventFetcherSink> _eventFetcherSink;	// 256 = 0x100
}

- (void).cxx_destruct;	// IMP=0x00000000010b5d8d
- (void)_receiveHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x00000000010b3982
- (void)threadMain;	// IMP=0x00000000010b3591
- (void)displayLinkDidFire:(id)arg1;	// IMP=0x00000000010b2d08
- (void)resendDragMoveEventsOnTimer:(struct __CFRunLoopTimer *)arg1 withInterval:(double)arg2;	// IMP=0x00000000010b2bd2
- (id)init;	// IMP=0x00000000010b230f

@end

