//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, MRApplicationActivity, MRDCommandClientRestriction, MRDMediaRemoteClient, MRDRemoteControlService, MRDVolumeController, MROrigin, MRPlayerPath, NSArray, NSDate, NSDictionary, NSString, _MRAVAirPlaySecuritySettingsProtobuf;

@interface MRDDiagnostic : NSObject
{
    _Bool _lockScreenWidgetActive;	// 8 = 0x8
    _Bool _lockScreenWidgetVisible;	// 9 = 0x9
    _Bool _isAdvertisingProximity;	// 10 = 0xa
    _Bool _groupSessionDiscoveryEnabled;	// 11 = 0xb
    unsigned int _systemDiscoveryMode;	// 12 = 0xc
    unsigned int _hostedRouteDiscoveryMode;	// 16 = 0x10
    NSDate *_dateCreated;	// 24 = 0x18
    NSArray *_activeClients;	// 32 = 0x20
    NSArray *_activeTransactions;	// 40 = 0x28
    MRApplicationActivity *_currentAppActivity;	// 48 = 0x30
    MRDMediaRemoteClient *_localNowPlayingClient;	// 56 = 0x38
    MRDMediaRemoteClient *_systemMediaClient;	// 64 = 0x40
    MRDMediaRemoteClient *_frontmostClient;	// 72 = 0x48
    MRDMediaRemoteClient *_daemonClient;	// 80 = 0x50
    MRDVolumeController *_volumeController;	// 88 = 0x58
    NSArray *_originClients;	// 96 = 0x60
    MROrigin *_activeOrigin;	// 104 = 0x68
    MRPlayerPath *_electedPlayer;	// 112 = 0x70
    NSString *_electedPlayerReason;	// 120 = 0x78
    MRPlayerPath *_lockScreenPlayerPath;	// 128 = 0x80
    NSArray *_originForwarders;	// 136 = 0x88
    NSDictionary *_enqueuedCommands;	// 144 = 0x90
    NSArray *_remoteControlContexts;	// 152 = 0x98
    MRDCommandClientRestriction *_commandClientsRestriction;	// 160 = 0xa0
    NSArray *_queuedInitiatePlaybackMessages;	// 168 = 0xa8
    NSArray *_connectedExternalDevices;	// 176 = 0xb0
    NSArray *_televisionEndpoints;	// 184 = 0xb8
    NSArray *_discoverySessions;	// 192 = 0xc0
    MRDRemoteControlService *_remoteControlService;	// 200 = 0xc8
    NSString *_batchedNowPlayingState;	// 208 = 0xd0
    _MRAVAirPlaySecuritySettingsProtobuf *_airplaySecuritySettings;	// 216 = 0xd8
    MISSING_TYPE *_localReceiverPairingIdentity;	// 224 = 0xe0
    NSDictionary *_systemActiveEndpoints;	// 232 = 0xe8
    NSArray *_autoConnectedEndpoints;	// 240 = 0xf0
    NSArray *_autoConnectingEndpoints;	// 248 = 0xf8
    NSArray *_migrationEvents;	// 256 = 0x100
    NSArray *_nearbyDevices;	// 264 = 0x108
    NSArray *_mediumDevices;	// 272 = 0x110
    NSArray *_promptingDevices;	// 280 = 0x118
    NSArray *_immediateDevices;	// 288 = 0x120
    NSArray *_migratingDevices;	// 296 = 0x128
    NSString *_advertisingReasonDescription;	// 304 = 0x130
    NSArray *_hostedDiscoverySessions;	// 312 = 0x138
    NSArray *_endpoints;	// 320 = 0x140
    NSDictionary *_hostedExternalDevices;	// 328 = 0x148
    NSString *_discoverySession;	// 336 = 0x150
    NSArray *_recordingEndpointClients;	// 344 = 0x158
    NSArray *_registeredVirtualAudioDevices;	// 352 = 0x160
    NSArray *_transactions;	// 360 = 0x168
    unsigned long long _usedTransactionMemory;	// 368 = 0x170
    unsigned long long _allowedTransactionMemory;	// 376 = 0x178
    double _transactionWaitDuration;	// 384 = 0x180
    NSDictionary *_uiActivityInfo;	// 392 = 0x188
    NSString *_currentGroupSession;	// 400 = 0x190
    NSString *_groupSessionAdvertiserState;	// 408 = 0x198
    NSArray *_groupSessionAdvertiserEvents;	// 416 = 0x1a0
    NSArray *_discoveredGroupSessions;	// 424 = 0x1a8
    NSArray *_notifiedGroupSessions;	// 432 = 0x1b0
    NSString *_groupSessionCoordinatorState;	// 440 = 0x1b8
}

