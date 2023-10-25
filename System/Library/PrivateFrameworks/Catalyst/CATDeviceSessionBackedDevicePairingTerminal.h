//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CATSharingDevice, NSString;
@protocol CATSharingDeviceSession;

__attribute__((visibility("hidden")))
@interface CATDeviceSessionBackedDevicePairingTerminal : NSObject
{
    id <CATSharingDeviceSession> mDeviceSession;	// 8 = 0x8
    CDUnknownBlockType mVerifyPairingCompletion;	// 16 = 0x10
    CDUnknownBlockType mBeginPairingCompletion;	// 24 = 0x18
    CDUnknownBlockType mPINPromptHandler;	// 32 = 0x20
    _Bool _invalidated;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000026b9a
@property(nonatomic, getter=isInvalidated) _Bool invalidated; // @synthesize invalidated=_invalidated;
- (void)removeSessionHandlers;	// IMP=0x0000000000026b10
- (void)invalidateWithError:(id)arg1;	// IMP=0x0000000000026a8c
- (void)vendConnectionForCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000026998
- (void)pairingCompleteWithError:(id)arg1;	// IMP=0x000000000002687e
- (void)fetchStableIdentifierFinished:(id)arg1;	// IMP=0x0000000000026676
- (void)fetchStableIdentifier;	// IMP=0x00000000000264d5
- (void)sessionHasPromptedForPINWithWaitTime:(unsigned long long)arg1;	// IMP=0x000000000002639f
- (void)verifyPairingFinished:(_Bool)arg1;	// IMP=0x00000000000261fd
- (void)verifyPairing;	// IMP=0x0000000000025ff8
- (void)deviceSessionReady;	// IMP=0x0000000000025e90
- (void)deviceSessionEncounteredError:(id)arg1;	// IMP=0x0000000000025cfb
- (void)deviceSessionInvalidated:(id)arg1;	// IMP=0x0000000000025b69
- (void)addSessionHandlers;	// IMP=0x000000000002549f
- (void)_invalidate;	// IMP=0x0000000000025343
- (void)_tryPIN:(id)arg1;	// IMP=0x00000000000251f8
- (void)_beginPairing:(CDUnknownBlockType)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000024eb7
- (void)_verifyPairingAndFetchStableIdentifierWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000024de3
- (void)invalidate;	// IMP=0x0000000000024cae
- (void)tryPIN:(id)arg1;	// IMP=0x0000000000024b47
- (void)beginPairing:(CDUnknownBlockType)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002496f
- (void)verifyPairingAndFetchStableIdentifierWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000247d2
@property(readonly, nonatomic) CATSharingDevice *device;
- (id)initWithDeviceSession:(id)arg1;	// IMP=0x0000000000024751

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
