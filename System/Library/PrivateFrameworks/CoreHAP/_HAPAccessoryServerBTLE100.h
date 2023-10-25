//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HAPAccessoryServerBTLE.h"

@class CBCharacteristic, CBService, HAPSecuritySession, NSMapTable, NSMutableArray, NSObject, NSString;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _HAPAccessoryServerBTLE100 : HAPAccessoryServerBTLE
{
    struct PairingSessionPrivate *_pairingSession;	// 32 = 0x20
    _Bool _startPairingRequested;	// 40 = 0x28
    _Bool _pairingFeaturesRead;	// 41 = 0x29
    _Bool _securitySessionOpening;	// 42 = 0x2a
    _Bool _disconnecting;	// 43 = 0x2b
    _Bool _unpairedIdentifyRequested;	// 44 = 0x2c
    _Bool _removeOnDisconnect;	// 45 = 0x2d
    unsigned long long _state;	// 48 = 0x30
    unsigned long long _connectionRetryCount;	// 56 = 0x38
    NSMapTable *_btleServiceToHAPServiceMap;	// 64 = 0x40
    unsigned long long _characteristicDiscoveryRequestCount;	// 72 = 0x48
    unsigned long long _characteristicValueReadCount;	// 80 = 0x50
    unsigned long long _metadataDiscoveryRequestCount;	// 88 = 0x58
    unsigned long long _metadataValueReadCount;	// 96 = 0x60
    unsigned long long _availableInstanceID;	// 104 = 0x68
    NSMapTable *_btleCharacteristicToHAPCharacteristicMap;	// 112 = 0x70
    NSMapTable *_hapCharacteristicReadCompletionQueues;	// 120 = 0x78
    NSMapTable *_hapCharacteristicWriteCompletionQueues;	// 128 = 0x80
    NSMapTable *_hapCharacteristicEnableEventCompletionQueues;	// 136 = 0x88
    NSMutableArray *_addRemovePairingOperationsQueue;	// 144 = 0x90
    CBService *_pairingService;	// 152 = 0x98
    CBCharacteristic *_pairSetupCharacteristic;	// 160 = 0xa0
    CBCharacteristic *_pairVerifyCharacteristic;	// 168 = 0xa8
    CBCharacteristic *_pairingFeaturesCharacteristic;	// 176 = 0xb0
    CBCharacteristic *_pairingsCharacteristic;	// 184 = 0xb8
    CBService *_accessoryInfoService;	// 192 = 0xc0
    CBCharacteristic *_identifyCharacteristic;	// 200 = 0xc8
    CBCharacteristic *_modelCharacteristic;	// 208 = 0xd0
    CBCharacteristic *_serialNumberCharacteristic;	// 216 = 0xd8
    CBCharacteristic *_manufacturerCharacteristic;	// 224 = 0xe0
    CDUnknownBlockType _pairVerifyCompletionBlock;	// 232 = 0xe8
    unsigned long long _pairingFeatureFlags;	// 240 = 0xf0
    HAPSecuritySession *_securitySession;	// 248 = 0xf8
    NSObject<OS_dispatch_source> *_connectionLifetimeTimer;	// 256 = 0x100
    double _idleConnectionTimeoutInSec;	// 264 = 0x108
    CDUnknownBlockType _unpairedIdentifyCompletionBlock;	// 272 = 0x110
}

