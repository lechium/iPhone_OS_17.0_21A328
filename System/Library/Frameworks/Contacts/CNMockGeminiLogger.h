//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNMockGeminiLogger : NSObject
{
}

- (void)fetchBestResultForInteraction:(id)arg1 error:(id)arg2;	// IMP=0x000000000012a386
- (void)fetchedBestResult:(id)arg1 forInteraction:(id)arg2;	// IMP=0x000000000012a380
- (void)fetchedSortedResults:(id)arg1 forInteraction:(id)arg2;	// IMP=0x000000000012a37a
- (void)fetchSortedResultsForInteraction:(id)arg1 error:(id)arg2;	// IMP=0x000000000012a374
- (void)updateSubscriptionInfoError:(id)arg1;	// IMP=0x000000000012a36e
- (void)updatedSubscriptionInfo:(id)arg1;	// IMP=0x000000000012a368
- (void)unregisteredForContextUpdatesWithToken:(id)arg1;	// IMP=0x000000000012a362
- (void)registeredForContextUpdatesWithToken:(id)arg1;	// IMP=0x000000000012a35c
- (void)recordInteractionError:(id)arg1;	// IMP=0x000000000012a356
- (void)recordedInteraction:(id)arg1 forContext:(id)arg2;	// IMP=0x000000000012a350
- (void)fetchingBestResultForDestinationHandle:(CDUnknownBlockType)arg1;	// IMP=0x000000000012a335
- (void)updatingSubscriptionInfo:(CDUnknownBlockType)arg1;	// IMP=0x000000000012a31a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

