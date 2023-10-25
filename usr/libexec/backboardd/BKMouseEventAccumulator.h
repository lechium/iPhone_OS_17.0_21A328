//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSIndexSet, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol BKHIDEventSenderInfo;

@interface BKMouseEventAccumulator : NSObject
{
    unsigned long long _eventTypeMask;	// 8 = 0x8
    unsigned long long _interpolateEventTypeMask;	// 16 = 0x10
    CDUnknownBlockType _postEventAsyncBlock;	// 24 = 0x18
    NSMutableDictionary *_eventStateBySenderID;	// 32 = 0x20
    NSMutableSet *_doomedSenderIDs;	// 40 = 0x28
    struct XYInterpolatorWithAcceleration _pointerInterpolator;	// 48 = 0x30
    struct CGPoint _pointerUnacceleratedDelta;	// 144 = 0x90
    struct CGPoint _pointerAcceleratedDelta;	// 160 = 0xa0
    struct CGPoint _pointerAbsolutePosition;	// 176 = 0xb0
    long long _positionType;	// 192 = 0xc0
    struct PhasedEventTracker<6U> _scrollPhaseTracker;	// 200 = 0xc8
    struct XYInterpolatorWithAcceleration _scrollInterpolator;	// 232 = 0xe8
    struct CGPoint _scrollUnacceleratedDelta;	// 328 = 0x148
    struct CGPoint _scrollAcceleratedDelta;	// 344 = 0x158
    long long _discreteScrollGeneration;	// 360 = 0x168
    struct PhasedEventTracker<4U> _translationPhaseTracker;	// 368 = 0x170
    struct XYInterpolator _translationInterpolator;	// 400 = 0x190
    struct CGPoint _translationDelta;	// 480 = 0x1e0
    struct PhasedEventTracker<7U> _scalePhaseTracker;	// 496 = 0x1f0
    struct ZInterpolator _scaleInterpolator;	// 528 = 0x210
    double _scaleZ;	// 584 = 0x248
    struct PhasedEventTracker<5U> _rotationPhaseTracker;	// 592 = 0x250
    struct ZInterpolator _rotationInterpolator;	// 624 = 0x270
    double _rotationZ;	// 680 = 0x2a8
    NSMutableArray *_digitizerEvents;	// 688 = 0x2b0
    unsigned int _buttonMask;	// 696 = 0x2b8
    NSMutableArray *_buttonEvents;	// 704 = 0x2c0
    _Bool _touchingPathIndexesDidChange;	// 712 = 0x2c8
    _Bool _buttonMaskDidChange;	// 713 = 0x2c9
    _Bool _scrollPhaseDidChange;	// 714 = 0x2ca
    _Bool _isInvalid;	// 715 = 0x2cb
    _Bool _absolutePositionIsValid;	// 716 = 0x2cc
    _Bool _shouldScrollNaturally;	// 717 = 0x2cd
    _Bool _shouldSwapPrimaryAndSecondaryButtons;	// 718 = 0x2ce
    _Bool _shouldUseButtonDownRecenteringBehavior;	// 719 = 0x2cf
    unsigned short _scrollPhase;	// 720 = 0x2d0
    unsigned int _previousButtonMask;	// 724 = 0x2d4
    NSIndexSet *_touchingPathIndexes;	// 728 = 0x2d8
    id <BKHIDEventSenderInfo> _mostRecentSender;	// 736 = 0x2e0
}

