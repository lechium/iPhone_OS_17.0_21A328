//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOrderedCollectionDifference.h>

@class NSArray;

@interface NSOrderedCollectionDifference (EmailFoundationAdditions)
- (id)ef_groupedInsertionsByObjectForTargetOrderedSet:(id)arg1 inferMoves:(_Bool)arg2;	// IMP=0x0030000000021b8c
- (id)ef_groupedInsertionsByObjectForTargetArray:(id)arg1 inferMoves:(_Bool)arg2;	// IMP=0x00300000000219f7
@property(readonly, copy, nonatomic) NSArray *ef_removalsExcludingMoves;
@property(readonly, copy, nonatomic) NSArray *ef_groupedInsertions;
@end

