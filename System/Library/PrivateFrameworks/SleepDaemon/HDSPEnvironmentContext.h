//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDSPSleepScheduleModelChangeEvaluation, NSString;
@protocol HDSPSource;

__attribute__((visibility("hidden")))
@interface HDSPEnvironmentContext : NSObject
{
    id <HDSPSource> _source;	// 8 = 0x8
    HDSPSleepScheduleModelChangeEvaluation *_changeEvaluation;	// 16 = 0x10
}

+ (id)contextWithSource:(id)arg1;	// IMP=0x001000000006f965
- (void).cxx_destruct;	// IMP=0x000000000006fcfe
@property(readonly, nonatomic) HDSPSleepScheduleModelChangeEvaluation *changeEvaluation; // @synthesize changeEvaluation=_changeEvaluation;
@property(readonly, nonatomic) id <HDSPSource> source; // @synthesize source=_source;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000006fc16
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000006fbc6
- (id)succinctDescriptionBuilder;	// IMP=0x000000000006fbad
- (id)succinctDescription;	// IMP=0x000000000006fb9b
@property(readonly, copy) NSString *description;
- (id)initWithSource:(id)arg1 changeEvaluation:(id)arg2;	// IMP=0x000000000006fad9
- (id)contextByApplyingChangeEvaluation:(id)arg1;	// IMP=0x000000000006f9b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
