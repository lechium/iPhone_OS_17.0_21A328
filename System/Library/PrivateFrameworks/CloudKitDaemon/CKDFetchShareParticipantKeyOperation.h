//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSMutableArray, NSMutableDictionary;
@protocol CKFetchShareParticipantKeyOperationCallbacks;

@interface CKDFetchShareParticipantKeyOperation
{
    _Bool _hasAttemptedShareUpdate;	// 8 = 0x8
    CDUnknownBlockType _shareParticipantKeyFetchedBlock;	// 16 = 0x10
    NSMutableArray *_shareIDs;	// 24 = 0x18
    NSDictionary *_baseTokensByShareID;	// 32 = 0x20
    NSDictionary *_childRecordIDsByShareID;	// 40 = 0x28
    NSMutableDictionary *_sharesNeedingUpdateByID;	// 48 = 0x30
}

+ (id)nameForState:(unsigned long long)arg1;	// IMP=0x00600000002c2cd8
- (void).cxx_destruct;	// IMP=0x00000000002c512a
@property(nonatomic) _Bool hasAttemptedShareUpdate; // @synthesize hasAttemptedShareUpdate=_hasAttemptedShareUpdate;
@property(retain, nonatomic) NSMutableDictionary *sharesNeedingUpdateByID; // @synthesize sharesNeedingUpdateByID=_sharesNeedingUpdateByID;
@property(retain, nonatomic) NSDictionary *childRecordIDsByShareID; // @synthesize childRecordIDsByShareID=_childRecordIDsByShareID;
@property(retain, nonatomic) NSDictionary *baseTokensByShareID; // @synthesize baseTokensByShareID=_baseTokensByShareID;
@property(retain, nonatomic) NSMutableArray *shareIDs; // @synthesize shareIDs=_shareIDs;
@property(copy, nonatomic) CDUnknownBlockType shareParticipantKeyFetchedBlock; // @synthesize shareParticipantKeyFetchedBlock=_shareParticipantKeyFetchedBlock;
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x00000000002c4fee
- (void)main;	// IMP=0x00000000002c4f8a
- (void)updateShares;	// IMP=0x00000000002c4921
- (void)fetchSharesFromServer;	// IMP=0x00000000002c4236
- (void)_handleFetchedShare:(id)arg1 withID:(id)arg2 error:(id)arg3;	// IMP=0x00000000002c3d57
- (id)_participantKeyFromShare:(id)arg1 withError:(id *)arg2;	// IMP=0x00000000002c3238
- (void)_sendErrorForFailedShares;	// IMP=0x00000000002c3047
- (void)_performCallbackForShareID:(id)arg1 withParticipantKey:(id)arg2 error:(id)arg3;	// IMP=0x00000000002c2d63
- (id)activityCreate;	// IMP=0x00000000002c2d3a
- (_Bool)makeStateTransition;	// IMP=0x00000000002c2b93
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x00000000002c2a6e

// Remaining properties
@property(retain, nonatomic) id <CKFetchShareParticipantKeyOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(nonatomic) unsigned long long state; // @dynamic state;

@end

