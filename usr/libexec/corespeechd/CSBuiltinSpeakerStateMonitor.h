//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSEventMonitor.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CSBuiltinSpeakerStateMonitor : CSEventMonitor
{
    _Bool _isSpeakerMuted;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    unsigned long long _builtInSpeakerState;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00200000001311fc
- (void).cxx_destruct;	// IMP=0x0020000000130498
@property(nonatomic) _Bool isSpeakerMuted; // @synthesize isSpeakerMuted=_isSpeakerMuted;
@property(nonatomic) unsigned long long builtInSpeakerState; // @synthesize builtInSpeakerState=_builtInSpeakerState;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1;	// IMP=0x00100000001303f2
- (void)_notifyObserver:(id)arg1 isSpeakerMuted:(_Bool)arg2;	// IMP=0x00100000001303e0
- (void)_didReceiveSpeakerMuteStateChangeNotification:(_Bool)arg1;	// IMP=0x0010000000130384
- (void)_notifyObserver:(id)arg1 withBuiltinSpeakerState:(unsigned long long)arg2;	// IMP=0x001000000013031b
- (void)_didReceiveBuiltinSpeakerStateChangeNotification:(unsigned long long)arg1;	// IMP=0x00100000001302bd
- (void)_stopMonitoring;	// IMP=0x0010000000130184
- (void)_startMonitoringWithQueue:(id)arg1;	// IMP=0x001000000012ff6e
- (_Bool)isBuiltinSpeakerMuted;	// IMP=0x001000000012fed9
- (unsigned long long)currentBuiltinSpeakerState;	// IMP=0x001000000012fe43
- (void)_fetchSpeakerStateActiveInfo;	// IMP=0x001000000012fd1e
- (void)_fetchSpeakerStateMutedInfo;	// IMP=0x001000000012fbda
- (_Bool)_getIsSpeakerMutedDefaultVal;	// IMP=0x001000000012fbcd
- (id)init;	// IMP=0x001000000012fb23

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
