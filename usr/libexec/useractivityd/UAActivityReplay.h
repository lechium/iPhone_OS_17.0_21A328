//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSObject, NSString, SFPeerDevice, UAActivityReplayAdvertiser, UAActivityReplayReceiver, UAMockActivityAdvertiser, UAMockActivityScanner, UAReplayClientController;
@protocol OS_dispatch_queue;

@interface UAActivityReplay
{
    NSMutableDictionary *_pendingPayloadFetches;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    SFPeerDevice *_pairedPeer;	// 24 = 0x18
    UAActivityReplayAdvertiser *_advertiser;	// 32 = 0x20
    UAActivityReplayReceiver *_receiver;	// 40 = 0x28
    UAReplayClientController *_client;	// 48 = 0x30
    UAMockActivityAdvertiser *_mockAdvertiser;	// 56 = 0x38
    UAMockActivityScanner *_mockScanner;	// 64 = 0x40
    NSMutableDictionary *_items;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000044ede
@property(retain) NSMutableDictionary *items; // @synthesize items=_items;
@property(readonly, retain) UAMockActivityScanner *mockScanner; // @synthesize mockScanner=_mockScanner;
@property(readonly, retain) UAMockActivityAdvertiser *mockAdvertiser; // @synthesize mockAdvertiser=_mockAdvertiser;
@property(retain) UAReplayClientController *client; // @synthesize client=_client;
@property(retain) UAActivityReplayReceiver *receiver; // @synthesize receiver=_receiver;
@property(retain) UAActivityReplayAdvertiser *advertiser; // @synthesize advertiser=_advertiser;
@property(retain) SFPeerDevice *pairedPeer; // @synthesize pairedPeer=_pairedPeer;
@property(readonly, retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (_Bool)terminate;	// IMP=0x0010000000044884
- (void)activityPayloadFromDevice:(id)arg1 forAdvertisementPayload:(id)arg2 command:(id)arg3 timeout:(unsigned long long)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000044718
- (void)activityAdvertiser:(id)arg1 activityPayloadForAdvertisementPayload:(id)arg2 command:(id)arg3 requestedByDevice:(id)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000044712
- (_Bool)processCommands:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000044443
- (_Bool)sendResponse:(id)arg1;	// IMP=0x001000000004443b
- (_Bool)processCommand:(id)arg1;	// IMP=0x0010000000041f87
- (id)scanMockAdvertisement:(id)arg1;	// IMP=0x001000000004164a
- (void)doAdvertiseAdvertisementPayload:(id)arg1 options:(id)arg2;	// IMP=0x00100000000413b7
- (id)sharingAdvertiser;	// IMP=0x00100000000411d9
- (id)sharingReceiver;	// IMP=0x0010000000040ffb
- (void)dealloc;	// IMP=0x0010000000040d82
- (id)initWithManager:(id)arg1 name:(id)arg2;	// IMP=0x00100000000407e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

