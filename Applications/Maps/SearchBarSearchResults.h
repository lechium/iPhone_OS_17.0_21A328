//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SearchBarSearchResults : NSObject
{
    NSArray *_resultSets;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000002fc171
@property(copy, nonatomic) NSArray *resultSets; // @synthesize resultSets=_resultSets;
- (id)copy;	// IMP=0x00100000002fc123
- (void)addResultSet:(id)arg1 withMaxCount:(unsigned long long)arg2;	// IMP=0x00100000002fc05b
- (id)filteredResultsWithBackfill:(long long)arg1;	// IMP=0x00100000002fbb1a
- (id)init;	// IMP=0x00100000002fbac4

@end

