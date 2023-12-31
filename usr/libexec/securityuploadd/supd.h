//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSXPCConnection, SFAnalyticsReporter;

@interface supd : NSObject
{
    NSArray *_analyticsTopics;	// 8 = 0x8
    SFAnalyticsReporter *_reporter;	// 16 = 0x10
    NSDictionary *_topicsSamplingRates;	// 24 = 0x18
    NSXPCConnection *_connection;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000000de7f
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain) NSDictionary *topicsSamplingRates; // @synthesize topicsSamplingRates=_topicsSamplingRates;
@property(readonly) SFAnalyticsReporter *reporter; // @synthesize reporter=_reporter;
@property(readonly) NSArray *analyticsTopics; // @synthesize analyticsTopics=_analyticsTopics;
- (void)fixFiles:(CDUnknownBlockType)arg1;	// IMP=0x001000000000dd06
- (void)clientStatus:(CDUnknownBlockType)arg1;	// IMP=0x001000000000d987
- (void)setUploadDateWith:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000000d742
- (void)forceUploadWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000000d53c
- (void)createChunkedLoggingJSON:(_Bool)arg1 topic:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000000d0bf
- (void)createLoggingJSON:(_Bool)arg1 topic:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000000cc3e
- (void)getSysdiagnoseDumpWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000000cbcb
- (_Bool)checkSupdEntitlement;	// IMP=0x001000000000cb3e
- (id)stringForEventClass:(long long)arg1;	// IMP=0x001000000000cb1f
- (id)getSysdiagnoseDump;	// IMP=0x001000000000c831
- (id)sysdiagnoseStringForEventRecord:(id)arg1;	// IMP=0x001000000000c53b
- (_Bool)uploadAnalyticsWithError:(id *)arg1 force:(_Bool)arg2;	// IMP=0x001000000000b83e
- (id)serializeLoggingEvents:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000b59f
- (void)performRegularlyScheduledUpload;	// IMP=0x001000000000b428
- (void)sendNotificationForOncePerReportSamplers;	// IMP=0x001000000000b3f8
- (id)initWithConnection:(id)arg1;	// IMP=0x001000000000b394
- (id)initWithConnection:(id)arg1 reporter:(id)arg2;	// IMP=0x001000000000b272
- (void)setupSamplingRates;	// IMP=0x001000000000ada7
- (void)setupTopics;	// IMP=0x001000000000aaa5

@end

