//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL, WBSOpenSearchURLTemplate;

@protocol SafariSearchHelper
- (void)clearAllSearchModelsWithCompletionHandler:(void (^)(void))arg1;
- (void)checkForModelUpdatesIfNeededWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)setMaximumNumberOfOfflineSuggestionsToFetch:(unsigned long long)arg1;
- (void)fetchOfflineSearchSuggestionsStatus:(void (^)(unsigned long long))arg1;
- (void)fetchOfflineSuggestionsForQueryString:(NSString *)arg1 completionHandler:(void (^)(NSArray *))arg2;
- (void)cancelExistingSuggestionsRequestOfFetcherWithSuggestionsURLTemplate:(WBSOpenSearchURLTemplate *)arg1;
- (void)updateSuggestionsRequestWithSearchTerms:(NSString *)arg1 suggestionsURLTemplate:(WBSOpenSearchURLTemplate *)arg2 userAgentString:(NSString *)arg3 completionHandler:(void (^)(WBSSearchSuggestionsFetcherResponse *, NSError *))arg4;
- (void)fetchOpenSearchDescriptionWithURL:(NSURL *)arg1 completionHandler:(void (^)(NSDictionary *, NSError *))arg2;
@end

