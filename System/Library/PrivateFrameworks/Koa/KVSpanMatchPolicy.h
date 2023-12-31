//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface KVSpanMatchPolicy : NSObject
{
    unsigned int _options;	// 8 = 0x8
}

- (_Bool)allowAliasMatch;	// IMP=0x000000000000f029
- (_Bool)prioritizeExactMatch;	// IMP=0x000000000000f01b
- (_Bool)allowApproxMatch;	// IMP=0x000000000000f00e
- (_Bool)allowPartialMatch;	// IMP=0x000000000000f003
- (float)absoluteThreshold;	// IMP=0x000000000000eff5
- (float)globalRelativeThreshold;	// IMP=0x000000000000efe7
- (float)regionalRelativeThreshold;	// IMP=0x000000000000efd9
- (float)priorScoreWeight;	// IMP=0x000000000000efcb
- (float)matchScoreWeight;	// IMP=0x000000000000efbd
- (_Bool)useTopFive;	// IMP=0x000000000000efb5
- (_Bool)enableRankingWithPriors;	// IMP=0x000000000000efa7
- (id)description;	// IMP=0x000000000000ef30
- (id)init;	// IMP=0x000000000000eee8
- (id)initWithOptions:(unsigned int)arg1;	// IMP=0x000000000000eead

@end

