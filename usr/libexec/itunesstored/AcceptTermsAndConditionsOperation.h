//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSObject, NSString, SSAccount, SSTermsAndConditions, SpringBoardAlertProxy;
@protocol OS_dispatch_semaphore;

@interface AcceptTermsAndConditionsOperation : ISOperation
{
    SSAccount *_account;	// 96 = 0x60
    SpringBoardAlertProxy *_alertProxy;	// 104 = 0x68
    NSObject<OS_dispatch_semaphore> *_alertSemaphore;	// 112 = 0x70
    SSTermsAndConditions *_conditions;	// 120 = 0x78
    _Bool _result;	// 128 = 0x80
    _Bool _userAccepted;	// 129 = 0x81
}

- (void).cxx_destruct;	// IMP=0x00200000000156c0
- (void)_presentTermsAndConditions;	// IMP=0x0010000000014e0a
- (id)_newTermsCheckSrvOperation;	// IMP=0x0010000000014d08
- (id)_newTermsAcceptSrvOperation;	// IMP=0x0010000000014b45
- (void)_dismissTermsAndConditionsWithAcceptance:(_Bool)arg1;	// IMP=0x0010000000014639
- (void)_checkTermsAndConditionsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000014483
- (void)_acceptTermsAndConditionsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000142ce
- (void)alertProxyDidCancel:(id)arg1;	// IMP=0x00100000000142ba
- (void)alertProxy:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x0010000000014254
- (void)run;	// IMP=0x00100000000134db
- (void)setUserAccepted:(_Bool)arg1;	// IMP=0x0010000000013497
@property(readonly, nonatomic, getter=isUserAccepted) _Bool userAccepted;
- (id)initWithAccount:(id)arg1;	// IMP=0x00100000000133e5
- (id)init;	// IMP=0x00100000000133d1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

