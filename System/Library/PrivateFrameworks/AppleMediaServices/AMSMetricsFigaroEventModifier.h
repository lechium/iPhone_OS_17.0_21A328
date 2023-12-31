//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AMSMetricsFigaroEventModifier : NSObject
{
    NSDictionary *_fieldFilters;	// 8 = 0x8
    NSString *_sampleSessionKey;	// 16 = 0x10
    NSDictionary *_metricsDictionary;	// 24 = 0x18
    NSDictionary *_overrideDictionary;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000317427
@property(readonly, nonatomic) NSDictionary *overrideDictionary; // @synthesize overrideDictionary=_overrideDictionary;
@property(readonly, nonatomic) NSDictionary *metricsDictionary; // @synthesize metricsDictionary=_metricsDictionary;
@property(readonly, nonatomic) NSString *sampleSessionKey; // @synthesize sampleSessionKey=_sampleSessionKey;
@property(readonly, nonatomic) NSDictionary *fieldFilters; // @synthesize fieldFilters=_fieldFilters;
- (id)_fieldFiltersFromOverrides:(id)arg1;	// IMP=0x0000000000316f4b
- (id)_createSampleSessionKey;	// IMP=0x0000000000316918
- (_Bool)_shouldSampleEvent:(id)arg1;	// IMP=0x000000000031675f
- (id)_overridePropertyForKey:(id)arg1;	// IMP=0x0000000000316680
- (_Bool)shouldSkipEvent:(id)arg1;	// IMP=0x000000000031661d
- (_Bool)shouldDropEvent:(id)arg1;	// IMP=0x0000000000316138
- (id)reportingURLForEvent:(id)arg1;	// IMP=0x0000000000315eeb
- (id)preparedEventPromiseWithEvent:(id)arg1;	// IMP=0x0000000000315d20
@property(readonly, nonatomic) double flushInterval;
- (_Bool)fieldFiltersMatchEvent:(id)arg1;	// IMP=0x00000000003158d9
- (id)initWithMetricsDictionary:(id)arg1 overrideDictionary:(id)arg2;	// IMP=0x00000000003157d6

@end

