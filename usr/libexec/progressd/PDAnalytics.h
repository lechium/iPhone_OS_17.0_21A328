//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSMetrics, NSDictionary;
@protocol OS_dispatch_queue;

@interface PDAnalytics : NSObject
{
    _Bool disableAnalyticsCollection;	// 8 = 0x8
    _Bool _optInToDnUiOS;	// 9 = 0x9
    NSDictionary *_baseValues;	// 16 = 0x10
    AMSMetrics *_metricsController;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_flushQueue;	// 32 = 0x20
}

+ (id)dateFormatter;	// IMP=0x00400000000ba28f
- (void).cxx_destruct;	// IMP=0x00200000000bb999
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *flushQueue; // @synthesize flushQueue=_flushQueue;
@property(nonatomic) _Bool optInToDnUiOS; // @synthesize optInToDnUiOS=_optInToDnUiOS;
@property(retain, nonatomic) AMSMetrics *metricsController; // @synthesize metricsController=_metricsController;
@property(retain, nonatomic) NSDictionary *baseValues; // @synthesize baseValues=_baseValues;
- (_Bool)uuidNeedsRegeneration:(id)arg1;	// IMP=0x00100000000bb85b
- (id)generateRotatingUUID:(id)arg1;	// IMP=0x00100000000bb71b
- (id)temporaryUserUUID:(id)arg1;	// IMP=0x00100000000bb687
- (long long)countOf:(Class)arg1 fromDB:(id)arg2;	// IMP=0x00100000000bb66d
- (void)setupDnUStatusOniOS;	// IMP=0x00100000000bb659
- (_Bool)shouldRecordEvent;	// IMP=0x00100000000bb651
- (void)_flush;	// IMP=0x00100000000bb42b
- (id)init;	// IMP=0x00100000000ba2ff

@end
