//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSUUID;
@protocol HMMLogEventSubmitting;

__attribute__((visibility("hidden")))
@interface HMDMessageHandlerMetricsDispatcher : HMFObject
{
    NSUUID *_identifier;	// 8 = 0x8
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x006000000075406d
- (void).cxx_destruct;	// IMP=0x000000000075403c
@property(readonly) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)attributeDescriptions;	// IMP=0x0000000000753f44
- (id)privateDescription;	// IMP=0x0000000000753f32
- (id)logIdentifier;	// IMP=0x0000000000753ee2
- (void)submitFailureEventOfType:(unsigned long long)arg1 message:(id)arg2;	// IMP=0x0000000000753d38
- (id)initWithIdentifier:(id)arg1 logEventSubmitter:(id)arg2;	// IMP=0x0000000000753c74

@end

