//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SBKStoreClampsController : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSDictionary *_transactionClamps;	// 16 = 0x10
    double _accountIdentifierCheckTimestamp;	// 24 = 0x18
    double _authenticationNeededTimestamp;	// 32 = 0x20
    double _userAcceptedSyncTimestamp;	// 40 = 0x28
    double _networkingBlockedUntil;	// 48 = 0x30
    double _backOffUntil;	// 56 = 0x38
    double _userCancelledSignInBackOffUntil;	// 64 = 0x40
    double _nextUserCancelBackOffInterval;	// 72 = 0x48
    NSData *_pendingUserDefaultArchivedData;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000005986
+ (id)sharedClampsController;	// IMP=0x0010000000005956
- (void).cxx_destruct;	// IMP=0x00000000000051c4
@property(retain, nonatomic) NSData *pendingUserDefaultArchivedData; // @synthesize pendingUserDefaultArchivedData=_pendingUserDefaultArchivedData;
@property(nonatomic) double nextUserCancelBackOffInterval; // @synthesize nextUserCancelBackOffInterval=_nextUserCancelBackOffInterval;
@property(nonatomic) double userCancelledSignInBackOffUntil; // @synthesize userCancelledSignInBackOffUntil=_userCancelledSignInBackOffUntil;
@property(nonatomic) double backOffUntil; // @synthesize backOffUntil=_backOffUntil;
@property(nonatomic) double networkingBlockedUntil; // @synthesize networkingBlockedUntil=_networkingBlockedUntil;
@property(nonatomic) double userAcceptedSyncTimestamp; // @synthesize userAcceptedSyncTimestamp=_userAcceptedSyncTimestamp;
@property(nonatomic) double authenticationNeededTimestamp; // @synthesize authenticationNeededTimestamp=_authenticationNeededTimestamp;
@property(nonatomic) double accountIdentifierCheckTimestamp; // @synthesize accountIdentifierCheckTimestamp=_accountIdentifierCheckTimestamp;
@property(retain, nonatomic) NSDictionary *transactionClamps; // @synthesize transactionClamps=_transactionClamps;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (_Bool)_canScheduleTransactionBasedOnUserCancelledSignIn:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000004ef9
- (_Bool)_canScheduleTransactionBasedOnBackOff:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000004d1d
- (_Bool)_canScheduleTransactionBasedOnAccountIdentifierCheck:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000004bfd
- (_Bool)_canScheduleTransactionBasedOfNetworkingBlocked:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000004aa6
- (_Bool)_canScheduleTransactionBasedOnType:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000004840
- (id)_keyForTransaction:(id)arg1;	// IMP=0x000000000000482b
- (double)_rightNow;	// IMP=0x00000000000047d4
- (_Bool)isNetworkingBlocked;	// IMP=0x000000000000475f
- (void)clearNetworkingBlocked;	// IMP=0x000000000000474a
- (void)setNetworkingBlocked;	// IMP=0x0000000000004707
- (void)clearBackOff;	// IMP=0x00000000000046d6
- (void)backOffForTimeInterval:(double)arg1;	// IMP=0x0000000000004689
- (void)clearUserCancelledSignIn;	// IMP=0x000000000000464a
- (void)setUserCancelledSignIn;	// IMP=0x000000000000445d
- (_Bool)hasUserRecentlyAcceptedSync;	// IMP=0x00000000000043bd
- (void)clearUserAcceptedSyncTimestamp;	// IMP=0x000000000000438c
- (void)setUserAcceptedSyncTimestamp;	// IMP=0x0000000000004351
- (_Bool)hasAuthenticatedTooRecentlyForTransaction:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000041cd
- (void)clearAuthenticationRequest;	// IMP=0x000000000000419c
- (void)setAuthenticationRequest;	// IMP=0x0000000000004161
- (void)clearAccountIdentifierCheckTimestamp;	// IMP=0x0000000000004130
- (void)setAccountIdentifierCheckTimestamp;	// IMP=0x00000000000040f5
- (void)clearTimestampForTransaction:(id)arg1;	// IMP=0x000000000000404e
- (void)setTimestampForTransaction:(id)arg1;	// IMP=0x0000000000003fbc
- (void)reset;	// IMP=0x0000000000003eda
- (_Bool)canScheduleTransaction:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000003e21
- (void)accessTransactionClampsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003d93
- (void)saveToUserDefaults;	// IMP=0x0000000000003cad
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000003afd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000399f
- (id)description;	// IMP=0x00000000000037dc
- (id)init;	// IMP=0x000000000000375c

@end