- (id).cxx_construct;	// IMP=0x00200000000782df
- (void).cxx_destruct;	// IMP=0x0010000000078246
@property(nonatomic) _Bool shouldUseButtonDownRecenteringBehavior; // @synthesize shouldUseButtonDownRecenteringBehavior=_shouldUseButtonDownRecenteringBehavior;
@property(nonatomic) _Bool shouldSwapPrimaryAndSecondaryButtons; // @synthesize shouldSwapPrimaryAndSecondaryButtons=_shouldSwapPrimaryAndSecondaryButtons;
@property(nonatomic) _Bool shouldScrollNaturally; // @synthesize shouldScrollNaturally=_shouldScrollNaturally;
@property(readonly, nonatomic) id <BKHIDEventSenderInfo> mostRecentSender; // @synthesize mostRecentSender=_mostRecentSender;
@property(readonly, nonatomic) long long positionType; // @synthesize positionType=_positionType;
@property(readonly, nonatomic) _Bool absolutePositionIsValid; // @synthesize absolutePositionIsValid=_absolutePositionIsValid;
@property(readonly, nonatomic) struct CGPoint pointerAbsolutePosition; // @synthesize pointerAbsolutePosition=_pointerAbsolutePosition;
@property(readonly, nonatomic) unsigned short scrollPhase; // @synthesize scrollPhase=_scrollPhase;
@property(retain, nonatomic) NSMutableArray *digitizerEvents; // @synthesize digitizerEvents=_digitizerEvents;
@property(readonly, nonatomic) NSIndexSet *touchingPathIndexes; // @synthesize touchingPathIndexes=_touchingPathIndexes;
@property(readonly, nonatomic) unsigned int buttonMask; // @synthesize buttonMask=_buttonMask;
@property(readonly, nonatomic) unsigned int previousButtonMask; // @synthesize previousButtonMask=_previousButtonMask;
@property(readonly, nonatomic) unsigned long long eventTypeMask; // @synthesize eventTypeMask=_eventTypeMask;
- (id)_eventStateForSender:(id)arg1;	// IMP=0x0010000000077f57
- (void)_terminateScrollingForSender:(id)arg1;	// IMP=0x0010000000077f04
- (void)_terminateAllGesturesForSender:(id)arg1;	// IMP=0x0010000000077e24
- (void)addTranslationEvent:(struct __IOHIDEvent *)arg1 fromSender:(id)arg2;	// IMP=0x0010000000077b0c
- (void)addRotationEvent:(struct __IOHIDEvent *)arg1 fromSender:(id)arg2;	// IMP=0x0010000000077844
- (MISSING_TYPE *)addScaleEvent:fromSender: /* Error: Ran out of types for this method. */;	// IMP=0x001000000007756a
- (void)addDigitizerEvent:(struct __IOHIDEvent *)arg1 fromSender:(id)arg2;	// IMP=0x00100000000763dd
- (void)_updateTouchingPathIndexesFromDeviceEventState;	// IMP=0x00100000000762bb
- (void)addButtonEvent:(struct __IOHIDEvent *)arg1 fromSender:(id)arg2;	// IMP=0x0010000000076188
- (void)addButtonNumber:(long long)arg1 down:(_Bool)arg2 fromSender:(id)arg3;	// IMP=0x0010000000075c6c
- (_Bool)senderPostsAtHighFrequency:(unsigned long long)arg1;	// IMP=0x0010000000075bb3
- (void)deviceServiceDidTerminate:(id)arg1;	// IMP=0x0010000000075a3e
- (void)deviceServiceDidAppear:(id)arg1;	// IMP=0x0010000000075a23
- (void)frameDidEnd;	// IMP=0x0010000000075467
- (void)frameWillBegin;	// IMP=0x001000000007524f
- (void)nextEvent;	// IMP=0x00100000000751fa
- (void)appendSubeventsForEventTypeMask:(unsigned long long)arg1 toTopLevelEvent:(struct __IOHIDEvent *)arg2 interfaceOrientation:(long long)arg3 getEventSummary:(unsigned long long *)arg4;	// IMP=0x0010000000074a70
- (void)addTopLevelEvent:(struct __IOHIDEvent *)arg1 fromSender:(id)arg2;	// IMP=0x0010000000074004
- (void)invalidateAbsolutePosition;	// IMP=0x0010000000073ff7
- (void)addSyntheticTopLevelEventIfNeeded;	// IMP=0x0010000000073fd1
- (void)addScrollEvent:(struct __IOHIDEvent *)arg1 fromSender:(id)arg2;	// IMP=0x00100000000737e9
@property(readonly, nonatomic) struct CGPoint unacceleratedRelativePointerPosition;
@property(readonly, nonatomic) struct CGPoint acceleratedRelativePointerPosition;
@property(readonly, nonatomic) _Bool touchingPathIndexesDidChange;
@property(readonly, nonatomic) _Bool buttonMaskDidChange;
@property(readonly, nonatomic) unsigned long long scrollBeganTimestamp;
@property(readonly, nonatomic) _Bool scrollPhaseDidChange;
@property(readonly, nonatomic) long long hitTestReason;
- (_Bool)isSenderLocked;	// IMP=0x00100000000736ca
- (void)invalidate;	// IMP=0x00100000000736a9
- (void)dealloc;	// IMP=0x00100000000734a3
- (id)initWithInterpolatedEventTypeMask:(unsigned long long)arg1 postEventsBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000073413
- (id)init;	// IMP=0x0010000000073380

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
