//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDLogEventAnalyzer : HMFObject
{
}

+ (id)logCategory;	// IMP=0x001000000069e40a
+ (id)managedEventCounterRequestGroups;	// IMP=0x001000000069e362
- (void)didReceiveEventFromDispatcher:(id)arg1;	// IMP=0x000000000069e471

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

