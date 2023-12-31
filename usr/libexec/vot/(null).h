//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXIPCServer;

@interface (null) : NSObject
{
    AXIPCServer *_server;	// 8 = 0x8
}

+ (id)serverInstance;	// IMP=0x0040000000132bb0
- (void).cxx_destruct;	// IMP=0x001000000013569c
- (id)isBluetoothBrailleDisplayConnected:(id)arg1;	// IMP=0x0010000000135585
- (id)isScreenCurtainEnabled:(id)arg1;	// IMP=0x001000000013546e
- (id)isHandwritingInputUIShowing:(id)arg1;	// IMP=0x001000000013538f
- (id)isBrailleInputUIShowing:(id)arg1;	// IMP=0x0010000000135278
- (void)handleAutomationTestingCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000134b5f
- (void)_updateRotorsForElementWithErrorMessage:(id *)arg1;	// IMP=0x0010000000134a44
- (id)voiceOverCommandTriggered:(id)arg1;	// IMP=0x0010000000133ecd
- (id)voiceOverEventCommandTriggered:(id)arg1;	// IMP=0x0010000000133c9c
- (id)voiceOverGestureTriggered:(id)arg1;	// IMP=0x0010000000133a87
- (id)voiceOverCurrentFocusedElement:(id)arg1;	// IMP=0x0010000000133934
- (id)currentRotorName:(id)arg1;	// IMP=0x00100000001337a0
- (id)lastSpokenContents:(id)arg1;	// IMP=0x0010000000133572
- (id)lastSpokenPhrases:(id)arg1;	// IMP=0x0010000000133159
- (id)lastSoundsPlayed:(id)arg1;	// IMP=0x001000000013307c
- (id)lastScreenChange:(id)arg1;	// IMP=0x0010000000132f9c
- (void)dealloc;	// IMP=0x0010000000132f57
- (id)_initServer;	// IMP=0x0010000000132c15
- (void)_modifyRotorItems:(id)arg1 shouldEnable:(_Bool)arg2;	// IMP=0x00100000001356ac

@end

