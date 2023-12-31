//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUTDeferredTaskQueue, IDSGetDependentRegistrationsCenter, IDSKeyTransparencyVerifier, IDSPushHandler, IDSValidationQueue, NSDate, NSMutableArray, NSMutableDictionary, NSString;
@protocol IDSRegistrationCenterMessageDelivery;

@interface IDSRegistrationCenter : NSObject
{
    NSMutableArray *_queuedRegistrations;	// 8 = 0x8
    NSMutableArray *_queuedAuthentications;	// 16 = 0x10
    NSMutableArray *_currentAuthentications;	// 24 = 0x18
    NSMutableArray *_currentRegistrations;	// 32 = 0x20
    NSMutableArray *_handlers;	// 40 = 0x28
    _Bool _pendingDequeue;	// 48 = 0x30
    _Bool _pendingDeregistration;	// 49 = 0x31
    NSMutableDictionary *_currentGetHandlesBlocks;	// 56 = 0x38
    NSMutableDictionary *_currentGetHandlesRegistrations;	// 64 = 0x40
    NSMutableArray *_successfulRegistrations;	// 72 = 0x48
    NSDate *_dateSentLastHTTPMessage;	// 80 = 0x50
    NSDate *_dateLastRegistered;	// 88 = 0x58
    NSDate *_accountingHour;	// 96 = 0x60
    unsigned long long _registrations;	// 104 = 0x68
    id <IDSRegistrationCenterMessageDelivery> _httpMessageDelivery;	// 112 = 0x70
    IDSPushHandler *_pushHandler;	// 120 = 0x78
    IDSGetDependentRegistrationsCenter *_gdrCenter;	// 128 = 0x80
    IDSKeyTransparencyVerifier *_keyTransparencyVerifier;	// 136 = 0x88
    IDSValidationQueue *_validationQueue;	// 144 = 0x90
    CUTDeferredTaskQueue *_sendAuthenticateRegistrationTask;	// 152 = 0x98
    CUTDeferredTaskQueue *_sendRegistrationTask;	// 160 = 0xa0
    CUTDeferredTaskQueue *_sendDeregistrationTask;	// 168 = 0xa8
    CUTDeferredTaskQueue *_cleanupAbsintheTask;	// 176 = 0xb0
}

