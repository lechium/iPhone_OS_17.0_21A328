//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TelephonyUtilities/TUCall.h>

@class CSDCallDataSource, CSDIDSTransport, CXCall, IDSDestination, MISSING_TYPE, NSDate, NSDictionary, NSObject, NSSet, NSString, TUDialRequest, TUDynamicCallDisplayContext;
@protocol CSDCallDelegate, CSDMuteProcessAttributionProtocol, OS_dispatch_source;

@interface CSDCall : TUCall
{
    _Bool _isSendingAudio;	// 8 = 0x8
    _Bool _isKnownCaller;	// 9 = 0x9
    _Bool _joinedFromLink;	// 10 = 0xa
    _Bool _localUserInHomeCountry;	// 11 = 0xb
    _Bool _answeringMachineAvailable;	// 12 = 0xc
    _Bool _nondisclosedGreeting;	// 13 = 0xd
    _Bool _identifiedSpamInCallerName;	// 14 = 0xe
    _Bool _uplinkWasExplicitlyMuted;	// 15 = 0xf
    _Bool _hasAudioInterruption;	// 16 = 0x10
    _Bool _hasAudioFinished;	// 17 = 0x11
    _Bool _ignoresBluetoothDeviceUID;	// 18 = 0x12
    _Bool _oneToOneModeEnabled;	// 19 = 0x13
    _Bool _temporaryRequireInCallSounds;	// 20 = 0x14
    _Bool _faceTimeIDStatusRefreshed;	// 21 = 0x15
    long long _junkConfidence;	// 24 = 0x18
    long long _identificationCategory;	// 32 = 0x20
    id <CSDCallDelegate> _delegate;	// 40 = 0x28
    CSDCallDataSource *_dataSource;	// 48 = 0x30
    TUDialRequest *_dialRequest;	// 56 = 0x38
    NSDate *_dateStartedOutgoing;	// 64 = 0x40
    NSString *_ringtoneSubscriptionIdentifier;	// 72 = 0x48
    NSDate *_temporaryDateStartedOutgoing;	// 80 = 0x50
    NSDictionary *_silencingUserInfo;	// 88 = 0x58
    long long _bytesOfDataUsed;	// 96 = 0x60
    unsigned long long _initialLinkType;	// 104 = 0x68
    double _uplinkMutedSetTime;	// 112 = 0x70
    double _remoteUplinkMutedSetTime;	// 120 = 0x78
    NSSet *_activeRemoteParticipants;	// 128 = 0x80
    CSDIDSTransport *_relayClientTransport;	// 136 = 0x88
    IDSDestination *_expectedRelayClientDestination;	// 144 = 0x90
    NSObject<OS_dispatch_source> *_timeoutTimer;	// 152 = 0x98
    long long _transmissionState;	// 160 = 0xa0
    TUDynamicCallDisplayContext *_dynamicDisplayContext;	// 168 = 0xa8
    id <CSDMuteProcessAttributionProtocol> _audioApplication;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x00200000000f7e7a
@property(retain, nonatomic) id <CSDMuteProcessAttributionProtocol> audioApplication; // @synthesize audioApplication=_audioApplication;
@property(nonatomic) _Bool faceTimeIDStatusRefreshed; // @synthesize faceTimeIDStatusRefreshed=_faceTimeIDStatusRefreshed;
@property(retain, nonatomic) TUDynamicCallDisplayContext *dynamicDisplayContext; // @synthesize dynamicDisplayContext=_dynamicDisplayContext;
@property(nonatomic) long long transmissionState; // @synthesize transmissionState=_transmissionState;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(retain, nonatomic) IDSDestination *expectedRelayClientDestination; // @synthesize expectedRelayClientDestination=_expectedRelayClientDestination;
@property(retain, nonatomic) CSDIDSTransport *relayClientTransport; // @synthesize relayClientTransport=_relayClientTransport;
@property(copy, nonatomic) NSSet *activeRemoteParticipants; // @synthesize activeRemoteParticipants=_activeRemoteParticipants;
@property(nonatomic) double remoteUplinkMutedSetTime; // @synthesize remoteUplinkMutedSetTime=_remoteUplinkMutedSetTime;
@property(nonatomic) double uplinkMutedSetTime; // @synthesize uplinkMutedSetTime=_uplinkMutedSetTime;
@property(readonly, nonatomic) unsigned long long initialLinkType; // @synthesize initialLinkType=_initialLinkType;
@property(nonatomic) long long bytesOfDataUsed; // @synthesize bytesOfDataUsed=_bytesOfDataUsed;
@property(retain, nonatomic) NSDictionary *silencingUserInfo; // @synthesize silencingUserInfo=_silencingUserInfo;
@property(retain, nonatomic) NSDate *temporaryDateStartedOutgoing; // @synthesize temporaryDateStartedOutgoing=_temporaryDateStartedOutgoing;
@property(nonatomic) _Bool temporaryRequireInCallSounds; // @synthesize temporaryRequireInCallSounds=_temporaryRequireInCallSounds;
@property(readonly, nonatomic, getter=isOneToOneModeEnabled) _Bool oneToOneModeEnabled; // @synthesize oneToOneModeEnabled=_oneToOneModeEnabled;
@property(readonly, nonatomic) _Bool ignoresBluetoothDeviceUID; // @synthesize ignoresBluetoothDeviceUID=_ignoresBluetoothDeviceUID;
@property(nonatomic) NSString *ringtoneSubscriptionIdentifier; // @synthesize ringtoneSubscriptionIdentifier=_ringtoneSubscriptionIdentifier;
@property(nonatomic) _Bool hasAudioFinished; // @synthesize hasAudioFinished=_hasAudioFinished;
@property(nonatomic) _Bool hasAudioInterruption; // @synthesize hasAudioInterruption=_hasAudioInterruption;
@property(nonatomic) _Bool uplinkWasExplicitlyMuted; // @synthesize uplinkWasExplicitlyMuted=_uplinkWasExplicitlyMuted;
@property(retain, nonatomic) NSDate *dateStartedOutgoing; // @synthesize dateStartedOutgoing=_dateStartedOutgoing;
@property(retain, nonatomic) TUDialRequest *dialRequest; // @synthesize dialRequest=_dialRequest;
@property(nonatomic) __weak CSDCallDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <CSDCallDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=hasIdentifiedSpamInCallerName) _Bool identifiedSpamInCallerName; // @synthesize identifiedSpamInCallerName=_identifiedSpamInCallerName;
@property(nonatomic, getter=hasNondisclosedGreeting) _Bool nondisclosedGreeting; // @synthesize nondisclosedGreeting=_nondisclosedGreeting;
@property(nonatomic, getter=isAnsweringMachineAvailable) _Bool answeringMachineAvailable; // @synthesize answeringMachineAvailable=_answeringMachineAvailable;
@property(nonatomic, getter=isLocalUserInHomeCountry) _Bool localUserInHomeCountry; // @synthesize localUserInHomeCountry=_localUserInHomeCountry;
@property(nonatomic) _Bool joinedFromLink; // @synthesize joinedFromLink=_joinedFromLink;
@property(nonatomic) _Bool isKnownCaller; // @synthesize isKnownCaller=_isKnownCaller;
@property(nonatomic) long long identificationCategory; // @synthesize identificationCategory=_identificationCategory;
@property(nonatomic) long long junkConfidence; // @synthesize junkConfidence=_junkConfidence;
@property(nonatomic) _Bool isSendingAudio; // @synthesize isSendingAudio=_isSendingAudio;
- (oneway void)handleAudioSessionActivationStateChangedTo:(id)arg1;	// IMP=0x00100000000f7a19
- (void)displayContextChanged:(id)arg1;	// IMP=0x00100000000f7a07
- (void)performUplinkMuted:(_Bool)arg1;	// IMP=0x00100000000f7a01
- (void)handleUpdatedPropertiesAfterChangesInBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f6e04
- (void)propertiesChanged;	// IMP=0x00100000000f6db8
@property(readonly, nonatomic) CXCall *cxCall;
@property(readonly, nonatomic) _Bool mediaPlaybackOnExternalDevice;
@property(readonly, nonatomic) _Bool mixesVoiceWithMedia;
@property(readonly, nonatomic) _Bool mayRequireBreakBeforeMake;
@property(readonly, nonatomic) long long providerEndedReason;
@property(readonly, nonatomic) long long providerErrorCode;
- (id)displayContext;	// IMP=0x00100000000f6a35
- (void)_refreshFaceTimeIDSStatusIfNecessary;	// IMP=0x00100000000f66aa
- (int)faceTimeIDStatus;	// IMP=0x00100000000f666c
@property(readonly, copy, nonatomic) NSDictionary *handoffActivityUserInfo;
- (id)handoffDynamicIdentifier;	// IMP=0x00100000000f665c
- (_Bool)isSOS;	// IMP=0x00100000000f65ba
- (_Bool)isEmergency;	// IMP=0x00100000000f6513
- (_Bool)isVoicemail;	// IMP=0x00100000000f646c
- (_Bool)isOutgoing;	// IMP=0x00100000000f6404
- (id)handle;	// IMP=0x00100000000f634e
@property(readonly, nonatomic) long long audioInterruptionOperationMode;
@property(readonly, nonatomic) long long audioInterruptionProviderType;
@property(readonly, nonatomic) _Bool hasStartedOutgoing;
@property(readonly, nonatomic) int callStatusFromOverride;
@property(readonly, nonatomic) _Bool shouldOverrideCallStatus;
@property(readonly, nonatomic) int callStatusFromUnderlyingSource;
- (int)callStatus;	// IMP=0x00100000000f6227
@property(readonly, nonatomic) _Bool shouldHandleMuteRequests;
@property(readonly, nonatomic) _Bool shouldOwnMuteHandler;
- (void)updateUplinkMuted:(_Bool)arg1;	// IMP=0x00100000000f5e11
- (void)setUplinkMuted:(_Bool)arg1;	// IMP=0x00100000000f5df4
- (void)setDateEnded:(id)arg1;	// IMP=0x00100000000f5bee
- (void)setDateConnected:(id)arg1;	// IMP=0x00100000000f5b16
- (void)setDateStartedConnecting:(id)arg1;	// IMP=0x00100000000f5a26
- (void)setDateSentInvitation:(id)arg1;	// IMP=0x00100000000f5888
- (void)setScreening:(_Bool)arg1;	// IMP=0x00100000000f57ae
- (void)setEndpointOnCurrentDevice:(_Bool)arg1;	// IMP=0x00100000000f56f8
- (void)setAnsweringMachineStreamToken:(long long)arg1;	// IMP=0x00100000000f5642
- (void)setModel:(id)arg1;	// IMP=0x00100000000f5546
- (void)setSoundRegion:(long long)arg1;	// IMP=0x00100000000f5490
- (void)setFaceTimeIDStatus:(int)arg1;	// IMP=0x00100000000f53db
- (void)setShouldSuppressRingtone:(_Bool)arg1;	// IMP=0x00100000000f5325
- (void)setDisconnectedReason:(int)arg1;	// IMP=0x00100000000f5270
- (void)setScreeningAnnouncementHasFinished:(_Bool)arg1;	// IMP=0x00100000000f51ba
- (void)setWasDialAssisted:(_Bool)arg1;	// IMP=0x00100000000f5104
- (MISSING_TYPE *)setWantsHoldMusic: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000f504e
- (void)setTransitionStatus:(int)arg1;	// IMP=0x00100000000f4f99
- (void)playRemoteDTMFToneForKey:(unsigned char)arg1;	// IMP=0x00100000000f4e12
- (void)playLocalDTMFToneForKey:(unsigned char)arg1;	// IMP=0x00100000000f4e0c
- (void)updateWithProxyCall:(id)arg1;	// IMP=0x00100000000f4d7b
- (void)updateForDisconnection;	// IMP=0x00100000000f4d75
- (void)unsuppressRingtoneIfNecessary;	// IMP=0x00100000000f4989
- (void)disconnect;	// IMP=0x00100000000f4975
- (void)dialWithRequest:(id)arg1 displayContext:(id)arg2;	// IMP=0x00100000000f4711
- (_Bool)needsGFTRelaySupport;	// IMP=0x00100000000f468f
- (int)callRelaySupport;	// IMP=0x00100000000f4504
- (void)unmuteAfterDisconnect;	// IMP=0x00100000000f44f0
- (void)setupInputMuteHandlerWithFeatureFlags:(id)arg1 forApplication:(id)arg2;	// IMP=0x00100000000f44ea
- (void)setupInputMuteHandlerWithFeatureFlags:(id)arg1;	// IMP=0x00100000000f44e4
- (void)dealloc;	// IMP=0x00100000000f444e
- (id)initWithUniqueProxyIdentifier:(id)arg1 configuration:(id)arg2;	// IMP=0x00100000000f43da

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool prefersToPlayDuringWombat;
@property(readonly) Class superclass;

@end

