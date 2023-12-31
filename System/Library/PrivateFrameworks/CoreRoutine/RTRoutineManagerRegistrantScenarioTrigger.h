//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface RTRoutineManagerRegistrantScenarioTrigger
{
    NSMutableDictionary *__scenarioTriggerHandlers;	// 8 = 0x8
    _Bool _registered;	// 16 = 0x10
    unsigned long long _monitoredScenarioTriggerTypes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002154d
@property(readonly, nonatomic) _Bool registered; // @synthesize registered=_registered;
@property(readonly, nonatomic) unsigned long long monitoredScenarioTriggerTypes; // @synthesize monitoredScenarioTriggerTypes=_monitoredScenarioTriggerTypes;
@property(readonly, copy, nonatomic) NSDictionary *scenarioTriggerHandlers; // @synthesize scenarioTriggerHandlers=__scenarioTriggerHandlers;
- (void)onScenarioTriggers:(id)arg1 error:(id)arg2;	// IMP=0x00000000000210fd
- (id)stopMonitoringForScenarioTriggerTypes:(unsigned long long)arg1;	// IMP=0x0000000000021031
- (id)startMonitoringForScenarioTriggerTypes:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000020e56
- (id)init;	// IMP=0x0000000000020df9

@end

