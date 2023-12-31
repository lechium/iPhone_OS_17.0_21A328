//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXUIClient, NSLock, NSPointerArray, NSString;
@protocol OS_dispatch_queue;

@interface VOTDisplayManager : NSObject
{
    NSLock *_lock;	// 8 = 0x8
    _Bool _displayShutdown;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_displayQueue;	// 24 = 0x18
    _Bool _systemReadyForUI;	// 32 = 0x20
    _Bool _shouldHideCursor;	// 33 = 0x21
    _Bool _uiServerIsReady;	// 34 = 0x22
    _Bool _needToShowVOWarningBanner;	// 35 = 0x23
    _Bool _didRegisterForPointerEvents;	// 36 = 0x24
    unsigned int _currentCursorContextID;	// 40 = 0x28
    unsigned int _currentCursorDisplayID;	// 44 = 0x2c
    struct CGPath *_currentCursorPath;	// 48 = 0x30
    AXUIClient *_uiClient;	// 56 = 0x38
    NSPointerArray *_pointerEventObservers;	// 64 = 0x40
    struct CGRect _currentCursorFrame;	// 72 = 0x48
    struct CGRect _currentSonificationPlaybackBounds;	// 104 = 0x68
}

+ (id)displayManager;	// IMP=0x002000000004b043
- (void).cxx_destruct;	// IMP=0x002000000004e718
@property(retain, nonatomic) NSPointerArray *pointerEventObservers; // @synthesize pointerEventObservers=_pointerEventObservers;
@property(nonatomic) _Bool didRegisterForPointerEvents; // @synthesize didRegisterForPointerEvents=_didRegisterForPointerEvents;
@property(nonatomic) struct CGRect currentSonificationPlaybackBounds; // @synthesize currentSonificationPlaybackBounds=_currentSonificationPlaybackBounds;
@property(nonatomic) _Bool needToShowVOWarningBanner; // @synthesize needToShowVOWarningBanner=_needToShowVOWarningBanner;
@property(nonatomic) _Bool uiServerIsReady; // @synthesize uiServerIsReady=_uiServerIsReady;
@property(retain, nonatomic) AXUIClient *uiClient; // @synthesize uiClient=_uiClient;
@property(nonatomic) _Bool shouldHideCursor; // @synthesize shouldHideCursor=_shouldHideCursor;
@property(retain, nonatomic) struct CGPath *currentCursorPath; // @synthesize currentCursorPath=_currentCursorPath;
@property(nonatomic) unsigned int currentCursorDisplayID; // @synthesize currentCursorDisplayID=_currentCursorDisplayID;
@property(nonatomic) unsigned int currentCursorContextID; // @synthesize currentCursorContextID=_currentCursorContextID;
@property(nonatomic) struct CGRect currentCursorFrame; // @synthesize currentCursorFrame=_currentCursorFrame;
- (void)connectionWillBeInterruptedForClientWithIdentifier:(id)arg1;	// IMP=0x001000000004e5f6
- (id)userInterfaceClient:(id)arg1 processMessageFromServer:(id)arg2 withIdentifier:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x001000000004e578
- (void)userInterfaceClient:(id)arg1 willActivateUserInterfaceServiceWithInitializationMessage:(id)arg2;	// IMP=0x001000000004e561
- (void)_handleDidReceivePointerGlobalPoint:(struct CGPoint)arg1;	// IMP=0x001000000004e40e
- (void)registerForPointerEvents:(id)arg1;	// IMP=0x001000000004e2a1
- (void)movePointerToPoint:(struct CGPoint)arg1 contextId:(unsigned int)arg2;	// IMP=0x001000000004e132
- (void)hideSonificationPlayhead;	// IMP=0x001000000004e011
- (void)pauseSonificationPlaybackAtPosition:(double)arg1;	// IMP=0x001000000004deb8
- (void)beginSonificationPlaybackFromPosition:(double)arg1 withDuration:(double)arg2;	// IMP=0x001000000004dc5d
- (void)setSonificationPlayheadPosition:(double)arg1;	// IMP=0x001000000004db04
- (void)showSonificationPlayheadInPlaybackBounds:(struct CGRect)arg1 atPosition:(double)arg2;	// IMP=0x001000000004dab3
- (void)setVoiceOverCaptionText:(id)arg1 withRange:(struct _NSRange)arg2 language:(id)arg3 voice:(id)arg4;	// IMP=0x001000000004d8ba
- (_Bool)_isSystemReadyForUI;	// IMP=0x001000000004d7e9
- (void)highlightMapsExplorationSegmentWithIndex:(long long)arg1;	// IMP=0x001000000004d6fe
- (void)updateMapsExplorationUIWithCurrentLocation:(struct CGPoint)arg1;	// IMP=0x001000000004d5b2
- (void)updateMapsExplorationUIWithCurrentCenter:(struct CGPoint)arg1;	// IMP=0x001000000004d466
- (void)hideMapsExplorationUI;	// IMP=0x001000000004d41c
- (void)showMapsExplorationUIWithCenter:(struct CGPoint)arg1 andData:(id)arg2;	// IMP=0x001000000004d28e
- (void)highlightBrailleDots:(id)arg1;	// IMP=0x001000000004d1b3
- (void)flashBrailleInsertedText:(id)arg1;	// IMP=0x001000000004d0bf
- (void)setScreenCurtainEnabled:(_Bool)arg1;	// IMP=0x001000000004cfb8
- (void)updateBrailleUIWithOrientation:(long long)arg1 dotPositions:(id)arg2 typingMode:(long long)arg3;	// IMP=0x001000000004ce30
- (void)hideBrailleUI;	// IMP=0x001000000004cda3
- (void)showBrailleUIWithOrientation:(long long)arg1 dotPositions:(id)arg2 typingMode:(long long)arg3;	// IMP=0x001000000004c99e
- (void)updateVisualRotor:(id)arg1;	// IMP=0x001000000004c92a
- (void)_handleRotorDidChange:(id)arg1;	// IMP=0x001000000004c891
- (void)convertFramesToCursorSpace:(id)arg1 displayID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000004c6d0
- (void)convertFrameToCursorSpace:(struct CGRect)arg1 displayID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000004c4aa
- (void)setElementFrames:(id)arg1 labels:(id)arg2 uiClasses:(id)arg3;	// IMP=0x001000000004c37f
- (void)setElementFrames:(id)arg1;	// IMP=0x001000000004c239
- (struct CGRect)_adjustFrameToFitScreen:(struct CGRect)arg1;	// IMP=0x001000000004c0ea
- (void)setCursorFrame:(struct CGRect)arg1 withPath:(struct CGPath *)arg2 withContextId:(unsigned int)arg3 withDisplayId:(unsigned int)arg4 element:(id)arg5 forceRefresh:(_Bool)arg6 animated:(_Bool)arg7;	// IMP=0x001000000004bcf9
- (void)setCursorFrame:(struct CGRect)arg1 withPath:(struct CGPath *)arg2 withContextId:(unsigned int)arg3 withDisplayId:(unsigned int)arg4 element:(id)arg5 forceRefresh:(_Bool)arg6;	// IMP=0x001000000004bcbb
- (void)_updateZoom:(struct CGRect)arg1 element:(id)arg2;	// IMP=0x001000000004b8d3
- (void)setCursorFrame:(struct CGRect)arg1;	// IMP=0x001000000004b892
- (void)_setCursorFrameForElement:(id)arg1 animated:(_Bool)arg2;	// IMP=0x001000000004b495
- (void)setCursorFrameForElement:(id)arg1 animated:(_Bool)arg2;	// IMP=0x001000000004b3d5
- (void)setCursorFrameForElement:(id)arg1;	// IMP=0x001000000004b3c1
- (void)clearCursorFrame;	// IMP=0x001000000004b37a
- (void)shutdown;	// IMP=0x001000000004b359
- (void)dealloc;	// IMP=0x001000000004b27d
@property(readonly, nonatomic) NSString *serviceBundleName;
@property(readonly, nonatomic) NSString *clientIdentifier;
- (id)init;	// IMP=0x001000000004b0de

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

