//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HFAccessoryItem, HMAccessory, HMAccessoryCategory, HMCameraProfile, HMHome, HMSetupAccessoryDescription, HMSiriEndpointOnboardingSelections, MTSDeviceSetupRequest, MTSSystemCommissionerPairingManager, NSArray, NSError, NSString;
@protocol HSSetupStateMachineConfigurationDelegate;

@interface HSSetupStateMachineConfiguration : NSObject
{
    _Bool _isReadyToPair;	// 8 = 0x8
    _Bool _isPlaybackInfluencesForYouEnabled;	// 9 = 0x9
    _Bool _isShareSiriAnalyticsEnabled;	// 10 = 0xa
    _Bool _isExplicitContentAllowed;	// 11 = 0xb
    _Bool _shouldSkipVoiceProfileSetup;	// 12 = 0xc
    _Bool _shouldShowSiriRecognitionLanguageSetup;	// 13 = 0xd
    _Bool _shouldShowVoiceSelectionSetup;	// 14 = 0xe
    _Bool _allowsRandomVoiceSelection;	// 15 = 0xf
    id <HSSetupStateMachineConfigurationDelegate> _delegate;	// 16 = 0x10
    HMHome *_home;	// 24 = 0x18
    NSString *_roomName;	// 32 = 0x20
    NSString *_userGivenAccessoryName;	// 40 = 0x28
    NSError *_pairingError;	// 48 = 0x30
    HMAccessory *_addedAccessory;	// 56 = 0x38
    HMSiriEndpointOnboardingSelections *_onboardingSelections;	// 64 = 0x40
    NSArray *_siriEnabledAccessories;	// 72 = 0x48
    NSArray *_availableSiriLanguageValues;	// 80 = 0x50
    NSArray *_listOfVoices;	// 88 = 0x58
    NSString *_recognitionLanguage;	// 96 = 0x60
    MTSSystemCommissionerPairingManager *_pairingManager;	// 104 = 0x68
}

+ (id)writeConfigurationState:(long long)arg1 toService:(id)arg2;	// IMP=0x0010000000029305
+ (id)writeVisibilityState:(id)arg1 toInputSourceService:(id)arg2;	// IMP=0x0010000000028f59
+ (id)disableServices:(id)arg1;	// IMP=0x0010000000028de6
+ (id)enableServices:(id)arg1;	// IMP=0x0010000000028c73
+ (id)configureServices:(id)arg1 withNames:(id)arg2;	// IMP=0x0010000000028994
+ (id)configureService:(id)arg1 withName:(id)arg2;	// IMP=0x00100000000287a2
- (void).cxx_destruct;	// IMP=0x001000000001ba3b
@property(retain) MTSSystemCommissionerPairingManager *pairingManager; // @synthesize pairingManager=_pairingManager;
@property(nonatomic) _Bool allowsRandomVoiceSelection; // @synthesize allowsRandomVoiceSelection=_allowsRandomVoiceSelection;
@property(copy, nonatomic) NSString *recognitionLanguage; // @synthesize recognitionLanguage=_recognitionLanguage;
@property(nonatomic) _Bool shouldShowVoiceSelectionSetup; // @synthesize shouldShowVoiceSelectionSetup=_shouldShowVoiceSelectionSetup;
@property(nonatomic) _Bool shouldShowSiriRecognitionLanguageSetup; // @synthesize shouldShowSiriRecognitionLanguageSetup=_shouldShowSiriRecognitionLanguageSetup;
@property(retain, nonatomic) NSArray *listOfVoices; // @synthesize listOfVoices=_listOfVoices;
@property(retain, nonatomic) NSArray *availableSiriLanguageValues; // @synthesize availableSiriLanguageValues=_availableSiriLanguageValues;
@property(retain, nonatomic) NSArray *siriEnabledAccessories; // @synthesize siriEnabledAccessories=_siriEnabledAccessories;
@property(nonatomic) _Bool shouldSkipVoiceProfileSetup; // @synthesize shouldSkipVoiceProfileSetup=_shouldSkipVoiceProfileSetup;
@property(retain, nonatomic) HMSiriEndpointOnboardingSelections *onboardingSelections; // @synthesize onboardingSelections=_onboardingSelections;
- (id);	// IMP=0x001000000001b94b
@property(nonatomic) _Bool isExplicitContentAllowed; // @synthesize isExplicitContentAllowed=_isExplicitContentAllowed;
@property(nonatomic) _Bool isShareSiriAnalyticsEnabled; // @synthesize isShareSiriAnalyticsEnabled=_isShareSiriAnalyticsEnabled;
@property(nonatomic) _Bool isPlaybackInfluencesForYouEnabled; // @synthesize isPlaybackInfluencesForYouEnabled=_isPlaybackInfluencesForYouEnabled;
@property(retain, nonatomic) HMAccessory *addedAccessory; // @synthesize addedAccessory=_addedAccessory;
@property(retain, nonatomic) NSError *pairingError; // @synthesize pairingError=_pairingError;
@property(retain, nonatomic) NSString *userGivenAccessoryName; // @synthesize userGivenAccessoryName=_userGivenAccessoryName;
@property(retain, nonatomic) NSString *roomName; // @synthesize roomName=_roomName;
@property(nonatomic) _Bool isReadyToPair; // @synthesize isReadyToPair=_isReadyToPair;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
@property __weak id <HSSetupStateMachineConfigurationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool supportsRichConfiguration;
@property(readonly, nonatomic) HMCameraProfile *cameraProfile;
@property(readonly, copy, nonatomic) HFAccessoryItem *addedAccessoryItem;
@property(readonly, nonatomic) HMAccessoryCategory *category;
@property(readonly, nonatomic) MTSDeviceSetupRequest *matterDeviceSetupRequest;
@property(readonly, nonatomic) HMSetupAccessoryDescription *setupDescription;
- (id)initWithError:(id)arg1;	// IMP=0x001000000001b44e
- (id)initWithAccessory:(id)arg1;	// IMP=0x001000000001b38d
- (id)initWithHome:(id)arg1;	// IMP=0x001000000001b31d
- (id)updateUserGivenAccessoryName:(id)arg1;	// IMP=0x001000000001b18a
- (_Bool)requiresOwnerToPair;	// IMP=0x001000000001ad43
@property(readonly, nonatomic, getter=isSetupInitiatedByOtherMatterEcosystem) _Bool setupInitiatedByOtherMatterEcosystem;
- (id)configureAccessoryWithName:(id)arg1;	// IMP=0x0010000000027bb6
- (id)configureAccessoryName;	// IMP=0x001000000002777c
- (id)configureRoom;	// IMP=0x00100000000271f7
- (id)validateNames:(id)arg1;	// IMP=0x0010000000027112
- (id)validateName:(id)arg1;	// IMP=0x0010000000026c52

@end

