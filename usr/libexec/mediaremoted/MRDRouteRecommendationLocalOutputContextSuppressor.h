//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRDRouteRecommendationOutputContextLogic;

@interface MRDRouteRecommendationLocalOutputContextSuppressor : NSObject
{
    MRDRouteRecommendationOutputContextLogic *_outputContextLogic;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000009893f
@property(retain, nonatomic) MRDRouteRecommendationOutputContextLogic *outputContextLogic; // @synthesize outputContextLogic=_outputContextLogic;
- (_Bool)shouldSuppressRecommendations;	// IMP=0x00100000000988f1
- (id)initWithOutputContextLogic:(id)arg1;	// IMP=0x0010000000098886

@end

