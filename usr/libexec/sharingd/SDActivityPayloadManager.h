//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUSystemMonitor, IDSService, NSMutableArray, NSMutableDictionary, NSString, RPCompanionLinkClient, SDActivityAdvertiser, SDActivityScanner;

@interface SDActivityPayloadManager : NSObject
{
    IDSService *_activityService;	// 8 = 0x8
    IDSService *_encryptionService;	// 16 = 0x10
    RPCompanionLinkClient *_rapportDiscoveryClient;	// 24 = 0x18
    _Bool _restrictionsDisabled;	// 32 = 0x20
    SDActivityAdvertiser *_advertiser;	// 40 = 0x28
    SDActivityScanner *_scanner;	// 48 = 0x30
    CUSystemMonitor *_systemMonitor;	// 56 = 0x38
    _Bool _hsa2Enabled;	// 64 = 0x40
    NSMutableDictionary *_uniqueIDToKeyReplyDate;	// 72 = 0x48
    NSMutableDictionary *_messageIdentifierToKeyRequestRecords;	// 80 = 0x50
    NSMutableDictionary *_messageIdentifierToReplyRecords;	// 88 = 0x58
    NSMutableDictionary *_messageIdentifierToRequestRecords;	// 96 = 0x60
    int _systemPreferenceChangedToken;	// 104 = 0x68
    NSMutableArray *_cachedActivityPayloadsForDemo;	// 112 = 0x70
}

+ (id)sharedPayloadManager;	// IMP=0x002000000011ef21
- (void).cxx_destruct;	// IMP=0x0020000000128e98
- (void)handleNewAdvertisementWithpayloadRequestProtobuf:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0010000000128a35
- (void)sendActivityPayloadWithAdvertisementData:(id)arg1 forAdvertisementPayload:(id)arg2 activityIdentifier:(id)arg3 activityPayload:(id)arg4;	// IMP=0x0010000000128194
- (void)setUpHandoffPreferenceMonitor;	// IMP=0x001000000012818e
- (id)createRapportClientWithDestinationDevice:(id)arg1;	// IMP=0x0010000000128034
- (void)logDashboardHandoffRequestViaTransportLinkType:(int)arg1 type:(id)arg2 success:(_Bool)arg3 rtt:(double)arg4;	// IMP=0x0010000000127df6
- (void)setDecryptionKeyDataRepresentation:(id)arg1 forDeviceIdentifier:(id)arg2;	// IMP=0x0010000000127b98
- (id)protobufDataFromRequest:(id)arg1;	// IMP=0x0010000000127a9d
- (id)requestFromProtobufData:(id)arg1;	// IMP=0x00100000001279f9
- (id)dataFromUUID:(id)arg1;	// IMP=0x0010000000127979
- (void)messageWithIdentifier:(id)arg1 didSendWithSuccess:(_Bool)arg2 error:(id)arg3;	// IMP=0x001000000012761a
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x001000000012757f
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4;	// IMP=0x001000000012751d
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000001274ba
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x001000000012743f
- (void)handlePayloadReply:(id)arg1 forRequestRecord:(id)arg2 fromDevice:(id)arg3 transportLinkType:(int)arg4;	// IMP=0x0010000000126df3
- (void)handlePayloadReplyProtobuf:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0010000000126ba9
- (void)handlePayloadReplyRapport:(id)arg1 options:(id)arg2 forRequestRecord:(id)arg3 fromDevice:(id)arg4;	// IMP=0x00100000001268c0
- (void)activityPayloadReplySuccess:(id)arg1;	// IMP=0x0010000000126761
- (void)sendIDSActivityPayloadReply:(id)arg1 withReplyRecord:(id)arg2;	// IMP=0x001000000012614e
- (void)handlePayloadRequest:(id)arg1 fromIDSDevice:(id)arg2 withRequestIdentifier:(id)arg3 transportType:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000012583e
- (void)handlePayloadRequestProtobuf:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0010000000125662
- (void)handlePayloadRequestRapport:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000012513d
- (void)handleEncryptionKeyReply:(id)arg1 forRequestRecord:(id)arg2 fromDevice:(id)arg3 transportLinkType:(int)arg4;	// IMP=0x0010000000124d76
- (void)handleEncryptionKeyReplyRequestProtobuf:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0010000000124b3e
- (void)handleEncryptionKeyReplyRapport:(id)arg1 options:(id)arg2 forRequestRecord:(id)arg3 fromDevice:(id)arg4;	// IMP=0x0010000000124855
- (void)handleEncryptionKeyRequestProtobuf:(id)arg1 service:(id)arg2 account:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0010000000124585
- (void)handleEncryptionKeyRequestRapport:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000012414c
- (void)handleEncyptionKeyRequest:(id)arg1 fromIDSDevice:(id)arg2 withRequestIdentifier:(id)arg3 transportType:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000123e2e
- (void)sendIDSActivityPayloadRequest:(id)arg1 withRequestRecord:(id)arg2 desiredTimeout:(double)arg3;	// IMP=0x0010000000123514
- (void)sendRapportActivityPayloadRequest:(id)arg1 withRequestRecord:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000122a3d
- (void)sendActivityPayloadRequestToDeviceIdentifier:(id)arg1 withAdvertisementPayload:(id)arg2 command:(id)arg3 timeout:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000122133
- (void)sendEncryptionKeyReplyRequestToDevice:(id)arg1 reply:(id)arg2 requestIdentifier:(id)arg3;	// IMP=0x0010000000121c4e
- (void)sendIDSEncryptionKeyRequest:(id)arg1 withRequestRecord:(id)arg2 desiredTimeout:(double)arg3;	// IMP=0x0010000000121376
- (void)sendRapportEncryptionKeyRequest:(id)arg1 withRequestRecord:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000120779
- (void)sendEncryptionKeyRequestToDeviceIdentifier:(id)arg1 previousKeyIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000011ff79
- (void)clearPersistedKeyRequests;	// IMP=0x001000000011ff2e
@property(readonly) NSString *state;
- (void)requestTimedOut:(id)arg1;	// IMP=0x001000000011f70b
- (id);	// IMP=0x001000000011f538
- (void)setUpIDSServices;	// IMP=0x001000000011f3ff
- (void)setUpRapport;	// IMP=0x001000000011f264
- (void)setUpHSA2Monitor;	// IMP=0x001000000011f137
- (id)init;	// IMP=0x001000000011efc2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

