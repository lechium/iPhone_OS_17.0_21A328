//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class AMSPurchaseShim, DeviceScorer, ISURLRequestPerformance, NSData, NSDictionary, NSNumber, NSString, PurchaseResponseInfo, SSAuthenticationContext, SSBiometricAuthenticationContext, SSURLConnectionResponse, SSURLRequestProperties, SSVFairPlaySubscriptionController;
@protocol PurchaseOperationDelegate;

@interface PurchaseOperation : ISOperation
{
    NSNumber *_accountID;	// 96 = 0x60
    NSString *_affiliateIdentifier;	// 104 = 0x68
    _Bool _allowsBootstrapCellularData;	// 112 = 0x70
    SSAuthenticationContext *_authenticationContext;	// 120 = 0x78
    long long _bagType;	// 128 = 0x80
    SSBiometricAuthenticationContext *_biometricAuthenticationContext;	// 136 = 0x88
    NSString *_buyParameters;	// 144 = 0x90
    NSData *_clientAuditTokenData;	// 152 = 0x98
    NSString *_clientIdentifier;	// 160 = 0xa0
    NSString *_clientIdentifierHeader;	// 168 = 0xa8
    DeviceScorer *_deviceScorer;	// 176 = 0xb0
    _Bool _didAuthenticate;	// 184 = 0xb8
    _Bool _displayedErrorDialog;	// 185 = 0xb9
    _Bool _displaysOnLockScreen;	// 186 = 0xba
    NSString *_downloadKind;	// 192 = 0xc0
    SSVFairPlaySubscriptionController *_fairPlaySubscriptionController;	// 200 = 0xc8
    _Bool _ignoresForcedPasswordRestriction;	// 208 = 0xd0
    _Bool _isBackgroundPurchase;	// 209 = 0xd1
    _Bool _isPlaybackRequest;	// 210 = 0xd2
    NSString *_mToken;	// 216 = 0xd8
    NSNumber *_originalProductOwnerAccountDSID;	// 224 = 0xe0
    _Bool _preauthenticated;	// 232 = 0xe8
    NSDictionary *_rawOutput;	// 240 = 0xf0
    ISURLRequestPerformance *_requestPerformanceMetrics;	// 248 = 0xf8
    SSURLRequestProperties *_requestProperties;	// 256 = 0x100
    _Bool _requiresAuthentication;	// 264 = 0x108
    _Bool _requiresSerialNumber;	// 265 = 0x109
    PurchaseResponseInfo *_responseInfo;	// 272 = 0x110
    _Bool _shouldCancelBiometricTokenUpdate;	// 280 = 0x118
    _Bool _shouldSendKeyBagSyncData;	// 281 = 0x119
    unsigned long long _silentAuthCount;	// 288 = 0x120
    _Bool _skipsConfirmationDialogs;	// 296 = 0x128
    _Bool _suppressDialogs;	// 297 = 0x129
    NSString *_urlBagKey;	// 304 = 0x130
    SSURLConnectionResponse *_urlResponse;	// 312 = 0x138
    _Bool _moveToiOS;	// 320 = 0x140
    _Bool _useRemoteAuthentication;	// 321 = 0x141
    _Bool _microPayment;	// 322 = 0x142
    _Bool _didConsumeScore;	// 323 = 0x143
    NSString *_deviceScore;	// 328 = 0x148
    NSString *_originatingStorefront;	// 336 = 0x150
    NSString *_storeCorrelationID;	// 344 = 0x158
    NSString *_logKey;	// 352 = 0x160
    CDUnknownBlockType _remoteAuthenticationHandler;	// 360 = 0x168
    AMSPurchaseShim *_shim;	// 368 = 0x170
}

