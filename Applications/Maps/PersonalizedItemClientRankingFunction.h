//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOClientRankingModel;

@interface PersonalizedItemClientRankingFunction : NSObject
{
    GEOClientRankingModel *_model;	// 8 = 0x8
}

+ (id)clientRankingFunctionForGEOClientRankingModel:(id)arg1;	// IMP=0x0040000000c1af7e
- (void).cxx_destruct;	// IMP=0x0020000000c1c41c
@property(readonly, nonatomic) GEOClientRankingModel *model; // @synthesize model=_model;
- (void)describeInLog:(id)arg1 withType:(unsigned char)arg2;	// IMP=0x0010000000c1ba80
- (double)weightedScoreForModelFeatureIdentifier:(id)arg1 function:(id)arg2 personalizedItemSignalPack:(id)arg3;	// IMP=0x0010000000c1b34b
- (double)clientRankingScoreForPersonalizedItemSignalPack:(id)arg1 withServerScore:(id)arg2 hasContributionsFromDiscreteFeaturesResult:(_Bool *)arg3;	// IMP=0x0010000000c1b032
- (id)initWithModel:(id)arg1;	// IMP=0x0010000000c1afc7

@end

