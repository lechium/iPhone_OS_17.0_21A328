//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLChangeBatch, CPLEngineScope, CPLRecordTargetMapping, NSDate, NSError, NSMutableSet, NSString, NSURL;
@protocol CPLEngineStoreUserIdentifier, CPLEngineTransportGroup;

@interface CPLCloudKitUploadBatchTask
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    CDUnknownBlockType _progressHandler;	// 16 = 0x10
    NSMutableSet *_autoRejectClasses;	// 24 = 0x18
    NSMutableSet *_autoRejectRecordIdentifiers;	// 32 = 0x20
    NSError *_autoError;	// 40 = 0x28
    unsigned long long _simulateOverQuotaPhase;	// 48 = 0x30
    double _approximativeResourcesUploadRate;	// 56 = 0x38
    CPLEngineScope *_sharedScope;	// 64 = 0x40
    CPLEngineScope *_scope;	// 72 = 0x48
    CPLChangeBatch *_batch;	// 80 = 0x50
    NSURL *_tempCKAssetURL;	// 88 = 0x58
    NSDate *_cplEnabledDate;	// 96 = 0x60
    CPLRecordTargetMapping *_targetMapping;	// 104 = 0x68
}

+ (id)simulateOverQuotaPhases;	// IMP=0x002000000011ced9
- (void).cxx_destruct;	// IMP=0x0020000000121f21
@property(readonly, nonatomic) CPLRecordTargetMapping *targetMapping; // @synthesize targetMapping=_targetMapping;
- (void);	// IMP=0x0010000000121eff
@property(copy, nonatomic) NSDate *cplEnabledDate; // @synthesize cplEnabledDate=_cplEnabledDate;
@property(copy, nonatomic) NSURL *tempCKAssetURL; // @synthesize tempCKAssetURL=_tempCKAssetURL;
@property(retain, nonatomic) CPLChangeBatch *batch; // @synthesize batch=_batch;
@property(readonly, nonatomic) CPLEngineScope *scope; // @synthesize scope=_scope;
@property(retain, nonatomic) CPLEngineScope *sharedScope; // @synthesize sharedScope=_sharedScope;
@property(readonly, nonatomic) double approximativeResourcesUploadRate; // @synthesize approximativeResourcesUploadRate=_approximativeResourcesUploadRate;
- (void)_executeUnsharePlanFromPlanner:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000121b7f
- (void)_executeSharePlanFromPlanner:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000121835
- (void)_uploadSharedBatchFromPlanner:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001214c1
- (void)_uploadBatchFromPlanner:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000121026
- (void)_uploadRecords:(id)arg1 deleteRecordIDs:(id)arg2 identification:(id)arg3 fromPlanner:(id)arg4 uploadContext:(id)arg5 updateProgress:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x001000000011fdd7
- (void)_fetchPrivateRecordsFromPlanner:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000011f848
- (void)_fetchSharedRecordsFromPlanner:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000011f29c
- (void)_fetchRequestedRecordsFromPlanner:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000011f154
- (void)_runModernOperationsWithCurrentUserID:(id)arg1;	// IMP=0x001000000011de0c
- (void)runOperations;	// IMP=0x001000000011dd8a
- (id)initWithController:(id)arg1 scope:(id)arg2 targetMapping:(id)arg3 transportScopeMapping:(id)arg4 progressHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000011cf6c

// Remaining properties
@property(nonatomic) _Bool allowsFetchCache;
@property(nonatomic, getter=isBackgroundTask) _Bool backgroundTask;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) id fetchCache;
@property(nonatomic, getter=isForcedTask) _Bool forcedTask;
@property(nonatomic) _Bool foreground;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighPriorityBackground) _Bool highPriorityBackground;
@property(readonly) Class superclass;
@property(retain, nonatomic) id <CPLEngineTransportGroup> transportGroup;
@property(retain, nonatomic) id <CPLEngineStoreUserIdentifier> transportUserIdentifier;

@end

