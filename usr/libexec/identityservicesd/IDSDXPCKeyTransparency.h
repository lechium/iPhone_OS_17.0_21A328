//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSKeyTransparencyVerifier, NSString;
@protocol OS_dispatch_queue;

@interface IDSDXPCKeyTransparency : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    IDSKeyTransparencyVerifier *_transparencyVerifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000c6c55
@property(retain, nonatomic) IDSKeyTransparencyVerifier *transparencyVerifier; // @synthesize transparencyVerifier=_transparencyVerifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)peerVerificationFinishedWithResults:(id)arg1;	// IMP=0x00100000000c6c09
- (void)registrationDataNeedsUpdate;	// IMP=0x00100000000c6bf3
- (void)fetchKTRegistrationStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c6bdd
- (void)healSelfForApplication:(id)arg1 withHealableErrors:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c6bc7
- (void)fetchSelfVerificationInfoForApplication:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c6bb1
- (void)fetchPeerVerificationInfoForApplication:(id)arg1 forURIs:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000c6aff
- (void)sendOptInUpdateRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c6ae9
- (void)sendOptInUpdateForApplications:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c6ad3
- (void)getKeyTransparencyOptInEligiblityForApplication:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c6abd
- (id)initWithQueue:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000c6a26
- (id)initWithQueue:(id)arg1 connection:(id)arg2 transparencyVerifier:(id)arg3;	// IMP=0x00100000000c68bb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

