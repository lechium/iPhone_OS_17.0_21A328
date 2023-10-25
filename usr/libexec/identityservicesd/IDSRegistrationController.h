//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSKeychainWrapper, IDSRateLimiter, IDSUserStore, NSArray, NSMutableArray, NSMutableSet, NSString;

@interface IDSRegistrationController : NSObject
{
    NSString *_deviceName;	// 8 = 0x8
    NSMutableArray *_handlers;	// 16 = 0x10
    NSMutableArray *_activeRegistrations;	// 24 = 0x18
    NSMutableArray *_trackedRegistrations;	// 32 = 0x20
    NSMutableSet *_deferredRegisters;	// 40 = 0x28
    int _screenSharingToken;	// 48 = 0x30
    int _iMessageToken;	// 52 = 0x34
    int _faceTimeToken;	// 56 = 0x38
    int _callingToken;	// 60 = 0x3c
    _Bool _displayingAddNumberPrompt;	// 64 = 0x40
    IDSKeychainWrapper *_keychainWrapper;	// 72 = 0x48
    IDSUserStore *_userStore;	// 80 = 0x50
    IDSRateLimiter *_simDeactivationRequestRateLimiter;	// 88 = 0x58
}

+ (_Bool)systemSupportsPhoneNumberRegistration;	// IMP=0x0020000000058b1f
+ (_Bool)systemSupportsRegistrationInfo:(id)arg1;	// IMP=0x0010000000058a13
+ (_Bool)systemSupportsServiceType:(id)arg1 registrationType:(int)arg2;	// IMP=0x00100000000584fc
+ (_Bool)systemSupportsServiceType:(id)arg1 accountType:(int)arg2 isTemporary:(_Bool)arg3;	// IMP=0x0010000000058478
+ (id)sharedInstance;	// IMP=0x0010000000057c88
+ (id)registeredPhoneNumbers;	// IMP=0x0010000000057a64
+ (_Bool)validSIMStateForRegistration;	// IMP=0x001000000005796b
+ (_Bool)_isPhoneNumberAuthenticationDuringBuddyAllowed;	// IMP=0x00100000000578d2
+ (_Bool)canCompleteRegistration;	// IMP=0x0010000000057818
+ (_Bool)canStartRegistrationForAccountType:(int)arg1;	// IMP=0x00100000000575f3
+ (_Bool)isBuddyShowing;	// IMP=0x001000000005758e
+ (void)initialize;	// IMP=0x001000000005754e
- (void).cxx_destruct;	// IMP=0x00200000000620cb
@property(retain, nonatomic) IDSRateLimiter *simDeactivationRequestRateLimiter; // @synthesize simDeactivationRequestRateLimiter=_simDeactivationRequestRateLimiter;
@property(nonatomic) _Bool displayingAddNumberPrompt; // @synthesize displayingAddNumberPrompt=_displayingAddNumberPrompt;
@property(retain, nonatomic) IDSUserStore *userStore; // @synthesize userStore=_userStore;
@property(retain, nonatomic) IDSKeychainWrapper *keychainWrapper; // @synthesize keychainWrapper=_keychainWrapper;
@property(readonly, nonatomic) NSArray *activeRegistrations; // @synthesize activeRegistrations=_activeRegistrations;
@property(readonly, nonatomic) NSArray *trackedRegistrations; // @synthesize trackedRegistrations=_trackedRegistrations;
- (void)noteManateeAvailabilityTime;	// IMP=0x001000000006201a
- (void)noteiCloudSignInTime;	// IMP=0x0010000000061fd6
- (void)SIM:(id)arg1 didDeactivateWithInfo:(id)arg2;	// IMP=0x0010000000061cfb
- (double)simDeactivationInfoRateLimitInterval;	// IMP=0x0010000000061c4e
- (long long)simDeactivationInfoRateLimitCount;	// IMP=0x0010000000061bb4
- (void)_alertForHomeNumberIfNeededForSIMIdentifier:(id)arg1 withPhoneNumber:(id)arg2;	// IMP=0x001000000006159e
- (void)_notifyHomeNumberSuccessForUser:(id)arg1;	// IMP=0x00100000000614f7
- (id)_phoneUserWithCredentials;	// IMP=0x0010000000061338
- (id)_provisionedTemporaryUser;	// IMP=0x001000000006119a
- (_Bool)_pnrOngoing;	// IMP=0x001000000006100c
- (void)_postHomeNumberNotificationBeforeAlertForIdentifier:(id)arg1 forcefully:(_Bool)arg2;	// IMP=0x0010000000060d61
- (void)systemDidLeaveFirstDataProtectionLock;	// IMP=0x0010000000060ae7
- (void)_systemConfigurationPrefsChanged;	// IMP=0x0010000000060605
@property(readonly, nonatomic) NSArray *activeRegistrationsToRegister;
- (id)activeRegistrationsOfType:(int)arg1;	// IMP=0x0010000000060466
- (id)activeRegistrationsMatchingUserID:(id)arg1;	// IMP=0x00100000000602e0
- (void)stopTrackingActiveRegistration:(id)arg1;	// IMP=0x00100000000601c8
- (void)startTrackingActiveRegistration:(id)arg1;	// IMP=0x001000000006003e
- (void)stopTrackingRegistration:(id)arg1;	// IMP=0x001000000005fee7
- (void)startTrackingRegistration:(id)arg1;	// IMP=0x001000000005fd0b
- (void)_updateNotifyState;	// IMP=0x001000000005f81f
- (void)removeListener:(id)arg1;	// IMP=0x001000000005f7d2
- (void)addListener:(id)arg1;	// IMP=0x001000000005f750
- (void)center:(id)arg1 succeededLinkHandlesConfirmation:(id)arg2 emailAddress:(id)arg3;	// IMP=0x001000000005f600
- (void)center:(id)arg1 failedAuthentication:(id)arg2 error:(long long)arg3 info:(id)arg4;	// IMP=0x001000000005f292
- (void)center:(id)arg1 succeededRegionValidation:(id)arg2 regionID:(id)arg3 phoneNumber:(id)arg4 extraContext:(id)arg5 verified:(_Bool)arg6;	// IMP=0x001000000005f0e3
- (void)center:(id)arg1 succeededAuthentication:(id)arg2;	// IMP=0x001000000005ef9e
- (void)center:(id)arg1 succeededInitialRegionQuery:(id)arg2;	// IMP=0x001000000005ee04
- (_Bool)_sendIDSAuthenticationForRegistration:(id)arg1;	// IMP=0x001000000005ec07
- (void)_ensureProfileQueriesAreReadyForRegistratration:(id)arg1;	// IMP=0x001000000005e8df
- (void)center:(id)arg1 failedCurrentEmailsRequest:(id)arg2 error:(long long)arg3 info:(id)arg4;	// IMP=0x001000000005e832
- (void)center:(id)arg1 succeededCurrentEmailsRequest:(id)arg2 emailInfo:(id)arg3;	// IMP=0x001000000005e622
- (_Bool)_sendIDSAuthenticationOrRegistrationIfNeeded:(id)arg1;	// IMP=0x001000000005e218
- (void)center:(id)arg1 failedIDSAuthentication:(id)arg2 error:(long long)arg3 info:(id)arg4;	// IMP=0x001000000005d752
- (void)center:(id)arg1 succeededIDSAuthentication:(id)arg2;	// IMP=0x001000000005d512
- (void)centerNeedsNewIdentification:(id)arg1;	// IMP=0x001000000005d48d
- (void)center:(id)arg1 failedIdentification:(id)arg2 error:(long long)arg3;	// IMP=0x001000000005d339
- (void)center:(id)arg1 succeededIdentification:(id)arg2 phoneNumber:(id)arg3 token:(id)arg4;	// IMP=0x001000000005d142
- (void)center:(id)arg1 allSucceededRegistrations:(id)arg2;	// IMP=0x001000000005d09e
- (void)center:(id)arg1 failedRegistration:(id)arg2 error:(long long)arg3 info:(id)arg4;	// IMP=0x001000000005cfa2
- (void)center:(id)arg1 succeededRegistration:(id)arg2;	// IMP=0x001000000005ca6e
- (void)_captureDiagnosticsForFailedRegistration:(id)arg1 registrationError:(long long)arg2;	// IMP=0x001000000005c7a5
- (_Bool)_shouldSubmitRegistrationCompletedMetricForRegistration:(id)arg1;	// IMP=0x001000000005c757
- (void)_submitRegistrationCompletedMetricWithRegistration:(id)arg1 success:(_Bool)arg2 registrationError:(long long)arg3;	// IMP=0x001000000005c591
- (void)_notifyDeregistrationStarting:(id)arg1;	// IMP=0x001000000005c383
- (void)_notifyAllRegistrationSuccess:(id)arg1;	// IMP=0x001000000005bfa4
- (void)_notifyRegistrationSuccess:(id)arg1;	// IMP=0x001000000005bc0d
- (void)_notifyRegistrationFailure:(id)arg1 error:(long long)arg2 info:(id)arg3;	// IMP=0x001000000005b7cb
- (void)_notifyRegistrationStarting:(id)arg1;	// IMP=0x001000000005b53d
- (void)_notifyRegistrationUpdated:(id)arg1;	// IMP=0x001000000005b2af
- (void)_notifyNeedsNewRegistration;	// IMP=0x001000000005b0c1
- (_Bool)_performCorrectServerRequestForTemporaryPhoneRegistration:(id)arg1 sentAuthentication:(_Bool *)arg2 sentIDSAction:(_Bool *)arg3;	// IMP=0x001000000005ab80
- (void)reportSpamMessage:(id)arg1 toURI:(id)arg2 registration:(id)arg3;	// IMP=0x001000000005aadf
- (void)reportiMessageUnknownSender:(id)arg1 messageID:(id)arg2 isBlackholed:(_Bool)arg3 isJunked:(_Bool)arg4 messageServerTimestamp:(id)arg5 toURI:(id)arg6 registration:(id)arg7;	// IMP=0x001000000005a9d9
- (void)reportSpamWithMessages:(id)arg1 toURI:(id)arg2 registration:(id)arg3;	// IMP=0x001000000005a938
- (void)cancelActionsForRegistrationInfo:(id)arg1;	// IMP=0x001000000005a850
- (_Bool)unregisterInfo:(id)arg1;	// IMP=0x001000000005a67b
- (_Bool)registerInfo:(id)arg1 requireSilentAuth:(_Bool)arg2;	// IMP=0x0010000000058d12
- (_Bool)registerInfo:(id)arg1;	// IMP=0x0010000000058cfe
- (_Bool)systemSupportsRegistrationInfo:(id)arg1;	// IMP=0x0010000000058cbb
- (_Bool)systemSupportsServiceType:(id)arg1 registrationType:(int)arg2;	// IMP=0x0010000000058c6b
- (_Bool)systemSupportsServiceType:(id)arg1 accountType:(int)arg2 isTemporary:(_Bool)arg3;	// IMP=0x0010000000058c14
- (_Bool)systemSupportsPhoneNumberRegistration;	// IMP=0x0010000000058bfa
- (_Bool)registrationSupportedForRegistration:(id)arg1;	// IMP=0x00100000000582c7
- (void)dealloc;	// IMP=0x00100000000581ab
- (id)initWithUserStore:(id)arg1;	// IMP=0x0010000000057d83
- (id)init;	// IMP=0x0010000000057cdd

// Remaining properties
// Error: Property attributes should begin with the type ('T') attribute, property name: debugDescription
// Property attributes: (null)

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
