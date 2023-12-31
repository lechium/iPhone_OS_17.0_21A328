//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AAUIProxiedTermsRemoteUI, ACAccount, ACAccountStore, AKAnisetteData, AKAppleIDAuthenticationContext, AKAppleIDAuthenticationController, AKAppleIDAuthenticationWatchBuddyContext, AKDevice, COSPrimaryAccountAuthenticationHelper, NRDevice, NSDictionary, NSError, NSString, UIViewController;
@protocol COSAppleIDAuthControllerDelegate, OS_dispatch_source;

@interface COSAppleIDAuthController : NSObject
{
    _Bool _needsCredentialRecovery;	// 8 = 0x8
    _Bool _didComplete;	// 9 = 0x9
    _Bool _hasStartedFallbackFlow;	// 10 = 0xa
    ACAccountStore *_accountStore;	// 16 = 0x10
    ACAccount *_account;	// 24 = 0x18
    NSString *_password;	// 32 = 0x20
    double _timeout;	// 40 = 0x28
    UIViewController *_presentingController;	// 48 = 0x30
    AKDevice *_proxiedDevice;	// 56 = 0x38
    NSString *_signInAccountType;	// 64 = 0x40
    id <COSAppleIDAuthControllerDelegate> _delegate;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_timerSource;	// 80 = 0x50
    ACAccount *_idmsAccount;	// 88 = 0x58
    NRDevice *_watchDevice;	// 96 = 0x60
    AKAnisetteData *_phoneAnisetteData;	// 104 = 0x68
    AKAppleIDAuthenticationController *_authController;	// 112 = 0x70
    NSDictionary *_authenticationResults;	// 120 = 0x78
    AKAppleIDAuthenticationController *_AKAppleIDAuthController;	// 128 = 0x80
    AKAppleIDAuthenticationContext *_authContext;	// 136 = 0x88
    AKAppleIDAuthenticationWatchBuddyContext *_watchBuddyAuthContext;	// 144 = 0x90
    AAUIProxiedTermsRemoteUI *_proxiedTermsRemoteUI;	// 152 = 0x98
    NSDictionary *_acceptedTermsInfo;	// 160 = 0xa0
    CDUnknownBlockType _satelliteSignInCompletion;	// 168 = 0xa8
    long long _satelliteSignInStatus;	// 176 = 0xb0
    NSString *_satelliteSignInErrorDescription;	// 184 = 0xb8
    NSError *_satelliteSignInDetailedError;	// 192 = 0xc0
    COSPrimaryAccountAuthenticationHelper *_primaryAccountAuthenticationHelper;	// 200 = 0xc8
}

