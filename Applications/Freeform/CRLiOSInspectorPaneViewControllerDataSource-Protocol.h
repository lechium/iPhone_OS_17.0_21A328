//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol CRLiOSInspectorPaneViewControllerDataSource <NSObject>
@property(copy, nonatomic) NSArray *sectionGaps;
- (NSArray *)cachedSectionCellArrays;
- (NSArray *)sectionFooters;
- (NSArray *)sectionTitles;
- (NSArray *)sectionCellArrays;
@end

