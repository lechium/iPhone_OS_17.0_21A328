//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMHomeLogEvent.h>

@class HMDAccessory, HMDAccessoryMetricVendorDetails, NSDate, NSDictionary, NSError, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDAccessoryPairingEvent : HMMHomeLogEvent
{
    _Bool _addOperation;	// 8 = 0x8
    _Bool _addViaWAC;	// 9 = 0x9
    _Bool _wacLegacy;	// 10 = 0xa
    _Bool _usedWiFiPPSK;	// 11 = 0xb
    _Bool _usedOwnershipProof;	// 12 = 0xc
    _Bool _networkRouterAdd;	// 13 = 0xd
    _Bool _networkRouterReplace;	// 14 = 0xe
    _Bool _firstHAPAccessoryInHome;	// 15 = 0xf
    _Bool _firstHAPAccessoryInAnyHome;	// 16 = 0x10
    _Bool _threadAccessory;	// 17 = 0x11
    _Bool _btCommissioned;	// 18 = 0x12
    _Bool _requiresMatterCustomCommissioningFlow;	// 19 = 0x13
    _Bool _accessorySupportsWoL;	// 20 = 0x14
    _Bool _retry;	// 21 = 0x15
    unsigned int _threadCapabilities;	// 24 = 0x18
    unsigned int _threadStatus;	// 28 = 0x1c
    NSUUID *_accessoryUUID;	// 32 = 0x20
    NSString *_accessoryServerIdentifier;	// 40 = 0x28
    NSString *_accessoryAddRequestIdentifier;	// 48 = 0x30
    HMDAccessory *_pairedAccessory;	// 56 = 0x38
    NSString *_accessoryModel;	// 64 = 0x40
    NSString *_accessoryManufacturer;	// 72 = 0x48
    NSString *_accessoryCategory;	// 80 = 0x50
    NSString *_primaryServiceType;	// 88 = 0x58
    HMDAccessoryMetricVendorDetails *_vendorDetailsForReporting;	// 96 = 0x60
    NSString *_appIdentifier;	// 104 = 0x68
    long long _linkType;	// 112 = 0x70
    long long _communicationProtocol;	// 120 = 0x78
    long long _certificationStatus;	// 128 = 0x80
    unsigned long long _authMethod;	// 136 = 0x88
    long long _retryCount;	// 144 = 0x90
    NSError *_threadCommissioningError;	// 152 = 0x98
    double _threadCommissioningDuration;	// 160 = 0xa0
    long long _hmdAccessoryPairingEventResidentConfirmation;	// 168 = 0xa8
    NSDate *_residentConfirmationTimeStarted;	// 176 = 0xb0
    double _residentConfirmationDurationInSeconds;	// 184 = 0xb8
    NSString *_lastAccessoryPairingState;	// 192 = 0xc0
    NSString *_longestPairingState;	// 200 = 0xc8
    double _longestPairingProgressStateDurationInMilliseconds;	// 208 = 0xd0
    NSString *_categoryType;	// 216 = 0xd8
    NSString *_productNumber;	// 224 = 0xe0
    NSDictionary *_matterMetrics;	// 232 = 0xe8
    NSString *_matterSoftwareVersionString;	// 240 = 0xf0
    unsigned long long _pairingUIState;	// 248 = 0xf8
    unsigned long long _recoveryType;	// 256 = 0x100
    unsigned long long _previousRecoveryType;	// 264 = 0x108
    NSDictionary *_vendorDetailsForCoreAnalytics;	// 272 = 0x110
}

