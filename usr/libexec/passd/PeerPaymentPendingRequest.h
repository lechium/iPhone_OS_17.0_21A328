//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PeerPaymentPendingRequest
{
}

+ (id)_propertySettersForPeerPaymentPendingRequestWithProperties:(id)arg1 effectiveProperties:(id *)arg2;	// IMP=0x0040000000356ac2
+ (id)_peerPaymentPendingRequestsWithQuery:(id)arg1;	// IMP=0x0010000000356795
+ (id)_pendingRequestsInDatabase:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x0010000000356736
+ (id)_predicateForPeerPaymentPendingRequestWithAccountPID:(long long)arg1;	// IMP=0x00100000003566c5
+ (id)_predicateForPeerPaymentPendingRequestWithRequestToken:(id)arg1;	// IMP=0x00100000003566a2
+ (id)anyInDatabase:(id)arg1;	// IMP=0x001000000035660e
+ (void)deleteEntitiesForPeerPaymentAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000356575
+ (void)deleteEntitiesForRequestTokens:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000356391
+ (void)insertOrUpdatePeerPaymentPendingRequests:(id)arg1 forPeerPaymentAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000356109
+ (id)peerPaymentPendingRequestsForPeerPaymentAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000355b48
+ (id)peerPaymentPendingRequestsForRequestTokens:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000355910
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x001000000035547b
+ (id)databaseTable;	// IMP=0x001000000035546e
- (void)updateWithPeerPaymentPendingRequest:(id)arg1;	// IMP=0x0040000000355bd4
- (id)initWithPeerPaymentPendingRequest:(id)arg1 forPeerPaymentAccountPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x00100000003554aa

@end

