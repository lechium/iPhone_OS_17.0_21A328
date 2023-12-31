//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_BRCOperation.h"

@class BRCPendingChangesStream, BRCServerZone, NSError, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_group, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRCFetchRecordSubResourcesOperation : _BRCOperation
{
    BRCServerZone *_serverZone;	// 32 = 0x20
    BRCPendingChangesStream *_pendingChangesStream;	// 40 = 0x28
    NSMutableDictionary *_recordsByID;	// 48 = 0x30
    NSMutableDictionary *_subResourceRecordsByID;	// 56 = 0x38
    NSMutableArray *_deletedRecordIDs;	// 64 = 0x40
    NSMutableArray *_deletedShareIDs;	// 72 = 0x48
    NSMutableSet *_movedZoneNames;	// 80 = 0x50
    NSObject<OS_dispatch_group> *_operationGroup;	// 88 = 0x58
    NSObject<OS_dispatch_group> *_xattrFetchingGroup;	// 96 = 0x60
    NSObject<OS_dispatch_source> *_xattrFetchingSource;	// 104 = 0x68
    NSObject<OS_dispatch_group> *_deserializeGroup;	// 112 = 0x70
    NSObject<OS_dispatch_source> *_deserializeSource;	// 120 = 0x78
    unsigned int _loopDetectionCacheSize;	// 128 = 0x80
    NSMutableOrderedSet *_loopDetectionCache;	// 136 = 0x88
    NSError *_error;	// 144 = 0x90
    unsigned char _deserializeState;	// 152 = 0x98
    _Bool _isDoneFetchingRecords;	// 153 = 0x99
    _Bool _isDeltaSync;	// 154 = 0x9a
    _Bool _canSaveDirectly;	// 155 = 0x9b
    _Bool _canSaveDirectlyWithDeletes;	// 156 = 0x9c
    _Bool _contentRecordsFetchedInline;	// 157 = 0x9d
    unsigned long long _recordsRequested;	// 160 = 0xa0
    unsigned long long _recordsRequestedTotalMetadataSize;	// 168 = 0xa8
    unsigned long long _xattrsFetchedTotalSize;	// 176 = 0xb0
    CDUnknownBlockType _queryFinishedServerTruthCallback;	// 184 = 0xb8
    CDUnknownBlockType _queryFinishedClientTruthCallback;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x00000000002d7e1e
@property(copy, nonatomic) CDUnknownBlockType queryFinishedClientTruthCallback; // @synthesize queryFinishedClientTruthCallback=_queryFinishedClientTruthCallback;
@property(copy, nonatomic) CDUnknownBlockType queryFinishedServerTruthCallback; // @synthesize queryFinishedServerTruthCallback=_queryFinishedServerTruthCallback;
@property(readonly, nonatomic) BRCPendingChangesStream *pendingChangesStream; // @synthesize pendingChangesStream=_pendingChangesStream;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (_Bool)saveRecordsWithQueryCursor:(id)arg1;	// IMP=0x00000000002d7291
- (_Bool)saveRecordsWithServerChangeToken:(id)arg1 clientChangeToken:(long long)arg2 syncStatus:(long long)arg3;	// IMP=0x00000000002d696f
- (_Bool)_hasRecordsPendingSubResources;	// IMP=0x00000000002d6922
- (void)_saveRecordsToPendingChangesWithServerChangeToken:(id)arg1 clientChangeToken:(long long)arg2;	// IMP=0x00000000002d6837
- (void)_cleanUpAfterSavingRecords;	// IMP=0x00000000002d677c
- (void)_fetchRecordsBlockingSaveIfNecessary;	// IMP=0x00000000002d5ffe
- (void)_prepareToSaveRecords;	// IMP=0x00000000002d47b6
- (void)_createSubResourceGroupsFromPendingChangesStreamIfNecessary;	// IMP=0x00000000002d46ed
- (void)_scheduleXattrFetch;	// IMP=0x00000000002d2db0
- (void)_dump;	// IMP=0x00000000002d28d6
- (_Bool)_markSubResourceRecordAsFetchedIfNecessary:(id)arg1;	// IMP=0x00000000002d267b
- (void)_scheduleDeserialize;	// IMP=0x00000000002d120b
- (_Bool)_willFetchRecordForDeserialize:(id)arg1;	// IMP=0x00000000002d109b
- (void)finishWithResult:(id)arg1 error:(id)arg2;	// IMP=0x00000000002d0d57
- (void)main;	// IMP=0x00000000002d0c61
- (void)stop;	// IMP=0x00000000002d0765
- (void)cancel;	// IMP=0x00000000002d0612
- (void)stopWithError:(id)arg1;	// IMP=0x00000000002d03e6
- (void)_startWithParentOperation:(id)arg1;	// IMP=0x00000000002d031d
- (void)notifyWhenRecordsAreFetchedAndFinish:(CDUnknownBlockType)arg1;	// IMP=0x00000000002d0303
- (void)notifyWhenCaughtUp:(_Bool)arg1 whenRecordsAreFetchedAndFinish:(CDUnknownBlockType)arg2;	// IMP=0x00000000002cffdd
- (void)_notifyWhenRecordsAreFetched:(CDUnknownBlockType)arg1;	// IMP=0x00000000002cfd7a
- (void)shareIDWasDeleted:(id)arg1;	// IMP=0x00000000002cfab0
- (void)recordIDWasDeleted:(id)arg1;	// IMP=0x00000000002cf3c2
- (void)addRecordIDToDeserialize:(id)arg1 recordType:(long long)arg2;	// IMP=0x00000000002cedb4
- (void)addRecordIDToDeserialize:(id)arg1;	// IMP=0x00000000002ceda0
- (void)addRecord:(id)arg1;	// IMP=0x00000000002cceb5
- (_Bool)shouldRetryForError:(id)arg1;	// IMP=0x00000000002cce44
- (id)createActivity;	// IMP=0x00000000002cce1b
- (id)initAndScheduleWithServerZone:(id)arg1 parentOperation:(id)arg2 pendingChangesStream:(id)arg3 contentRecordsFetchedInline:(_Bool)arg4;	// IMP=0x00000000002cc38b
- (id)movedZoneNames;	// IMP=0x00000000002cc376
- (id)records;	// IMP=0x00000000002cc2a9
@property(readonly, nonatomic) unsigned long long xattrsFetchedTotalSize; // @synthesize xattrsFetchedTotalSize=_xattrsFetchedTotalSize;
@property(readonly, nonatomic) unsigned long long recordsFetchedTotalMetadataSize; // @synthesize recordsFetchedTotalMetadataSize=_recordsRequestedTotalMetadataSize;
@property(readonly, nonatomic) unsigned long long recordsFetched; // @synthesize recordsFetched=_recordsRequested;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

