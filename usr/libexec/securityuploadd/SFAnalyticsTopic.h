//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSDictionary, NSString, NSURL;

@interface SFAnalyticsTopic : NSObject
{
    _Bool _allowInsecureSplunkCert;	// 8 = 0x8
    _Bool _ignoreServersMessagesTellingUsToGoAway;	// 9 = 0x9
    _Bool _disableUploads;	// 10 = 0xa
    _Bool _disableClientId;	// 11 = 0xb
    float _devicePercentage;	// 12 = 0xc
    NSString *_splunkTopicName;	// 16 = 0x10
    NSURL *_splunkBagURL;	// 24 = 0x18
    NSString *_internalTopicName;	// 32 = 0x20
    unsigned long long _uploadSizeLimit;	// 40 = 0x28
    NSArray *_topicClients;	// 48 = 0x30
    MISSING_TYPE *__splunkUploadURL;	// 56 = 0x38
    unsigned long long _secondsBetweenUploads;	// 64 = 0x40
    unsigned long long _maxEventsToReport;	// 72 = 0x48
    NSDictionary *_metricsBase;	// 80 = 0x50
    NSArray *_blacklistedFields;	// 88 = 0x58
    NSArray *_blacklistedEvents;	// 96 = 0x60
}

+ (id)databasePathForTransparency;	// IMP=0x002000000000aa43
+ (id)databasePathForCloudServices;	// IMP=0x001000000000a9e1
+ (id)databasePathForNetworking;	// IMP=0x001000000000a97f
+ (id)databasePathForTrust;	// IMP=0x001000000000a91d
+ (id)databasePathForLocal;	// IMP=0x001000000000a8bb
+ (id)databasePathForPCS;	// IMP=0x001000000000a7c4
+ (id)AppSupportPath;	// IMP=0x001000000000a71b
+ (id)databasePathForSOS;	// IMP=0x001000000000a6b9
+ (id)databasePathForCKKS;	// IMP=0x001000000000a657
- (void).cxx_destruct;	// IMP=0x00200000000082ea
@property(retain) NSArray *blacklistedEvents; // @synthesize blacklistedEvents=_blacklistedEvents;
@property(retain) NSArray *blacklistedFields; // @synthesize blacklistedFields=_blacklistedFields;
@property(retain) NSDictionary *metricsBase; // @synthesize metricsBase=_metricsBase;
@property float devicePercentage; // @synthesize devicePercentage=_devicePercentage;
@property unsigned long long maxEventsToReport; // @synthesize maxEventsToReport=_maxEventsToReport;
@property unsigned long long secondsBetweenUploads; // @synthesize secondsBetweenUploads=_secondsBetweenUploads;
@property _Bool disableClientId; // @synthesize disableClientId=_disableClientId;
@property _Bool disableUploads; // @synthesize disableUploads=_disableUploads;
@property _Bool ignoreServersMessagesTellingUsToGoAway; // @synthesize ignoreServersMessagesTellingUsToGoAway=_ignoreServersMessagesTellingUsToGoAway;
@property _Bool allowInsecureSplunkCert; // @synthesize allowInsecureSplunkCert=_allowInsecureSplunkCert;
@property(retain) NSURL *_splunkUploadURL; // @synthesize _splunkUploadURL=__splunkUploadURL;
@property(retain) NSArray *topicClients; // @synthesize topicClients=_topicClients;
@property unsigned long long uploadSizeLimit; // @synthesize uploadSizeLimit=_uploadSizeLimit;
@property(retain) NSString *internalTopicName; // @synthesize internalTopicName=_internalTopicName;
@property(retain) NSURL *splunkBagURL; // @synthesize splunkBagURL=_splunkBagURL;
@property(retain) NSString *splunkTopicName; // @synthesize splunkTopicName=_splunkTopicName;
- (id)eventDictWithBlacklistedFieldsStrippedFrom:(id)arg1;	// IMP=0x0010000000007fdf
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000007a0a
- (id)splunkUploadURL:(_Bool)arg1;	// IMP=0x00100000000075f5
- (id)appleUser;	// IMP=0x00100000000071df
- (id)askSecurityForCKDeviceID;	// IMP=0x0010000000006f5f
- (_Bool)haveEligibleClients;	// IMP=0x0010000000006d8f
- (id)createLoggingJSON:(_Bool)arg1 forUpload:(_Bool)arg2 participatingClients:(id)arg3 force:(_Bool)arg4 error:(id *)arg5;	// IMP=0x0010000000006b6d
- (id)createChunkedLoggingJSON:(_Bool)arg1 forUpload:(_Bool)arg2 participatingClients:(id)arg3 force:(_Bool)arg4 error:(id *)arg5;	// IMP=0x001000000000697d
- (_Bool)copyEvents:(id)arg1 failures:(id)arg2 forUpload:(_Bool)arg3 participatingClients:(id)arg4 force:(_Bool)arg5 linkedUUID:(id)arg6 error:(id *)arg7;	// IMP=0x0010000000006272
- (id)carryStatus;	// IMP=0x0010000000006053
- (id)dataAnalyticsSetting:(id)arg1;	// IMP=0x0010000000005fe8
- (id)createChunkedLoggingJSON:(id)arg1 failures:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000005c26
- (id)createEventDictionary:(id)arg1 timestamp:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000005999
- (id)chunkFailureSet:(unsigned long long)arg1 events:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000055aa
- (unsigned long long)serializedEventSize:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000005321
- (void)updateUploadDateForClients:(id)arg1 date:(id)arg2 clearData:(_Bool)arg3;	// IMP=0x0010000000005157
- (id)healthSummaryWithName:(id)arg1 store:(id)arg2 uuid:(id)arg3;	// IMP=0x001000000000459a
- (id)sampleStatisticsForSamples:(id)arg1 withName:(id)arg2;	// IMP=0x0010000000003b70
- (void)addFailures:(id)arg1 toUploadRecords:(id)arg2 threshold:(unsigned long long)arg3 linkedUUID:(id)arg4;	// IMP=0x0010000000003574
- (_Bool)prepareEventForUpload:(id)arg1 linkedUUID:(id)arg2;	// IMP=0x0010000000003401
- (void)addRequiredFieldsToEvent:(id)arg1;	// IMP=0x001000000000336d
- (void)removeBlacklistedFieldsFromEvent:(id)arg1;	// IMP=0x0010000000003224
- (_Bool)eventIsBlacklisted:(id)arg1;	// IMP=0x00100000000031b9
- (_Bool)postJSON:(id)arg1 toEndpoint:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000002d3c
- (_Bool)isSampledUpload;	// IMP=0x0010000000002ce8
- (id)initWithDictionary:(id)arg1 name:(id)arg2 samplingRates:(id)arg3;	// IMP=0x00100000000026bc
- (void)setupClientsForTopic:(id)arg1;	// IMP=0x0010000000002299

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

