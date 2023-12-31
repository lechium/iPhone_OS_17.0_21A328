//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface VCMediaDevice
{
    unsigned int _state;	// 88 = 0x58
}

- (id)stateStringForState:(unsigned int)arg1;	// IMP=0x00000000002fe9cc
- (_Bool)canEnterState:(unsigned int)arg1;	// IMP=0x00000000002fe957
- (_Bool)autoRunOnStart;	// IMP=0x00000000002fe94f
- (id)onResume;	// IMP=0x00000000002fe947
- (id)onPause;	// IMP=0x00000000002fe93f
- (id)onRun;	// IMP=0x00000000002fe937
- (id)onStop;	// IMP=0x00000000002fe92f
- (id)onStart;	// IMP=0x00000000002fe927
- (id)resume;	// IMP=0x00000000002fe454
- (id)pause;	// IMP=0x00000000002fdf81
- (id)stop;	// IMP=0x00000000002fda27
- (id)run;	// IMP=0x00000000002fd8f4
- (id)runInternal;	// IMP=0x00000000002fd500
- (id)start;	// IMP=0x00000000002fcff0
- (id)init;	// IMP=0x00000000002fcf60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

