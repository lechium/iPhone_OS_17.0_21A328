//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEOAbstractRequestResponseTicket.h"

@class GEOAutocompleteSessionData, GEOMapServiceTraits, NSString;

__attribute__((visibility("hidden")))
@interface _GEOPlaceSearchAutocompleteTicket : GEOAbstractRequestResponseTicket
{
    NSString *_searchQuery;	// 64 = 0x40
    GEOAutocompleteSessionData *_sessionData;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000007b5d48
@property(readonly, nonatomic, getter=_searchQuery) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
- (_Bool)enableStructuredRAPAffordance;	// IMP=0x00000000007b5cc0
- (long long)highlightType;	// IMP=0x00000000007b5c17
- (id)placeSummaryLayoutMetadata;	// IMP=0x00000000007b5b83
- (_Bool)shouldUseDistanceFeatureServerResults;	// IMP=0x00000000007b5aee
- (_Bool)showAutocompleteClientSource;	// IMP=0x00000000007b5a59
- (_Bool)autocompleteTopSectionIsQuerySuggestions;	// IMP=0x00000000007b59c4
- (id)sortPriorityMapping;	// IMP=0x00000000007b5918
- (id)clientRankingModel;	// IMP=0x00000000007b586c
- (_Bool)shouldEnableGrayscaleHighlighting;	// IMP=0x00000000007b57dc
- (_Bool)hasShouldEnableGrayscaleHighlighting;	// IMP=0x00000000007b5743
- (_Bool)shouldDisplayNoResults;	// IMP=0x00000000007b56b3
- (_Bool)hasShouldDisplayNoResults;	// IMP=0x00000000007b561d
- (double)retainSearchTime;	// IMP=0x00000000007b5464
- (void)applyToSuggestionEntry:(id)arg1 withAutocompleteSearchResultIdentifier:(id)arg2;	// IMP=0x00000000007b4fcc
- (void)applyToSuggestionList:(id)arg1;	// IMP=0x00000000007b4f5b
- (_Bool)matchesFragment:(id)arg1;	// IMP=0x00000000007b4f3e
- (void)submitWithAutoCompletionHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 networkActivity:(CDUnknownBlockType)arg3;	// IMP=0x00000000007b4bc3
- (void)submitWithAutoCompletionHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;	// IMP=0x00000000007b4bac
- (id)initWithRequest:(id)arg1 traits:(id)arg2 searchQuery:(id)arg3 sessionData:(id)arg4;	// IMP=0x00000000007b4adb

// Remaining properties
@property(readonly, nonatomic, getter=isCancelled) _Bool cancelled;
@property(readonly, nonatomic) CDStruct_026435ec dataRequestKind;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;

@end

