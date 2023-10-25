//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ATXContextualSuggestionSnapshot;

@protocol ATXContextualEngineInternalInterface
- (void)updateWithCompletion:(void (^)(NSError *))arg1;
- (void)overrideWithSnapshot:(ATXContextualSuggestionSnapshot *)arg1 completion:(void (^)(NSError *))arg2;
- (void)fetchSnapshotOverrideWithCompletion:(void (^)(ATXContextualSuggestionSnapshot *, NSError *))arg1;
- (void)fetchAllSnapshotsWithCompletion:(void (^)(NSDictionary *, NSError *))arg1;
@end