+ (id)_convertFromBTLEToHAPUUID:(id)arg1;	// IMP=0x00100000001a7cca
+ (id)deserializeCharacteristicReadData:(id)arg1 characteristicFormat:(unsigned long long)arg2 supportsAdditionalAuthentication:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00100000001a7a5d
+ (id)serializeCharacteristicWriteValue:(id)arg1 characteristicFormat:(unsigned long long)arg2 supportsAdditionalAuthentication:(_Bool)arg3 authenticationData:(id)arg4 error:(id *)arg5;	// IMP=0x00100000001a7604
- (void).cxx_destruct;	// IMP=0x000000000019f7ee
@property(nonatomic) _Bool removeOnDisconnect; // @synthesize removeOnDisconnect=_removeOnDisconnect;
@property(copy, nonatomic) CDUnknownBlockType unpairedIdentifyCompletionBlock; // @synthesize unpairedIdentifyCompletionBlock=_unpairedIdentifyCompletionBlock;
@property(nonatomic) _Bool unpairedIdentifyRequested; // @synthesize unpairedIdentifyRequested=_unpairedIdentifyRequested;
@property(nonatomic, getter=isDisconnecting) _Bool disconnecting; // @synthesize disconnecting=_disconnecting;
@property(nonatomic) double idleConnectionTimeoutInSec; // @synthesize idleConnectionTimeoutInSec=_idleConnectionTimeoutInSec;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *connectionLifetimeTimer; // @synthesize connectionLifetimeTimer=_connectionLifetimeTimer;
@property(nonatomic, getter=isSecuritySessionOpening) _Bool securitySessionOpening; // @synthesize securitySessionOpening=_securitySessionOpening;
@property(retain, nonatomic) HAPSecuritySession *securitySession; // @synthesize securitySession=_securitySession;
@property(nonatomic) unsigned long long pairingFeatureFlags; // @synthesize pairingFeatureFlags=_pairingFeatureFlags;
@property(nonatomic) _Bool pairingFeaturesRead; // @synthesize pairingFeaturesRead=_pairingFeaturesRead;
@property(nonatomic) _Bool startPairingRequested; // @synthesize startPairingRequested=_startPairingRequested;
@property(copy, nonatomic) CDUnknownBlockType pairVerifyCompletionBlock; // @synthesize pairVerifyCompletionBlock=_pairVerifyCompletionBlock;
@property(retain, nonatomic) CBCharacteristic *manufacturerCharacteristic; // @synthesize manufacturerCharacteristic=_manufacturerCharacteristic;
@property(retain, nonatomic) CBCharacteristic *serialNumberCharacteristic; // @synthesize serialNumberCharacteristic=_serialNumberCharacteristic;
@property(retain, nonatomic) CBCharacteristic *modelCharacteristic; // @synthesize modelCharacteristic=_modelCharacteristic;
@property(retain, nonatomic) CBCharacteristic *identifyCharacteristic; // @synthesize identifyCharacteristic=_identifyCharacteristic;
@property(retain, nonatomic) CBService *accessoryInfoService; // @synthesize accessoryInfoService=_accessoryInfoService;
@property(retain, nonatomic) CBCharacteristic *pairingsCharacteristic; // @synthesize pairingsCharacteristic=_pairingsCharacteristic;
@property(retain, nonatomic) CBCharacteristic *pairingFeaturesCharacteristic; // @synthesize pairingFeaturesCharacteristic=_pairingFeaturesCharacteristic;
@property(retain, nonatomic) CBCharacteristic *pairVerifyCharacteristic; // @synthesize pairVerifyCharacteristic=_pairVerifyCharacteristic;
@property(retain, nonatomic) CBCharacteristic *pairSetupCharacteristic; // @synthesize pairSetupCharacteristic=_pairSetupCharacteristic;
@property(retain, nonatomic) CBService *pairingService; // @synthesize pairingService=_pairingService;
@property(retain, nonatomic) NSMutableArray *addRemovePairingOperationsQueue; // @synthesize addRemovePairingOperationsQueue=_addRemovePairingOperationsQueue;
@property(retain, nonatomic) NSMapTable *hapCharacteristicEnableEventCompletionQueues; // @synthesize hapCharacteristicEnableEventCompletionQueues=_hapCharacteristicEnableEventCompletionQueues;
@property(retain, nonatomic) NSMapTable *hapCharacteristicWriteCompletionQueues; // @synthesize hapCharacteristicWriteCompletionQueues=_hapCharacteristicWriteCompletionQueues;
@property(retain, nonatomic) NSMapTable *hapCharacteristicReadCompletionQueues; // @synthesize hapCharacteristicReadCompletionQueues=_hapCharacteristicReadCompletionQueues;
@property(retain, nonatomic) NSMapTable *btleCharacteristicToHAPCharacteristicMap; // @synthesize btleCharacteristicToHAPCharacteristicMap=_btleCharacteristicToHAPCharacteristicMap;
@property(nonatomic) unsigned long long availableInstanceID; // @synthesize availableInstanceID=_availableInstanceID;
@property(nonatomic) unsigned long long metadataValueReadCount; // @synthesize metadataValueReadCount=_metadataValueReadCount;
@property(nonatomic) unsigned long long metadataDiscoveryRequestCount; // @synthesize metadataDiscoveryRequestCount=_metadataDiscoveryRequestCount;
@property(nonatomic) unsigned long long characteristicValueReadCount; // @synthesize characteristicValueReadCount=_characteristicValueReadCount;
@property(nonatomic) unsigned long long characteristicDiscoveryRequestCount; // @synthesize characteristicDiscoveryRequestCount=_characteristicDiscoveryRequestCount;
@property(retain, nonatomic) NSMapTable *btleServiceToHAPServiceMap; // @synthesize btleServiceToHAPServiceMap=_btleServiceToHAPServiceMap;
@property(nonatomic) unsigned long long connectionRetryCount; // @synthesize connectionRetryCount=_connectionRetryCount;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void)disconnect;	// IMP=0x000000000019f2ab
- (void)_dequeueAndContinueOperation;	// IMP=0x000000000019ee5c
- (void)_enqueueOperation:(long long)arg1 identifier:(id)arg2 publicKey:(id)arg3 admin:(_Bool)arg4 queue:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000000019ec1a
- (void)listPairingsWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000019ea6e
- (_Bool)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000019e7b8
- (void)_removePairingWithIdentifier:(id)arg1 publicKey:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000019e1f9
- (void)removePairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000019e0ee
- (void)_handlePairingsReadForCharacteristic:(id)arg1 readError:(id)arg2 removing:(_Bool)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000019dcfc
- (void)_handlePairingsWriteForCharacteristic:(id)arg1 writeError:(id)arg2 removing:(_Bool)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000019da2b
- (void)_addPairingWithIdentifier:(id)arg1 publicKey:(id)arg2 admin:(_Bool)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000019d496
- (void)addPairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000019d386
- (void)identifyWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000019d2ce
- (void)_handleConnectionLifetimeTimeout;	// IMP=0x000000000019d1c6
- (void)_disconnect;	// IMP=0x000000000019d094
- (void)_cancelConnectionLifetimeTimer;	// IMP=0x000000000019cf45
- (void)_updateConnectionLifetimeTimer;	// IMP=0x000000000019cd34
- (void)updateConnectionIdleTime:(unsigned char)arg1;	// IMP=0x000000000019ccba
- (int)_pairSetupTryPassword:(id)arg1;	// IMP=0x000000000019caf1
- (int)_handlePairSetupExchangeWithData:(id)arg1;	// IMP=0x000000000019c590
- (int)_pairSetupStart;	// IMP=0x000000000019c04b
- (int)_ensurePairingSessionIsInitializedWithType:(unsigned int)arg1;	// IMP=0x000000000019be1b
- (void)peripheral:(id)arg1 didUpdateNotificationStateForCharacteristic:(id)arg2 error:(id)arg3;	// IMP=0x000000000019bd3d
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;	// IMP=0x000000000019bb98
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;	// IMP=0x000000000019baba
- (void)peripheral:(id)arg1 didUpdateValueForDescriptor:(id)arg2 error:(id)arg3;	// IMP=0x000000000019b9dc
- (void)peripheral:(id)arg1 didDiscoverDescriptorsForCharacteristic:(id)arg2 error:(id)arg3;	// IMP=0x000000000019b8fe
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;	// IMP=0x000000000019b820
- (void)peripheral:(id)arg1 didModifyServices:(id)arg2;	// IMP=0x000000000019b768
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;	// IMP=0x000000000019b6b0
- (id)_pairVerifyHAPCharacteristic;	// IMP=0x000000000019b62a
- (id)_pairSetupHAPCharacteristic;	// IMP=0x000000000019b5a4
- (void)_notifyDelegateOfSentPlaintextData:(id)arg1 forCharacteristic:(id)arg2;	// IMP=0x000000000019b457
- (void)_notifyDelegateOfSentEncryptedAuthenticatedData:(id)arg1 forCharacteristic:(id)arg2;	// IMP=0x000000000019b30a
- (void)_notifyDelegateOfReceivedPlaintextData:(id)arg1 forCharacteristic:(id)arg2;	// IMP=0x000000000019b1bd
- (void)_notifyDelegateOfReceivedEncryptedAuthenticatedData:(id)arg1 forCharacteristic:(id)arg2;	// IMP=0x000000000019b048
- (_Bool)_shouldEnableSessionSecurity;	// IMP=0x000000000019b040
- (id)_hapCharacteristicForBTLECharacteristic:(id)arg1;	// IMP=0x000000000019afc6
- (id)_btleCharacteristicForHAPCharacteristic:(id)arg1;	// IMP=0x000000000019ad92
- (_Bool)_delegateRespondsToSelector:(SEL)arg1;	// IMP=0x000000000019acde
- (id)_nextInstanceID;	// IMP=0x000000000019ac70
- (_Bool)_parseBTLECharacteristicDescriptor:(id)arg1 existingDescriptors:(id)arg2 characteristics:(id)arg3;	// IMP=0x000000000019970b
- (id)_parseBTLEService:(id)arg1 withInstanceId:(id)arg2;	// IMP=0x0000000000198e7b
- (void)_handleHAPServiceDiscoveryCompletionForService:(id)arg1 withInstanceId:(id)arg2;	// IMP=0x0000000000198b35
- (void)_handleHAPCharacteristicDiscoveryForService:(id)arg1 error:(id)arg2;	// IMP=0x0000000000198793
- (void)_handleReadDescriptorValues;	// IMP=0x0000000000198330
- (void)_handleDescriptorDiscovery;	// IMP=0x0000000000197fba
- (void)_handleHAPServiceDiscovery;	// IMP=0x0000000000197a48
- (void)_getAttributeDatabase;	// IMP=0x00000000001977cc
- (void)discoverAccessories;	// IMP=0x000000000019775b
- (void)securitySession:(id)arg1 didCloseWithError:(id)arg2;	// IMP=0x000000000019767d
- (void)securitySessionDidOpen:(id)arg1;	// IMP=0x00000000001975c5
- (void)securitySessionIsOpening:(id)arg1;	// IMP=0x000000000019750d
- (void)securitySession:(id)arg1 didReceiveSetupExchangeData:(id)arg2;	// IMP=0x000000000019742f
- (id)securitySession:(id)arg1 didReceiveRequestForPeerPairingIdentityWithIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000196f96
- (id)securitySession:(id)arg1 didReceiveLocalPairingIdentityRequestWithError:(id *)arg2;	// IMP=0x0000000000196dc0
- (id)_decryptData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000196bf9
- (id)_encryptDataAndGenerateAuthTag:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000196a42
- (void)_handleReceivedSecuritySessionSetupExchangeData:(id)arg1;	// IMP=0x00000000001968cc
- (void)_reallyEstablishSecureSession;	// IMP=0x0000000000196655
- (void)_establishSecureSession;	// IMP=0x0000000000196643
- (void)_handleUpdatedValueForBTLECharacteristic:(id)arg1 error:(id)arg2;	// IMP=0x0000000000195b96
- (void)_readValueForCharacteristic:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000019555b
- (void)_readCharacteristicValues:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000195133
- (void)readValueForCharacteristic:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000195028
- (void)readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000194f0e
- (void)_handleHAPWriteConfirmationForCharacteristic:(id)arg1 error:(id)arg2;	// IMP=0x0000000000194cbf
- (void)_writeValue:(id)arg1 forCharacteristic:(id)arg2 authorizationData:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4 queue:(id)arg5;	// IMP=0x0000000000193ff9
- (void)_writeCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000193b11
- (void)writeCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001939f7
- (id)_dequeueEnableEventCompletionTupleForCharacteristic:(id)arg1;	// IMP=0x000000000019393b
- (void)_enqueueEnableEventCompletionHandler:(CDUnknownBlockType)arg1 queue:(id)arg2 forCharacteristic:(id)arg3;	// IMP=0x00000000001937ed
- (id)_dequeueReadCompletionTupleForCharacteristic:(id)arg1;	// IMP=0x0000000000193731
- (void)_enqueueReadCompletionHandler:(CDUnknownBlockType)arg1 queue:(id)arg2 forCharacteristic:(id)arg3;	// IMP=0x00000000001935ea
- (CDUnknownBlockType)_dequeueWriteCompletionHandlerForCharacteristic:(id)arg1;	// IMP=0x000000000019350c
- (void)_enqueueWriteCompletionHandler:(CDUnknownBlockType)arg1 forCharacteristic:(id)arg2;	// IMP=0x00000000001933fc
- (void)_handleDisconnectionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000192437
- (void)handleDisconnectionWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000019215e
- (_Bool)isBLELinkConnected;	// IMP=0x0000000000192115
- (void)_handleSuccessfulBTLEConnection;	// IMP=0x0000000000192000
- (void)_handleConnectionWithError:(id)arg1;	// IMP=0x0000000000191ec6
- (void)handleConnectionWithPeripheral:(id)arg1 withError:(id)arg2;	// IMP=0x0000000000191de8
- (void)_setupBTLEConnectionToPeripheral;	// IMP=0x0000000000191d9c
- (void)_handleHAPNotificationStateUpdateForCharacteristic:(id)arg1 error:(id)arg2;	// IMP=0x0000000000191aaa
- (void)_enableEvent:(_Bool)arg1 forCharacteristic:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3 queue:(id)arg4;	// IMP=0x000000000019117c
- (void)_enableEvents:(_Bool)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3 queue:(id)arg4;	// IMP=0x0000000000190de6
- (void)enableEvents:(_Bool)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3 queue:(id)arg4;	// IMP=0x0000000000190ccd
- (id)controllerUsername;	// IMP=0x0000000000190cbb
- (_Bool)stopPairingWithError:(id *)arg1;	// IMP=0x0000000000190c48
- (void)_handlePairingStateMachine;	// IMP=0x000000000018f333
- (void)continueAuthAfterValidation:(_Bool)arg1;	// IMP=0x000000000018f215
- (_Bool)tryPairingPassword:(id)arg1 onboardingSetupPayloadString:(id)arg2 error:(id *)arg3;	// IMP=0x000000000018f15b
- (void)_checkForAuthPrompt;	// IMP=0x000000000018ed01
- (void)continuePairingAfterAuthPrompt;	// IMP=0x000000000018ec90
- (void)startPairingWithRequest:(id)arg1;	// IMP=0x000000000018ebd8
- (void)configureCharacteristics:(id)arg1 queue:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000018eb2f
- (void)generateBroadcastKey:(unsigned char)arg1 queue:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000018ea86
- (void)_createPrimaryAccessoryFromAdvertisementData;	// IMP=0x000000000018e8ff
- (unsigned long long)hapBLEProtocolVersion;	// IMP=0x000000000018e8f4
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000000018e7a6
- (void)_resetState;	// IMP=0x000000000018e46c
- (id)initWithPeripheral:(id)arg1 name:(id)arg2 pairingUsername:(id)arg3 statusFlags:(id)arg4 stateNumber:(id)arg5 stateChanged:(_Bool)arg6 connectReason:(unsigned char)arg7 configNumber:(id)arg8 category:(id)arg9 setupHash:(id)arg10 connectionIdleTime:(unsigned char)arg11 browser:(id)arg12 keyStore:(id)arg13 whbStableIdentifier:(id)arg14;	// IMP=0x000000000018e29f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
