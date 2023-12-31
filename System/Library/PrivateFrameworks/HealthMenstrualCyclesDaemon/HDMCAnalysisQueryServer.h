//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDQueryServer.h>

@class HDMCProfileExtension, HKMCAnalysis, HKMCAnalysisQueryConfiguration, NSString;

__attribute__((visibility("hidden")))
@interface HDMCAnalysisQueryServer : HDQueryServer
{
    HDMCProfileExtension *_profileExtension;	// 8 = 0x8
    HKMCAnalysisQueryConfiguration *_configuration;	// 16 = 0x10
    HKMCAnalysis *_analysis;	// 24 = 0x18
}

+ (_Bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id *)arg3;	// IMP=0x001000000002588b
+ (id)requiredEntitlements;	// IMP=0x001000000002587e
+ (Class)queryClass;	// IMP=0x001000000002586d
+ (id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id *)arg5;	// IMP=0x00100000000255d0
- (void).cxx_destruct;	// IMP=0x0000000000026101
- (void)_handleAnalysis:(id)arg1;	// IMP=0x0000000000026013
- (void)analysisManager:(id)arg1 didUpdateAnalysis:(id)arg2;	// IMP=0x0000000000025ffe
- (void)_queue_stop;	// IMP=0x0000000000025f85
- (void)_queue_start;	// IMP=0x0000000000025a31
- (_Bool)_shouldExecuteWhenProtectedDataIsUnavailable;	// IMP=0x0000000000025a29
- (id)objectTypes;	// IMP=0x000000000002598c
- (id)_analysisQueryClientProxy;	// IMP=0x000000000002581d
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 profileExtension:(id)arg5;	// IMP=0x000000000002575c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

