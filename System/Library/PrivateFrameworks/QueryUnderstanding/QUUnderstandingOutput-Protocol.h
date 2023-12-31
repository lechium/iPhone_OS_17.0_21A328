//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QueryUnderstanding/NSObject-Protocol.h>

@class NSArray, NSNumber;

@protocol QUUnderstandingOutput <NSObject>
@property(readonly, nonatomic) unsigned long long embeddingsTime;
@property(readonly, nonatomic) unsigned long long predictionTime;
@property(readonly, nonatomic) NSArray *argScoresForTokens;
@property(readonly, nonatomic) NSArray *argIdsForTokens;
@property(readonly, nonatomic) NSArray *argScores;
@property(readonly, nonatomic) NSArray *argIds;
@property(readonly, nonatomic) NSArray *tokenRanges;
@property(readonly, nonatomic) NSArray *tokens;
@property(readonly, nonatomic) NSNumber *intentId;
@property(readonly, nonatomic) NSNumber *confidenceScore;
@end