+ (_Bool)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;	// IMP=0x00100000005ee49a
+ (id)removingAccessory:(id)arg1 hapAccessory:(id)arg2;	// IMP=0x00100000005ee3ee
+ (id)pairingAccessory:(id)arg1 home:(id)arg2;	// IMP=0x00100000005ee368
+ (id)pairingAccessoryWithDescription:(id)arg1 home:(id)arg2;	// IMP=0x00100000005ee2f6
- (void).cxx_destruct;	// IMP=0x00000000005ee1a4
@property(retain, nonatomic) NSDictionary *vendorDetailsForCoreAnalytics; // @synthesize vendorDetailsForCoreAnalytics=_vendorDetailsForCoreAnalytics;
@property(nonatomic) unsigned long long previousRecoveryType; // @synthesize previousRecoveryType=_previousRecoveryType;
@property(nonatomic) unsigned long long recoveryType; // @synthesize recoveryType=_recoveryType;
@property(nonatomic) unsigned long long pairingUIState; // @synthesize pairingUIState=_pairingUIState;
@property(nonatomic) _Bool retry; // @synthesize retry=_retry;
@property(readonly, nonatomic) _Bool accessorySupportsWoL; // @synthesize accessorySupportsWoL=_accessorySupportsWoL;
@property(copy, nonatomic) NSString *matterSoftwareVersionString; // @synthesize matterSoftwareVersionString=_matterSoftwareVersionString;
@property(copy, nonatomic) NSDictionary *matterMetrics; // @synthesize matterMetrics=_matterMetrics;
@property(readonly, nonatomic) _Bool requiresMatterCustomCommissioningFlow; // @synthesize requiresMatterCustomCommissioningFlow=_requiresMatterCustomCommissioningFlow;
@property(readonly, nonatomic) NSString *productNumber; // @synthesize productNumber=_productNumber;
@property(readonly, nonatomic) NSString *categoryType; // @synthesize categoryType=_categoryType;
@property double longestPairingProgressStateDurationInMilliseconds; // @synthesize longestPairingProgressStateDurationInMilliseconds=_longestPairingProgressStateDurationInMilliseconds;
@property(retain, nonatomic) NSString *longestPairingState; // @synthesize longestPairingState=_longestPairingState;
@property(retain, nonatomic) NSString *lastAccessoryPairingState; // @synthesize lastAccessoryPairingState=_lastAccessoryPairingState;
@property(readonly, nonatomic) double residentConfirmationDurationInSeconds; // @synthesize residentConfirmationDurationInSeconds=_residentConfirmationDurationInSeconds;
@property(readonly, nonatomic) NSDate *residentConfirmationTimeStarted; // @synthesize residentConfirmationTimeStarted=_residentConfirmationTimeStarted;
@property(nonatomic) long long hmdAccessoryPairingEventResidentConfirmation; // @synthesize hmdAccessoryPairingEventResidentConfirmation=_hmdAccessoryPairingEventResidentConfirmation;
@property unsigned int threadStatus; // @synthesize threadStatus=_threadStatus;
@property unsigned int threadCapabilities; // @synthesize threadCapabilities=_threadCapabilities;
@property(nonatomic) double threadCommissioningDuration; // @synthesize threadCommissioningDuration=_threadCommissioningDuration;
@property(copy, nonatomic) NSError *threadCommissioningError; // @synthesize threadCommissioningError=_threadCommissioningError;
@property(getter=isBTCommissioned) _Bool btCommissioned; // @synthesize btCommissioned=_btCommissioned;
@property(getter=isThreadAccessory) _Bool threadAccessory; // @synthesize threadAccessory=_threadAccessory;
@property long long retryCount; // @synthesize retryCount=_retryCount;
@property(getter=isFirstHAPAccessoryInAnyHome) _Bool firstHAPAccessoryInAnyHome; // @synthesize firstHAPAccessoryInAnyHome=_firstHAPAccessoryInAnyHome;
@property(getter=isFirstHAPAccessoryInHome) _Bool firstHAPAccessoryInHome; // @synthesize firstHAPAccessoryInHome=_firstHAPAccessoryInHome;
@property(getter=isNetworkRouterReplace) _Bool networkRouterReplace; // @synthesize networkRouterReplace=_networkRouterReplace;
@property(getter=isNetworkRouterAdd) _Bool networkRouterAdd; // @synthesize networkRouterAdd=_networkRouterAdd;
@property(getter=didUseOwnershipProof) _Bool usedOwnershipProof; // @synthesize usedOwnershipProof=_usedOwnershipProof;
@property(getter=didUseWiFiPPSK) _Bool usedWiFiPPSK; // @synthesize usedWiFiPPSK=_usedWiFiPPSK;
@property unsigned long long authMethod; // @synthesize authMethod=_authMethod;
@property(getter=isWacLegacy) _Bool wacLegacy; // @synthesize wacLegacy=_wacLegacy;
@property(getter=isAddViaWAC) _Bool addViaWAC; // @synthesize addViaWAC=_addViaWAC;
@property(readonly, nonatomic, getter=isAddOperation) _Bool addOperation; // @synthesize addOperation=_addOperation;
@property long long certificationStatus; // @synthesize certificationStatus=_certificationStatus;
@property long long communicationProtocol; // @synthesize communicationProtocol=_communicationProtocol;
@property long long linkType; // @synthesize linkType=_linkType;
@property(copy, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
@property(retain, nonatomic) HMDAccessoryMetricVendorDetails *vendorDetailsForReporting; // @synthesize vendorDetailsForReporting=_vendorDetailsForReporting;
@property(retain, nonatomic) NSString *primaryServiceType; // @synthesize primaryServiceType=_primaryServiceType;
@property(retain, nonatomic) NSString *accessoryCategory; // @synthesize accessoryCategory=_accessoryCategory;
@property(retain, nonatomic) NSString *accessoryManufacturer; // @synthesize accessoryManufacturer=_accessoryManufacturer;
@property(retain, nonatomic) NSString *accessoryModel; // @synthesize accessoryModel=_accessoryModel;
@property(retain) HMDAccessory *pairedAccessory; // @synthesize pairedAccessory=_pairedAccessory;
@property(retain, nonatomic) NSString *accessoryAddRequestIdentifier; // @synthesize accessoryAddRequestIdentifier=_accessoryAddRequestIdentifier;
@property(retain, nonatomic) NSString *accessoryServerIdentifier; // @synthesize accessoryServerIdentifier=_accessoryServerIdentifier;
@property(retain, nonatomic) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
- (id)residentConfirmationToString:(long long)arg1;	// IMP=0x00000000005edaf0
- (void)updateResidentConfirmationDurationWithConfirmation:(long long)arg1;	// IMP=0x00000000005eda66
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
- (id)getLowestError:(id)arg1;	// IMP=0x00000000005ec913
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
- (void)submitAtDate:(id)arg1;	// IMP=0x00000000005ebdf8
- (_Bool)_isMatterAccessory;	// IMP=0x00000000005ebde3
- (void)_updateThreadPropertiesWithPairedAccessory:(id)arg1;	// IMP=0x00000000005ebd3d
- (void)updateEventPropertiesWithHAPAccessory:(id)arg1;	// IMP=0x00000000005eb8ed
- (void)updateEventPropertiesWithPairedAccessory:(id)arg1;	// IMP=0x00000000005eb759
- (void)pairedToServer:(id)arg1 certificationStatus:(long long)arg2 addedViaWAC:(_Bool)arg3 legacyWAC:(_Bool)arg4;	// IMP=0x00000000005eb4e9
- (void)setAuthenticationMethod:(unsigned long long)arg1;	// IMP=0x00000000005eb4d7
- (void)setAddedViaWAC:(_Bool)arg1;	// IMP=0x00000000005eb4c5
- (id)initWithAccessoryDescription:(id)arg1 home:(id)arg2;	// IMP=0x00000000005eac57
- (id)initWithUnpairedAccessory:(id)arg1 pairedAccessory:(id)arg2 hapAccessory:(id)arg3 home:(id)arg4 isAddOperation:(_Bool)arg5;	// IMP=0x00000000005e9dbf

// Remaining properties
@property(readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeUUID;
@property(readonly) Class superclass;

@end

