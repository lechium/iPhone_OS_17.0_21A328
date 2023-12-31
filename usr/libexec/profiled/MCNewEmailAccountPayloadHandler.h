//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DeliveryAccount, MISSING_TYPE, MailAccount, NSConditionLock, NSDictionary, NSError, NSString, NSThread;

@interface MCNewEmailAccountPayloadHandler
{
    NSConditionLock *_validationLock;	// 32 = 0x20
    NSThread *_validationThread;	// 40 = 0x28
    NSDictionary *_setAsideAccountInfo;	// 48 = 0x30
    _Bool _wasInstalledByMDM;	// 56 = 0x38
    NSString *_personaID;	// 64 = 0x40
    NSString *_rmAccountIdentifier;	// 72 = 0x48
    MailAccount *_incomingAccount;	// 80 = 0x50
    _Bool _incomingAccountUsesSSL;	// 88 = 0x58
    DeliveryAccount *_outgoingAccount;	// 96 = 0x60
    MISSING_TYPE *_outgoingAccountUsesSSL;	// 104 = 0x68
    _Bool _validationDone;	// 105 = 0x69
    _Bool _validationResult;	// 106 = 0x6a
    NSError *_validationError;	// 112 = 0x70
    NSString *_incomingACAccountIdentifier;	// 120 = 0x78
    NSString *_outgoingACAccountIdentifier;	// 128 = 0x80
}

+ (id)unhashedAccountIdentifierWithType:(id)arg1 hostname:(id)arg2 username:(id)arg3;	// IMP=0x00400000000274c5
+ (id)MCACAccountIdentifierWithOutgoingAccountInfo:(id)arg1;	// IMP=0x00100000000273e8
+ (id)MCACAccountIdentifierWithIncomingAccountInfo:(id)arg1;	// IMP=0x00100000000272e8
- (void).cxx_destruct;	// IMP=0x002000000002c1fd
@property(retain, nonatomic) NSString *outgoingACAccountIdentifier; // @synthesize outgoingACAccountIdentifier=_outgoingACAccountIdentifier;
@property(retain, nonatomic) NSString *incomingACAccountIdentifier; // @synthesize incomingACAccountIdentifier=_incomingACAccountIdentifier;
- (void)unsetAside;	// IMP=0x001000000002c0ca
- (void)setAside;	// IMP=0x001000000002bc14
- (void)remove;	// IMP=0x001000000002bb69
- (void)_remove;	// IMP=0x001000000002b960
- (id)_removeAccountWithPersistentResourceID:(id)arg1 fromArray:(id)arg2 outArray:(id *)arg3;	// IMP=0x001000000002b6a3
- (_Bool)isInstalled;	// IMP=0x001000000002b49d
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x001000000002affe
- (id)_installWithIncomingAccountInfo:(id)arg1 outgoingAccountInfo:(id)arg2 isInstalledByMDM:(_Bool)arg3 personaID:(id)arg4 rmAccountIdentifier:(id)arg5;	// IMP=0x001000000002a284
- (_Bool)preflightUserInputResponses:(id)arg1 outError:(id *)arg2;	// IMP=0x0010000000029bee
- (void)accountValidator:(id)arg1 finishedValidationOfAccount:(id)arg2 usedSSL:(_Bool)arg3;	// IMP=0x0010000000029937
- (id)_errorFromValidationError:(id)arg1;	// IMP=0x0010000000029747
- (void)_validateIncomingAccountOnThread;	// IMP=0x00100000000295e6
- (id)_outgoingAccountWithAccountInfo:(id)arg1;	// IMP=0x00100000000290d7
- (id)_outgoingAccountInfoDictionaryWithUserInput:(id)arg1;	// IMP=0x0010000000028b4c
- (id)_incomingAccountWithAccountInfo:(id)arg1;	// IMP=0x001000000002845f
- (id)_incomingAccountInfoDictionaryWithUserInput:(id)arg1 isPreflight:(_Bool)arg2 outError:(id *)arg3;	// IMP=0x0010000000027573
- (id)_persistentIDForCertificateUUID:(id)arg1 notFoundLocErrorString:(id)arg2 badLocErrorString:(id)arg3 outError:(id *)arg4;	// IMP=0x0010000000026ff5
- (id)_authSchemeForAuthenticationMethod:(id)arg1;	// IMP=0x0010000000026f4a
- (id)userInputFields;	// IMP=0x001000000002669e
- (id)initWithPayload:(id)arg1 profileHandler:(id)arg2;	// IMP=0x001000000002662f

@end