+ (double)_randomDouble;	// IMP=0x002000000002656d
+ (void)reportAnonymousPings:(id)arg1;	// IMP=0x0010000000017ca2
- (void).cxx_destruct;	// IMP=0x0020000000027164
@property _Bool didConsumeScore; // @synthesize didConsumeScore=_didConsumeScore;
@property _Bool microPayment; // @synthesize microPayment=_microPayment;
@property(readonly) AMSPurchaseShim *shim; // @synthesize shim=_shim;
@property(copy) CDUnknownBlockType remoteAuthenticationHandler; // @synthesize remoteAuthenticationHandler=_remoteAuthenticationHandler;
@property(copy) NSString *logKey; // @synthesize logKey=_logKey;
@property(copy, nonatomic) NSString *storeCorrelationID; // @synthesize storeCorrelationID=_storeCorrelationID;
@property _Bool skipsConfirmationDialogs; // @synthesize skipsConfirmationDialogs=_skipsConfirmationDialogs;
@property _Bool shouldSendKeyBagSyncData; // @synthesize shouldSendKeyBagSyncData=_shouldSendKeyBagSyncData;
@property _Bool requiresSerialNumber; // @synthesize requiresSerialNumber=_requiresSerialNumber;
@property _Bool requiresAuthentication; // @synthesize requiresAuthentication=_requiresAuthentication;
@property(retain) NSDictionary *rawOutput; // @synthesize rawOutput=_rawOutput;
@property(getter=isPreauthenticated) _Bool preauthenticated; // @synthesize preauthenticated=_preauthenticated;
@property(copy) NSString *originatingStorefront; // @synthesize originatingStorefront=_originatingStorefront;
@property _Bool displayedErrorDialog; // @synthesize displayedErrorDialog=_displayedErrorDialog;
@property(retain) NSData *clientAuditTokenData; // @synthesize clientAuditTokenData=_clientAuditTokenData;
@property(retain) NSString *buyParameters; // @synthesize buyParameters=_buyParameters;
@property long long bagType; // @synthesize bagType=_bagType;
@property _Bool allowsBootstrapCellularData; // @synthesize allowsBootstrapCellularData=_allowsBootstrapCellularData;
- (id)_URLBagContext;	// IMP=0x0010000000026e22
- (_Bool)_shouldUseClientAuthentication;	// IMP=0x0010000000026940
- (_Bool)_shouldSendSBSyncData;	// IMP=0x001000000002688a
- (_Bool)_shouldSendKeyBagSyncData;	// IMP=0x0010000000026695
- (void)_setMoveToiOS;	// IMP=0x00100000000265a7
- (_Bool)_shouldDisableReversePush;	// IMP=0x00100000000261a6
- (void)_setChangedBuyParameters:(id)arg1 fromDataProvider:(id)arg2;	// IMP=0x001000000002603c
- (void)_scoreDeviceRetryFailedV2Score;	// IMP=0x0010000000025b49
- (void)_scoreDevice;	// IMP=0x0010000000025287
- (void)_runPurchaseRequest;	// IMP=0x0010000000023a83
- (void)_runDialogOperationForDialog:(id)arg1;	// IMP=0x001000000002186e
- (id)_recordEngagementEventWithResult:(id)arg1 error:(id)arg2;	// IMP=0x0010000000020c6d
- (long long)_purchaseType;	// IMP=0x0010000000020b9e
- (id)_priceFromBuyParams;	// IMP=0x0010000000020a98
- (void)_performAutoEnrollmentCheck;	// IMP=0x0010000000020213
- (void)_performApplePayClassicCheck;	// IMP=0x001000000001f54e
- (void)_performMachineDataActionForURLResponse:(id)arg1;	// IMP=0x001000000001f0a1
- (void)_performDelayedGotoForOperation:(id)arg1;	// IMP=0x001000000001ef19
- (id)_newRequestParameters;	// IMP=0x001000000001e6d6
- (id)_newPurchaseRequestOperation;	// IMP=0x001000000001cc9e
- (void)_handleFailureForOperation:(id)arg1;	// IMP=0x001000000001bca6
- (id)_fairPlaySubscriptionController;	// IMP=0x001000000001bc4a
- (id);	// IMP=0x001000000001bbb7
- (id)_countryCode;	// IMP=0x001000000001b7b0
- (void)_continueTouchIDSessionWithDialog:(id)arg1;	// IMP=0x001000000001b585
- (_Bool)_clientIsViewService;	// IMP=0x001000000001b40a
- (id)_buyParamProductType;	// IMP=0x001000000001b190
- (void)_addFairPlayToRequestProperties:(id)arg1 withAccountIdentifier:(unsigned long long)arg2;	// IMP=0x001000000001b18a
- (id)_accountWithUniqueIdentifier:(id)arg1;	// IMP=0x001000000001b066
- (id)_account;	// IMP=0x001000000001af2e
- (void)sender:(id)arg1 willSendChallenge:(id)arg2 andSignature:(id)arg3 andPaymentTokenData:(id)arg4 andFpanID:(id)arg5 isExtendedAction:(_Bool)arg6 isPayment:(_Bool)arg7 additionalHeaders:(id)arg8;	// IMP=0x001000000001ad13
- (void)sender:(id)arg1 shouldContinueTouchIDSession:(_Bool)arg2;	// IMP=0x001000000001acf4
- (void)sender:(id)arg1 didFallbackToPassword:(_Bool)arg2;	// IMP=0x001000000001acd5
- (void)operation:(id)arg1 willSendRequest:(id)arg2;	// IMP=0x001000000001ac17
- (void)operation:(id)arg1 shouldAuthenticateWithContext:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001ab17
- (void)operation:(id)arg1 didAuthenticateWithDSID:(id)arg2;	// IMP=0x001000000001a7a8
- (id)uniqueKey;	// IMP=0x001000000001a79b
- (void)run;	// IMP=0x0010000000018a0c
- (id)authenticatedAccountDSID;	// IMP=0x001000000001899d
@property(readonly) SSURLConnectionResponse *URLResponse;
@property _Bool useRemoteAuthentication; // @synthesize useRemoteAuthentication=_useRemoteAuthentication;
@property(copy) NSString *urlBagKey;
@property(readonly) NSDictionary *tidHeaders;
@property(copy) NSNumber *originalProductOwnerAccountDSID;
@property(copy) NSString *clientIdentifierHeader;
@property(copy) NSString *clientIdentifier;
@property(getter=isPlaybackRequest) _Bool playbackRequest;
@property(getter=isBackgroundPurchase) _Bool backgroundPurchase;
@property(copy) SSAuthenticationContext *authenticationContext;
@property(copy) NSString *affiliateIdentifier;
@property(readonly) ISURLRequestPerformance *requestPerformanceMetrics;
@property(readonly, getter=isMoveToiOS) _Bool moveToiOS; // @synthesize moveToiOS=_moveToiOS;
@property(readonly, copy) NSString *deviceScore; // @synthesize deviceScore=_deviceScore;
- (id)initWithPurchase:(id)arg1;	// IMP=0x0010000000017797
- (id)init;	// IMP=0x0010000000017783

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property __weak id <PurchaseOperationDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property(readonly) Class superclass;

@end

