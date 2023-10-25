//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICSharedListeningConnectionReport, IDSAccount, IDSPseudonym, IDSService, MSVTimer, NSDictionary, NSString, NSURL, NSUUID;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ICLiveLinkQRConnectionDataSource : NSObject
{
    IDSService *_service;	// 8 = 0x8
    IDSAccount *_account;	// 16 = 0x10
    NSUUID *_groupSessionIdentifier;	// 24 = 0x18
    NSDictionary *_groupSessionOptions;	// 32 = 0x20
    NSURL *_sharedListeningSessionInviteURL;	// 40 = 0x28
    NSString *_sharedListeningSessionIdentifier;	// 48 = 0x30
    NSString *_sharedSessionToken;	// 56 = 0x38
    ICSharedListeningConnectionReport *_report;	// 64 = 0x40
    CDUnknownBlockType _dataSourceErrorHandler;	// 72 = 0x48
    IDSPseudonym *_pseudonym;	// 80 = 0x50
    MSVTimer *_pseudonymRenewalTimer;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_queue;	// 96 = 0x60
    NSString *_externalIdentifier;	// 104 = 0x68
}

+ (id)dataSourceForExistingSharedListeningSession:(id)arg1 identity:(id)arg2;	// IMP=0x00100000001942be
+ (id)dataSourceForNewSharedListeningSessionWithIdentity:(id)arg1;	// IMP=0x001000000019426f
- (void).cxx_destruct;	// IMP=0x0000000000191351
@property(retain, nonatomic) NSString *externalIdentifier; // @synthesize externalIdentifier=_externalIdentifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) MSVTimer *pseudonymRenewalTimer; // @synthesize pseudonymRenewalTimer=_pseudonymRenewalTimer;
@property(retain, nonatomic) IDSPseudonym *pseudonym; // @synthesize pseudonym=_pseudonym;
@property(copy, nonatomic) CDUnknownBlockType dataSourceErrorHandler; // @synthesize dataSourceErrorHandler=_dataSourceErrorHandler;
@property(nonatomic) __weak ICSharedListeningConnectionReport *report; // @synthesize report=_report;
@property(retain, nonatomic) NSString *sharedSessionToken; // @synthesize sharedSessionToken=_sharedSessionToken;
@property(copy, nonatomic) NSString *sharedListeningSessionIdentifier; // @synthesize sharedListeningSessionIdentifier=_sharedListeningSessionIdentifier;
@property(retain, nonatomic) NSURL *sharedListeningSessionInviteURL; // @synthesize sharedListeningSessionInviteURL=_sharedListeningSessionInviteURL;
@property(retain, nonatomic) NSDictionary *groupSessionOptions; // @synthesize groupSessionOptions=_groupSessionOptions;
@property(retain, nonatomic) NSUUID *groupSessionIdentifier; // @synthesize groupSessionIdentifier=_groupSessionIdentifier;
@property(retain, nonatomic) IDSAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) IDSService *service; // @synthesize service=_service;
@property(readonly, nonatomic) CDUnknownBlockType trustHandler;
@property(readonly, nonatomic) NSString *applicationProtocol;
@property(readonly, nonatomic) NSString *rpcPath;
@property(readonly, nonatomic) NSString *pluginIdentifier;
- (id)sessionURLForBag:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000190b20
- (void)_joinSharedListeningSessionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000019078e
- (void)_revokeUserPseudonymWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000190643
- (void)_renewUserPseudonym;	// IMP=0x0000000000190497
- (void)_beginPseudonymAutoRenewal;	// IMP=0x0000000000190303
- (void)_provisionUserPseudonymWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000018fb03
- (void)populateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000018fa4b
- (void)dealloc;	// IMP=0x000000000018f999
- (id)initWithSharedListeningSessionIdentifier:(id)arg1 identity:(id)arg2;	// IMP=0x000000000018f8a1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
