//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FCFeedItemFeature, FCFeedRange, NSArray, NSDictionary;

@protocol FCFDBConnectionReadable
- (NSDictionary *)selectFeedItemsWithIDs:(NSArray *)arg1;
- (NSArray *)selectFeedItemIDsWithFeedLookupIDs:(NSArray *)arg1 feedRange:(FCFeedRange *)arg2 feature:(FCFeedItemFeature *)arg3 maxCount:(unsigned long long)arg4;
- (NSDictionary *)selectFeedsWithFeedIDs:(NSArray *)arg1;
- (long long)selectMaxFeedLookupID;
@end

