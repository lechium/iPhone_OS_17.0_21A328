//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRCAccountSessionFPFS, BRCDeadlineSource, NSString, PQLNameInjection;
@protocol OS_dispatch_group, OS_dispatch_workloop;

__attribute__((visibility("hidden")))
@interface BRCFSSchedulerBase : NSObject
{
    BRCAccountSessionFPFS *_session;	// 8 = 0x8
    BRCDeadlineSource *_schedulerSource;	// 16 = 0x10
    NSObject<OS_dispatch_workloop> *_schedulerWorkloop;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    _Bool _firstSchedulingAfterStartupDone;	// 40 = 0x28
    _Bool _hasActiveWork;	// 41 = 0x29
    _Bool _hasWork;	// 42 = 0x2a
    _Bool _isCancelled;	// 43 = 0x2b
    NSObject<OS_dispatch_group> *_hasWorkGroup;	// 48 = 0x30
    NSObject<OS_dispatch_group> *_hasActiveWorkGroup;	// 56 = 0x38
    PQLNameInjection *_tableName;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000006f168
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) PQLNameInjection *tableName; // @synthesize tableName=_tableName;
@property(readonly, nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(nonatomic) _Bool hasWork; // @synthesize hasWork=_hasWork;
@property(nonatomic) _Bool hasActiveWork; // @synthesize hasActiveWork=_hasActiveWork;
@property(retain) NSObject<OS_dispatch_group> *hasActiveWorkGroup; // @synthesize hasActiveWorkGroup=_hasActiveWorkGroup;
@property(retain) NSObject<OS_dispatch_group> *hasWorkGroup; // @synthesize hasWorkGroup=_hasWorkGroup;
- (void)close;	// IMP=0x000000000006f07e
- (void)_close;	// IMP=0x000000000006ef5a
- (void)cancel;	// IMP=0x000000000006eec9
- (void)suspend;	// IMP=0x000000000006ee3c
- (void)resume;	// IMP=0x000000000006edaf
- (void)scheduleWithBatchSize:(int)arg1 whereSQLClause:(id)arg2 columns:(id)arg3 actionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000006e8b7
- (_Bool)canScheduleMoreJobs;	// IMP=0x000000000006e8af
- (void)performFirstSchedulingAfterStartupInDB:(id)arg1;	// IMP=0x000000000006e8a9
- (void)schedule;	// IMP=0x000000000006e7ea
- (void)signal;	// IMP=0x000000000006e7d6
- (void)signalWithDeadline:(long long)arg1;	// IMP=0x000000000006e781
- (void)checkIfHasWork;	// IMP=0x000000000006e5fe
- (unsigned int)recoverAndReportMissingJobs;	// IMP=0x000000000006e588
- (void)deleteExpiredJobs;	// IMP=0x000000000006e420
- (void)resetBackoffForJobWithID:(id)arg1;	// IMP=0x000000000006e210
- (void)deleteJobsMatching:(id)arg1;	// IMP=0x000000000006e01e
- (_Bool)setState:(int)arg1 forJobsMatching:(id)arg2;	// IMP=0x000000000006dd68
- (_Bool)setState:(int)arg1 forJobID:(id)arg2;	// IMP=0x000000000006dca3
- (void)computeStamps:(struct throttle_stamps *)arg1 forJobID:(id)arg2 throttle:(id)arg3 shouldBackoff:(_Bool)arg4;	// IMP=0x000000000006d8da
- (long long)updateStamps:(struct throttle_stamps *)arg1 throttle:(id)arg2 now:(long long)arg3;	// IMP=0x000000000006d791
- (void)rescheduleSuspendedJobsMatching:(id)arg1 inState:(int)arg2;	// IMP=0x000000000006d448
- (struct brc_job_update)insertOrUpdateJobID:(id)arg1 throttle:(id)arg2 withState:(int)arg3 insertedSQLColumn:(id)arg4 insertedSQLValues:(id)arg5 updatedSQLValues:(id)arg6 error:(id *)arg7;	// IMP=0x000000000006cad9
- (unsigned long long)postponeJobID:(id)arg1 withThrottle:(id)arg2;	// IMP=0x000000000006c7d2
- (id)aggregateDescriptionForJobsMatching:(id)arg1 context:(id)arg2;	// IMP=0x000000000006c71d
- (void)describeInBuffer:(id)arg1 aggregateOfJobsMatching:(id)arg2 context:(id)arg3;	// IMP=0x000000000006c556
- (id)descriptionForJobsMatching:(id)arg1 context:(id)arg2;	// IMP=0x000000000006c52f
- (id)descriptionForJobsMatching:(id)arg1 ordering:(id)arg2 additionalColumns:(id)arg3 additionalValuesHandler:(CDUnknownBlockType)arg4 context:(id)arg5;	// IMP=0x000000000006bed8
- (int)jobStateFor:(id)arg1;	// IMP=0x000000000006be05
- (_Bool)haveActiveJobsMatching:(id)arg1;	// IMP=0x000000000006bd3f
- (id)initWithSession:(id)arg1 name:(id)arg2 tableName:(id)arg3;	// IMP=0x000000000006b8d9
@property(readonly) _Bool closed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