+ (void)saveVerifiedRawPassword:(id)arg1 forAccountIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x002000000010e2d0
+ (id)amsSaveOptions;	// IMP=0x001000000010cf5f
+ (id)lookupIDMSAccountWithAccountStore:(id)arg1 matchingAccount:(id)arg2;	// IMP=0x001000000010c86b
+ (_Bool)isTermsUpdateNeededError:(id)arg1;	// IMP=0x001000000010b9cc
+ (_Bool)signInEndResultForValue:(_Bool)arg1 error:(id)arg2;	// IMP=0x001000000010b932
+ (void)saveToPairedDeviceAccount:(id)arg1 fromAccountStore:(id)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000010b5b5
+ (_Bool)shouldAttemptPasswordLessSignInForAccount:(id)arg1 inAccountStore:(id)arg2;	// IMP=0x001000000010b259
+ (id)altDSIDForIDMSAccount:(id)arg1;	// IMP=0x001000000010b1db
+ (id)DSIDForIDMSAccount:(id)arg1;	// IMP=0x001000000010b136
+ (id)usernameForIDMSAccount:(id)arg1;	// IMP=0x001000000010b121
- (void).cxx_destruct;	// IMP=0x0020000000111b2e
@property(retain, nonatomic) COSPrimaryAccountAuthenticationHelper *primaryAccountAuthenticationHelper; // @synthesize primaryAccountAuthenticationHelper=_primaryAccountAuthenticationHelper;
@property(retain, nonatomic) NSError *satelliteSignInDetailedError; // @synthesize satelliteSignInDetailedError=_satelliteSignInDetailedError;
@property(retain, nonatomic) NSString *satelliteSignInErrorDescription; // @synthesize satelliteSignInErrorDescription=_satelliteSignInErrorDescription;
@property(nonatomic) long long satelliteSignInStatus; // @synthesize satelliteSignInStatus=_satelliteSignInStatus;
@property(copy, nonatomic) CDUnknownBlockType satelliteSignInCompletion; // @synthesize satelliteSignInCompletion=_satelliteSignInCompletion;
@property(retain, nonatomic) NSDictionary *acceptedTermsInfo; // @synthesize acceptedTermsInfo=_acceptedTermsInfo;
@property(retain, nonatomic) AAUIProxiedTermsRemoteUI *proxiedTermsRemoteUI; // @synthesize proxiedTermsRemoteUI=_proxiedTermsRemoteUI;
@property(retain, nonatomic) AKAppleIDAuthenticationWatchBuddyContext *watchBuddyAuthContext; // @synthesize watchBuddyAuthContext=_watchBuddyAuthContext;
- (void)setAuthContext:(id)arg1;	// IMP=0x0010000000111a1e
- (id)authContext;	// IMP=0x0010000000111a11
@property(retain, nonatomic) AKAppleIDAuthenticationController *AKAppleIDAuthController; // @synthesize AKAppleIDAuthController=_AKAppleIDAuthController;
@property(retain, nonatomic) NSDictionary *authenticationResults; // @synthesize authenticationResults=_authenticationResults;
@property(retain, nonatomic) AKAppleIDAuthenticationController *authController; // @synthesize authController=_authController;
@property(nonatomic) _Bool hasStartedFallbackFlow; // @synthesize hasStartedFallbackFlow=_hasStartedFallbackFlow;
@property(retain, nonatomic) AKAnisetteData *phoneAnisetteData; // @synthesize phoneAnisetteData=_phoneAnisetteData;
@property(retain, nonatomic) NRDevice *watchDevice; // @synthesize watchDevice=_watchDevice;
@property(retain, nonatomic) ACAccount *idmsAccount; // @synthesize idmsAccount=_idmsAccount;
@property(nonatomic) _Bool didComplete; // @synthesize didComplete=_didComplete;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timerSource; // @synthesize timerSource=_timerSource;
@property(nonatomic) __weak id <COSAppleIDAuthControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *signInAccountType; // @synthesize signInAccountType=_signInAccountType;
@property(retain, nonatomic) AKDevice *proxiedDevice; // @synthesize proxiedDevice=_proxiedDevice;
@property(nonatomic) __weak UIViewController *presentingController; // @synthesize presentingController=_presentingController;
@property(nonatomic) _Bool needsCredentialRecovery; // @synthesize needsCredentialRecovery=_needsCredentialRecovery;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (void)genericTermsRemoteUI:(id)arg1 acceptedTermsInfo:(id)arg2;	// IMP=0x0010000000111751
- (void)genericTermsRemoteUI:(id)arg1 didFinishWithSuccess:(_Bool)arg2;	// IMP=0x001000000011163f
- (void)willPresentModalNavigationController:(id)arg1;	// IMP=0x0010000000111607
- (id)remoteUIStyle;	// IMP=0x00100000001115ee
- (void)contextDidEndPresentingSecondaryUI:(id)arg1;	// IMP=0x0010000000111560
- (void)contextWillBeginPresentingSecondaryUI:(id)arg1;	// IMP=0x0010000000111470
- (void)contextDidDismissLoginAlertController:(id)arg1;	// IMP=0x00100000001113e2
- (void)contextWillDismissLoginAlertController:(id)arg1;	// IMP=0x0010000000111354
- (void)contextDidPresentLoginAlertController:(id)arg1;	// IMP=0x00100000001112c6
- (id)authenticationContext;	// IMP=0x0010000000111147
- (void)signInViewControllerDidCancel:(id)arg1;	// IMP=0x0010000000111141
- (void)signInViewController:(id)arg1 didCompleteWithAuthenticationResults:(id)arg2;	// IMP=0x0010000000111076
- (id)tinkerFamilyMemberFromAuthenticationResultsForInternalUseByUpdatingtinkerSignInID;	// IMP=0x0010000000110dd0
- (void)reauthFamilyCircleByExistingAuthenticationResultsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000011054c
- (void)startAccountActionWithContext:(id)arg1;	// IMP=0x0010000000110370
- (id)baseAppContext;	// IMP=0x0010000000110272
- (void)repairGuardianAccount:(CDUnknownBlockType)arg1;	// IMP=0x001000000010fc17
- (void)presentTermsWithCachedAuthResultsForDSID:(id)arg1;	// IMP=0x001000000010faca
- (void)_resumeSatelliteSignin;	// IMP=0x001000000010f275
- (void)waitForSatelliteSigninWithProgressCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000010f1cd
- (void)startSatelliteSigninWithProgressCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000010f127
- (void)_resetTermsInformation;	// IMP=0x001000000010f0e2
- (void)reportSignInCompletionWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x001000000010f039
- (id)httpHeadersForRemoteAuthUI;	// IMP=0x001000000010ef62
- (id)optionsForPLTAuthWithTokens:(id)arg1;	// IMP=0x001000000010eda3
- (void)saveAccountToPairedDeviceForPLTAuthWithTokens:(id)arg1;	// IMP=0x001000000010e842
- (void)saveAccountToPairedDeviceWithRawPassword:(id)arg1;	// IMP=0x001000000010e59c
- (void)authenticatedWithResults:(id)arg1 error:(id)arg2;	// IMP=0x001000000010de71
- (void)performProxiedAuthentication;	// IMP=0x001000000010d9c4
- (void)savedAccountToPairedDeviceWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x001000000010d607
- (void)saveAccountToPairedDeviceWithOptions:(id)arg1;	// IMP=0x001000000010d1c0
- (void)saveAccountToPairedDevice;	// IMP=0x001000000010d12e
- (id)companionSaveOptions;	// IMP=0x001000000010cfc6
- (_Bool)isCurrentAccountiTunesAccount;	// IMP=0x001000000010cee3
- (void)attemptMagicSignIn;	// IMP=0x001000000010ca81
- (void)signInTimerFired;	// IMP=0x001000000010c6c4
- (void)cancelSignInTimer;	// IMP=0x001000000010c68e
- (void)startSignInTimer;	// IMP=0x001000000010c550
- (void)startRecoveringCredentials;	// IMP=0x001000000010c256
- (void)startSigningInWithPassword:(id)arg1;	// IMP=0x001000000010be8e
- (void)startSigningInWithoutPassword;	// IMP=0x001000000010bd2c
- (void)dealloc;	// IMP=0x001000000010bcee
- (id)initWithAccountStore:(id)arg1 account:(id)arg2 timeout:(double)arg3 device:(id)arg4;	// IMP=0x001000000010bb83

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

