//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PDAbstractClassZoneOperation
{
    _Bool _responseStatusPayloadFailed;	// 24 = 0x18
}

+ (id)serviceID;	// IMP=0x0040000000059c24
- (void)_setAuthorizationForAttachmentWithObjectID:(id)arg1 shouldAuthorize:(_Bool)arg2;	// IMP=0x0020000000062a01
- (_Bool)_deleteSurveyStep:(id)arg1;	// IMP=0x0010000000062245
- (_Bool)_deleteSurvey:(id)arg1;	// IMP=0x0010000000061d84
- (_Bool)_deleteStateChanges:(id)arg1;	// IMP=0x00100000000619cb
- (_Bool)_deleteDraftAnswer:(id)arg1;	// IMP=0x0010000000061849
- (_Bool)_deleteEntity:(Class)arg1 identity:(id)arg2;	// IMP=0x001000000006150a
- (_Bool)deleteClassWithObjectID:(id)arg1 deletePersons:(_Bool)arg2;	// IMP=0x00100000000611f0
- (_Bool)deleteHandoutWithObjectID:(id)arg1 shouldDeleteDrafts:(_Bool)arg2;	// IMP=0x0010000000060f9f
- (_Bool)_deleteWithPayload:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000060444
- (_Bool)_insertOrUpdateArchivedSurveyStep:(id)arg1;	// IMP=0x00100000000600c7
- (_Bool)_insertOrUpdateSurveyStep:(id)arg1;	// IMP=0x001000000005fac3
- (_Bool)_insertOrUpdateCollectionItem:(id)arg1;	// IMP=0x001000000005f936
- (_Bool)_insertOrUpdateEntity:(id)arg1;	// IMP=0x001000000005f78e
- (void)setHandoutClosedStatusForStateChange:(id)arg1 andStateChangePayload:(id)arg2 forHandout:(id)arg3;	// IMP=0x001000000005f737
- (void)setCompletionAndLockedStatusForStateChange:(id)arg1 andStateChangePayload:(id)arg2 forAttachment:(id)arg3;	// IMP=0x001000000005f438
- (_Bool)setCompletionStatus:(int)arg1 forAttachment:(id)arg2 locked:(_Bool)arg3 dateCompleted:(id)arg4 dateModified:(id)arg5;	// IMP=0x001000000005f345
- (id)_applyStateChangesToParentHandoutEntity:(id)arg1;	// IMP=0x001000000005ed37
- (_Bool)resolveMissingEntityWithObjectID:(id)arg1;	// IMP=0x001000000005ec53
- (_Bool)validateStateChangePayload:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005d9aa
- (_Bool)processStateChange:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005d1b7
- (_Bool)processCompletionStatus:(id)arg1;	// IMP=0x001000000005cd1d
- (_Bool)processAuthorizationStatus:(id)arg1;	// IMP=0x001000000005cb9d
- (_Bool)processAttachment:(id)arg1;	// IMP=0x001000000005ca6a
- (_Bool)processPayloadStatus:(id)arg1 allowMixedResponse:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000005c70b
- (_Bool)deleteCollectionItemsWithReferenceObjectID:(id)arg1;	// IMP=0x001000000005c627
- (_Bool)updateCollectionItemsReferenceObjectID:(id)arg1 toType:(long long)arg2 andObjectID:(id)arg3;	// IMP=0x001000000005c394
- (_Bool)_insertOrUpdateArchivedHandout:(id)arg1;	// IMP=0x001000000005c2c0
- (_Bool)_insertOrUpdateSurveyAnswer:(id)arg1;	// IMP=0x001000000005c122
- (_Bool)processPayloadFromResponse:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005accf
- (void)logPayloadBeforeProcessing:(id)arg1;	// IMP=0x001000000005ab06
- (_Bool)processPayloadsFromResponse:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005a4d0
- (_Bool)processResponse:(id *)arg1;	// IMP=0x001000000005a354
- (_Bool)stopProcessingIfResponseStatusPayloadFailed;	// IMP=0x001000000005a34c
- (_Bool)processPayloadWithinWriteTransaction:(id)arg1 error:(id *)arg2 stop:(_Bool *)arg3;	// IMP=0x0010000000059ff1
- (_Bool)processResponseObject:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000059e33
- (_Bool)parseStreamedResponse:(id)arg1;	// IMP=0x0010000000059dd8
- (_Bool)hasBigResponses;	// IMP=0x0010000000059dd0
- (_Bool)readStreamablePayload:(id)arg1 reader:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000059c69
- (long long)streamablePayloadClassTagValue;	// IMP=0x0010000000059c5e
- (Class)streamablePayloadClass;	// IMP=0x0010000000059c4d
- (_Bool)acceptsPayloadType:(int)arg1;	// IMP=0x0010000000059c45
- (_Bool)shouldProcessPayloadWithStatusCode:(int)arg1;	// IMP=0x0010000000059c39
- (_Bool)allowMixedResponseStatusCode;	// IMP=0x0010000000059c31

@end