+ (id)sharedInstance;	// IMP=0x0020000000213b44
- (void).cxx_destruct;	// IMP=0x0020000000231450
@property(readonly, nonatomic) CUTDeferredTaskQueue *cleanupAbsintheTask; // @synthesize cleanupAbsintheTask=_cleanupAbsintheTask;
@property(readonly, nonatomic) CUTDeferredTaskQueue *sendDeregistrationTask; // @synthesize sendDeregistrationTask=_sendDeregistrationTask;
@property(readonly, nonatomic) CUTDeferredTaskQueue *sendRegistrationTask; // @synthesize sendRegistrationTask=_sendRegistrationTask;
@property(readonly, nonatomic) CUTDeferredTaskQueue *sendAuthenticateRegistrationTask; // @synthesize sendAuthenticateRegistrationTask=_sendAuthenticateRegistrationTask;
@property(readonly) IDSValidationQueue *validationQueue; // @synthesize validationQueue=_validationQueue;
- (void)sendDeactivationRequestWithSIM:(id)arg1 Info:(id)arg2;	// IMP=0x0010000000230d39
- (void)buildValidationCredentialsIfNeeded;	// IMP=0x0010000000230d33
- (void)sendValidateCredential:(id)arg1 withDeliveryCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000002309d3
- (id)dateLastRegistered;	// IMP=0x00100000002309c5
- (void)_noteRegistration;	// IMP=0x0010000000230819
- (_Bool)_checkOverRegistrations;	// IMP=0x00100000002306f3
- (void)handler:(id)arg1 pushTokenChanged:(id)arg2;	// IMP=0x0010000000230659
- (void)removeListener:(id)arg1;	// IMP=0x001000000023060c
- (void)addListener:(id)arg1;	// IMP=0x001000000023058a
- (id)activeRegistrations;	// IMP=0x00100000002304ed
- (void)cancelActionsForRegistrationInfo:(id)arg1;	// IMP=0x001000000023027d
- (void)cancelRegisterActionsForRegistrationInfo:(id)arg1;	// IMP=0x001000000022fe5c
- (_Bool)sendDeregistration:(id)arg1;	// IMP=0x001000000022fca8
- (_Bool)sendRegistration:(id)arg1;	// IMP=0x001000000022f8d9
- (void)__reallySendRegistration;	// IMP=0x001000000022f852
- (_Bool)authenticateRegistration:(id)arg1;	// IMP=0x001000000022f250
- (void)__reallySendAuthenticateRegistration;	// IMP=0x001000000022f19e
- (_Bool)queryValidatedEmailsForRegistration:(id)arg1 allowPasswordPrompt:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000022f004
- (_Bool)_sendKTOptInStatusUpdateForRegistration:(id)arg1 withOptInStatus:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000022e9b4
- (_Bool)_sendKTOptInStatusForRegistration:(id)arg1 withOptInOutRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000022ddc6
- (_Bool)updateKTOptInStatusForRegistration:(id)arg1 withOptInOutRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000022dbe2
- (_Bool)updateKTOptInStatusForRegistration:(id)arg1 withOptInStatus:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000022dac2
- (_Bool)_sendPseudonymMessageOperation:(unsigned long long)arg1 forURI:(id)arg2 pseudonymURI:(id)arg3 properties:(id)arg4 requestProperties:(id)arg5 forRegistration:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;	// IMP=0x001000000022cf24
- (double)_updatePseudonymExpiryEpoch:(double)arg1;	// IMP=0x001000000022cd16
- (_Bool)revokePseudonym:(id)arg1 forRegistration:(id)arg2 requestProperties:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x001000000022cb66
- (_Bool)renewPseudonym:(id)arg1 forRegistration:(id)arg2 forUpdatedExpiryEpoch:(double)arg3 requestProperties:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x001000000022c981
- (_Bool)provisionPseudonymFor:(id)arg1 withURI:(id)arg2 properties:(id)arg3 requestProperties:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x001000000022c5d2
- (_Bool)_queryValidatedEmailsForRegistration:(id)arg1 allowPasswordPrompt:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000022b9bd
- (void)_processGetHandlesMessage:(id)arg1 registrations:(id)arg2 deliveredWithError:(id)arg3 resultCode:(long long)arg4 resultDictionary:(id)arg5 allowPasswordPrompt:(_Bool)arg6;	// IMP=0x001000000022ad35
- (_Bool)isRegistering:(id)arg1;	// IMP=0x001000000022accf
- (id)_geoRegion;	// IMP=0x001000000022acc2
- (void)reportiMessageSpamCheckUnknown:(id)arg1 count:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000022a9b4
- (void)reportAction:(long long)arg1 ofTempURI:(id)arg2 fromURI:(id)arg3 registration:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;	// IMP=0x001000000022a60c
- (void)reportiMessageUnknownSender:(id)arg1 messageID:(id)arg2 isBlackholed:(_Bool)arg3 isJunked:(_Bool)arg4 messageServerTimestamp:(id)arg5 selfURI:(id)arg6 registration:(id)arg7;	// IMP=0x001000000022a2b4
- (void)reportSpamWithMessages:(id)arg1 selfURI:(id)arg2 registration:(id)arg3;	// IMP=0x0010000000229fdd
- (void)reportSpamMessage:(id)arg1 selfURI:(id)arg2 registration:(id)arg3;	// IMP=0x0010000000229d06
- (void)_sendIDSAuthRequest:(id)arg1 forInfo:(id)arg2;	// IMP=0x0010000000229aff
- (void)_sendAuthenticateRegistration:(id)arg1;	// IMP=0x0010000000229712
- (id)_authMessageForRegistration:(id)arg1;	// IMP=0x001000000022937d
- (id)_provTemporaryPhoneMessageForRegistration:(id)arg1;	// IMP=0x001000000022830f
- (id)_authUsersMessageForRegistration:(id)arg1 realm:(id)arg2;	// IMP=0x0010000000226ca5
- (id)_authDSMessageForRegistration:(id)arg1 realm:(id)arg2;	// IMP=0x001000000022617c
- (long long)_authSubsystemForInfo:(id)arg1;	// IMP=0x0010000000226171
- (CDUnknownBlockType)_authMessageCompletionWithRegistration:(id)arg1 withOverallSuccessBlock:(CDUnknownBlockType)arg2 overallFailure:(CDUnknownBlockType)arg3;	// IMP=0x0010000000225b0f
- (void)sendHardDeregisterCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000022517d
- (void)_sendDeregistration:(id)arg1;	// IMP=0x0010000000225014
- (void)__reallySendDeregistration;	// IMP=0x0010000000224f86
- (void)_sendRegistrationAsDeregister:(_Bool)arg1;	// IMP=0x0010000000220c46
- (id)privateDeviceDataForKVSSuccess:(_Bool)arg1;	// IMP=0x0010000000220339
- (id)_trustedDeviceForRegistrations:(id)arg1 transparencyLoggableDatasByServiceType:(id)arg2 transparencyDeviceSignaturesByServiceType:(id)arg3;	// IMP=0x001000000021fc78
- (id)_URIsToRegisterForRegistration:(id)arg1;	// IMP=0x001000000021f9f5
- (void)_processRegistrationMessage:(id)arg1 sentRegistrations:(id)arg2 descriptionString:(id)arg3 actionID:(id)arg4 actionString:(id)arg5 isDeregister:(_Bool)arg6 deliveredWithError:(id)arg7 resultCode:(long long)arg8 resultDictionary:(id)arg9;	// IMP=0x001000000021a346
- (id)_keyTransparencyDeviceSignatureFromRegistrationMessage:(id)arg1 service:(id)arg2 URI:(id)arg3;	// IMP=0x0010000000219e9c
- (id)_keyTransparencyLoggableDataFromRegistrationMessage:(id)arg1 service:(id)arg2 URI:(id)arg3;	// IMP=0x0010000000219a1b
- (id)_keyTransparencyAccountKeyFromRegistrationMessage:(id)arg1 service:(id)arg2 URI:(id)arg3;	// IMP=0x001000000021959a
- (long long)_countOfMessagesQueuedOfType:(Class)arg1 matchingCriteria:(CDUnknownBlockType)arg2;	// IMP=0x0010000000219407
- (_Bool)_hasRegistration:(id)arg1 inQueue:(id)arg2;	// IMP=0x0010000000218f23
- (void)_notifyRegistrationIdentitiesUpdated;	// IMP=0x0010000000218ccd
- (void)_notifyEmailQuerySuccess:(id)arg1 emailInfo:(id)arg2;	// IMP=0x0010000000218910
- (void)_notifyEmailQueryFailure:(id)arg1 responseCode:(long long)arg2 registrationError:(long long)arg3 error:(id)arg4 info:(id)arg5;	// IMP=0x001000000021818c
- (void)_notifyAllSuccessfulRegistrations:(id)arg1;	// IMP=0x0010000000217efd
- (void)_notifyRegistrationSuccess:(id)arg1;	// IMP=0x0010000000217838
- (void)_notifyRegistrationFailure:(id)arg1 responseCode:(long long)arg2 registrationError:(long long)arg3 error:(id)arg4 info:(id)arg5;	// IMP=0x00100000002166e7
- (void)_notifyIDSAuthenticationSuccess:(id)arg1;	// IMP=0x0010000000216055
- (void)_notifyProvisionFailure:(id)arg1 responseCode:(long long)arg2 registrationError:(long long)arg3 error:(id)arg4 fatal:(_Bool)arg5 info:(id)arg6;	// IMP=0x00100000002155b7
- (void)_dequeuePendingRequestsIfNecessary;	// IMP=0x0010000000214e7e
- (_Bool)_hasCurrentAuthenticationsOrRegistrations;	// IMP=0x0010000000214e3e
- (_Bool)_hasOngoingAuthentications;	// IMP=0x0010000000214dfe
- (void)__sendMessage:(id)arg1;	// IMP=0x0010000000214d07
- (void)logState;	// IMP=0x0010000000214bb1
- (void)__dumpState;	// IMP=0x00100000002145e9
- (void)engramKeyStoreDidUpdateIdentities:(id)arg1;	// IMP=0x0010000000214376
- (id)keyTransparencyVerifier;	// IMP=0x0010000000214365
- (id)gdrCenter;	// IMP=0x0010000000214354
- (void)dealloc;	// IMP=0x001000000021428e
- (id)init;	// IMP=0x00100000002141b6
- (id)initWithMessageDelivery:(id)arg1 pushHandler:(id)arg2 keyTransparencyVerifier:(id)arg3;	// IMP=0x0010000000213b99

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

