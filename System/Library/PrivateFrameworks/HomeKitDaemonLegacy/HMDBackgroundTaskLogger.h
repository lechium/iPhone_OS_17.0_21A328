//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString;
@protocol HMMLogEventSubmitting;

__attribute__((visibility("hidden")))
@interface HMDBackgroundTaskLogger : HMFObject
{
    id <HMMLogEventSubmitting> _submitter;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x00100000009611d9
- (void).cxx_destruct;	// IMP=0x00000000009611c6
@property(readonly, nonatomic) id <HMMLogEventSubmitting> submitter; // @synthesize submitter=_submitter;
- (void)submitNotFiredLogEventForTask:(id)arg1;	// IMP=0x0000000000960f6d
- (void)submitLogEventForTask:(id)arg1;	// IMP=0x0000000000960d9b
- (id)init;	// IMP=0x0000000000960d41
- (id)initWithLogEventSubmitter:(id)arg1;	// IMP=0x0000000000960cd3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

