//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXAccessQueue, AXAccessQueueTimer, NSMutableDictionary, VOTElement;
@protocol VOTGestureKeyboardDelegate;

@interface VOTDirectInteractionKeyboardManager : NSObject
{
    AXAccessQueue *_dispatchAccessQueue;	// 8 = 0x8
    AXAccessQueueTimer *_dispatchTimer;	// 16 = 0x10
    NSMutableDictionary *_dispatchTable;	// 24 = 0x18
    _Bool _inDirectInteractionTypingMode;	// 32 = 0x20
    _Bool _inGestureMode;	// 33 = 0x21
    id <VOTGestureKeyboardDelegate> _delegate;	// 40 = 0x28
    VOTElement *_keyboardElement;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000113a29
@property(nonatomic) _Bool inGestureMode; // @synthesize inGestureMode=_inGestureMode;
@property(retain, nonatomic) VOTElement *keyboardElement; // @synthesize keyboardElement=_keyboardElement;
@property(nonatomic) __weak id <VOTGestureKeyboardDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool inDirectInteractionTypingMode; // @synthesize inDirectInteractionTypingMode=_inDirectInteractionTypingMode;
- (void)_handleCommitTyping:(id)arg1;	// IMP=0x001000000011395d
- (void)_handleTypingPeriod:(id)arg1;	// IMP=0x00100000001138c1
- (void)_handleTypingEnter:(id)arg1;	// IMP=0x0010000000113825
- (void)_handleShift:(id)arg1;	// IMP=0x00100000001137b6
- (void)_handleShiftLock:(id)arg1;	// IMP=0x0010000000113747
- (void)_handleDelete:(id)arg1;	// IMP=0x00100000001136d8
- (void)_handleKeyboardSelection:(id)arg1;	// IMP=0x0010000000113616
- (void)_handleKeyplaneSelection:(id)arg1;	// IMP=0x0010000000113558
- (void)_handleSuggestionSelection:(id)arg1;	// IMP=0x001000000011349a
- (void)_processEvent:(id)arg1;	// IMP=0x001000000011340d
- (_Bool)processEvent:(id)arg1;	// IMP=0x00100000001132b5
@property(readonly, nonatomic) struct CGRect gestureKeyboardRegion;
- (_Bool)inGestureTypingMode;	// IMP=0x001000000011304c
- (void)_updateTypingMode;	// IMP=0x0010000000112abb
- (void)updateKeyboardElement;	// IMP=0x0010000000112a52
- (void)_updateKeyboardElement;	// IMP=0x0010000000112a21
- (void)updateTypingMode;	// IMP=0x00100000001129b8
- (void)screenChange:(id)arg1;	// IMP=0x001000000011298a
- (void)_initializeDispatchTable;	// IMP=0x0010000000112417
- (void)dealloc;	// IMP=0x00100000001123a2
- (id)init;	// IMP=0x0010000000112252

@end
