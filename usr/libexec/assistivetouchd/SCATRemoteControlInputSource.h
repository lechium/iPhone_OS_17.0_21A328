//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AXEventProcessor;
@protocol SCATRemoteControlInputSourceDelegate;

@interface SCATRemoteControlInputSource
{
    AXEventProcessor *_eventProcessor;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000009536a
@property(retain, nonatomic) AXEventProcessor *eventProcessor; // @synthesize eventProcessor=_eventProcessor;
- (void)_didReceiveActionWithIdentifier:(long long)arg1 start:(_Bool)arg2 ignoreInputHold:(_Bool)arg3;	// IMP=0x0010000000095211
- (_Bool)_handleRemoteControlEvent:(long long)arg1;	// IMP=0x00100000000950f2
- (_Bool)_handleAXEvent:(id)arg1;	// IMP=0x0010000000095077
- (void)_stopRemoteControlEventProcessor;	// IMP=0x0010000000095016
- (void)_startRemoteControlEventProcessor;	// IMP=0x0010000000094dfe
- (void)stopRunning;	// IMP=0x0010000000094dc5
- (void)startRunning;	// IMP=0x0010000000094d89
- (void)setDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x0010000000094d5a
- (void)dealloc;	// IMP=0x0010000000094d07
- (id)init;	// IMP=0x0010000000094cbb

// Remaining properties
@property(readonly, nonatomic) id <SCATRemoteControlInputSourceDelegate> delegate; // @dynamic delegate;

@end
