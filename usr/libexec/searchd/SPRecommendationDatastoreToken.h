//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PRSRankingConfiguration, SPRecommendationDatastore;

@interface SPRecommendationDatastoreToken : NSObject
{
    _Bool _cancelled;	// 8 = 0x8
    SPRecommendationDatastore *_store;	// 16 = 0x10
    unsigned long long _type;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000008e63
@property _Bool cancelled; // @synthesize cancelled=_cancelled;
@property unsigned long long type; // @synthesize type=_type;
@property(readonly) SPRecommendationDatastore *store; // @synthesize store=_store;
- (id)buildSearchResultWithRecommendations:(id)arg1 query:(id)arg2;	// IMP=0x0010000000008097
- (void)begin:(id)arg1;	// IMP=0x0010000000007447
- (void)cancel;	// IMP=0x001000000000743d
- (id)initWithStore:(id)arg1;	// IMP=0x00100000000073ca

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain) PRSRankingConfiguration *rankingInfo;
@property(readonly) Class superclass;

@end