- (void).cxx_destruct;	// IMP=0x00200000000ec603
@property(copy, nonatomic) NSString *groupSessionCoordinatorState; // @synthesize groupSessionCoordinatorState=_groupSessionCoordinatorState;
@property(copy, nonatomic) NSArray *notifiedGroupSessions; // @synthesize notifiedGroupSessions=_notifiedGroupSessions;
@property(copy, nonatomic) NSArray *discoveredGroupSessions; // @synthesize discoveredGroupSessions=_discoveredGroupSessions;
@property(nonatomic) _Bool groupSessionDiscoveryEnabled; // @synthesize groupSessionDiscoveryEnabled=_groupSessionDiscoveryEnabled;
@property(copy, nonatomic) NSArray *groupSessionAdvertiserEvents; // @synthesize groupSessionAdvertiserEvents=_groupSessionAdvertiserEvents;
@property(copy, nonatomic) NSString *groupSessionAdvertiserState; // @synthesize groupSessionAdvertiserState=_groupSessionAdvertiserState;
@property(copy, nonatomic) NSString *currentGroupSession; // @synthesize currentGroupSession=_currentGroupSession;
@property(copy, nonatomic) NSDictionary *uiActivityInfo; // @synthesize uiActivityInfo=_uiActivityInfo;
@property(nonatomic) double transactionWaitDuration; // @synthesize transactionWaitDuration=_transactionWaitDuration;
@property(nonatomic) unsigned long long allowedTransactionMemory; // @synthesize allowedTransactionMemory=_allowedTransactionMemory;
@property(nonatomic) unsigned long long usedTransactionMemory; // @synthesize usedTransactionMemory=_usedTransactionMemory;
@property(copy, nonatomic) NSArray *transactions; // @synthesize transactions=_transactions;
@property(copy, nonatomic) NSArray *registeredVirtualAudioDevices; // @synthesize registeredVirtualAudioDevices=_registeredVirtualAudioDevices;
@property(copy, nonatomic) NSArray *recordingEndpointClients; // @synthesize recordingEndpointClients=_recordingEndpointClients;
@property(retain, nonatomic) NSString *discoverySession; // @synthesize discoverySession=_discoverySession;
@property(copy, nonatomic) NSDictionary *hostedExternalDevices; // @synthesize hostedExternalDevices=_hostedExternalDevices;
@property(copy, nonatomic) NSArray *endpoints; // @synthesize endpoints=_endpoints;
@property(copy, nonatomic) NSArray *hostedDiscoverySessions; // @synthesize hostedDiscoverySessions=_hostedDiscoverySessions;
@property(nonatomic) unsigned int hostedRouteDiscoveryMode; // @synthesize hostedRouteDiscoveryMode=_hostedRouteDiscoveryMode;
@property(copy, nonatomic) NSString *advertisingReasonDescription; // @synthesize advertisingReasonDescription=_advertisingReasonDescription;
@property(nonatomic) _Bool isAdvertisingProximity; // @synthesize isAdvertisingProximity=_isAdvertisingProximity;
@property(copy, nonatomic) NSArray *migratingDevices; // @synthesize migratingDevices=_migratingDevices;
@property(copy, nonatomic) NSArray *immediateDevices; // @synthesize immediateDevices=_immediateDevices;
@property(copy, nonatomic) NSArray *promptingDevices; // @synthesize promptingDevices=_promptingDevices;
@property(copy, nonatomic) NSArray *mediumDevices; // @synthesize mediumDevices=_mediumDevices;
@property(copy, nonatomic) NSArray *nearbyDevices; // @synthesize nearbyDevices=_nearbyDevices;
@property(copy, nonatomic) NSArray *migrationEvents; // @synthesize migrationEvents=_migrationEvents;
@property(copy, nonatomic) NSArray *autoConnectingEndpoints; // @synthesize autoConnectingEndpoints=_autoConnectingEndpoints;
@property(copy, nonatomic) NSArray *autoConnectedEndpoints; // @synthesize autoConnectedEndpoints=_autoConnectedEndpoints;
@property(copy, nonatomic) NSDictionary *systemActiveEndpoints; // @synthesize systemActiveEndpoints=_systemActiveEndpoints;
@property(copy, nonatomic) NSString *localReceiverPairingIdentity; // @synthesize localReceiverPairingIdentity=_localReceiverPairingIdentity;
@property(retain, nonatomic) _MRAVAirPlaySecuritySettingsProtobuf *airplaySecuritySettings; // @synthesize airplaySecuritySettings=_airplaySecuritySettings;
@property(nonatomic) unsigned int systemDiscoveryMode; // @synthesize systemDiscoveryMode=_systemDiscoveryMode;
@property(retain, nonatomic) NSString *batchedNowPlayingState; // @synthesize batchedNowPlayingState=_batchedNowPlayingState;
@property(retain, nonatomic) MRDRemoteControlService *remoteControlService; // @synthesize remoteControlService=_remoteControlService;
@property(copy, nonatomic) NSArray *discoverySessions; // @synthesize discoverySessions=_discoverySessions;
@property(copy, nonatomic) NSArray *televisionEndpoints; // @synthesize televisionEndpoints=_televisionEndpoints;
@property(copy, nonatomic) NSArray *connectedExternalDevices; // @synthesize connectedExternalDevices=_connectedExternalDevices;
@property(copy, nonatomic) NSArray *queuedInitiatePlaybackMessages; // @synthesize queuedInitiatePlaybackMessages=_queuedInitiatePlaybackMessages;
@property(copy, nonatomic) MRDCommandClientRestriction *commandClientsRestriction; // @synthesize commandClientsRestriction=_commandClientsRestriction;
@property(copy, nonatomic) NSArray *remoteControlContexts; // @synthesize remoteControlContexts=_remoteControlContexts;
@property(copy, nonatomic) NSDictionary *enqueuedCommands; // @synthesize enqueuedCommands=_enqueuedCommands;
@property(retain, nonatomic) NSArray *originForwarders; // @synthesize originForwarders=_originForwarders;
@property(retain, nonatomic) MRPlayerPath *lockScreenPlayerPath; // @synthesize lockScreenPlayerPath=_lockScreenPlayerPath;
@property(nonatomic) _Bool lockScreenWidgetVisible; // @synthesize lockScreenWidgetVisible=_lockScreenWidgetVisible;
@property(nonatomic) _Bool lockScreenWidgetActive; // @synthesize lockScreenWidgetActive=_lockScreenWidgetActive;
@property(retain, nonatomic) NSString *electedPlayerReason; // @synthesize electedPlayerReason=_electedPlayerReason;
@property(retain, nonatomic) MRPlayerPath *electedPlayer; // @synthesize electedPlayer=_electedPlayer;
@property(retain, nonatomic) MROrigin *activeOrigin; // @synthesize activeOrigin=_activeOrigin;
@property(copy, nonatomic) NSArray *originClients; // @synthesize originClients=_originClients;
@property(retain, nonatomic) MRDVolumeController *volumeController; // @synthesize volumeController=_volumeController;
@property(retain, nonatomic) MRDMediaRemoteClient *daemonClient; // @synthesize daemonClient=_daemonClient;
@property(retain, nonatomic) MRDMediaRemoteClient *frontmostClient; // @synthesize frontmostClient=_frontmostClient;
@property(retain, nonatomic) MRDMediaRemoteClient *systemMediaClient; // @synthesize systemMediaClient=_systemMediaClient;
@property(retain, nonatomic) MRDMediaRemoteClient *localNowPlayingClient; // @synthesize localNowPlayingClient=_localNowPlayingClient;
@property(copy, nonatomic) MRApplicationActivity *currentAppActivity; // @synthesize currentAppActivity=_currentAppActivity;
@property(copy, nonatomic) NSArray *activeTransactions; // @synthesize activeTransactions=_activeTransactions;
@property(copy, nonatomic) NSArray *activeClients; // @synthesize activeClients=_activeClients;
@property(readonly, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
- (void)_appendDescribableArray:(id)arg1 toString:(id)arg2 withTitle:(id)arg3 indentLevel:(unsigned int)arg4 usingDebugDescription:(_Bool)arg5;	// IMP=0x00100000000ebd17
- (void)_appendDescribableArray:(id)arg1 toString:(id)arg2 withTitle:(id)arg3 indentLevel:(unsigned int)arg4;	// IMP=0x00100000000ebcf5
- (void)_appendDescribableArray:(id)arg1 toString:(id)arg2 withTitle:(id)arg3;	// IMP=0x00100000000ebcd0
- (void)_appendNullableObjectDescription:(id)arg1 toString:(id)arg2 withTitle:(id)arg3 usingDebugDescription:(_Bool)arg4;	// IMP=0x00100000000ebc0f
- (void)_appendNullableObjectDescription:(id)arg1 toString:(id)arg2 withTitle:(id)arg3;	// IMP=0x00100000000ebbfa
- (void)_appendSubheader:(id)arg1 toString:(id)arg2;	// IMP=0x00100000000ebbd6
- (id)createDiagnosticInfo;	// IMP=0x00100000000ea8b1
- (id)init;	// IMP=0x00100000000ea85b

@end

