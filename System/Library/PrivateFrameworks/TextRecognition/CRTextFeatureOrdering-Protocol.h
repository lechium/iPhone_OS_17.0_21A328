//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;
@protocol CRCTLDDelegate;

@protocol CRTextFeatureOrdering
- (NSArray *)orderAndGroupRegions:(NSArray *)arg1;

@optional
- (NSArray *)orderAndGroupRegions:(NSArray *)arg1 coarseDelegate:(id <CRCTLDDelegate>)arg2 fineDelegate:(id <CRCTLDDelegate>)arg3;
- (NSArray *)orderAndGroupRegions:(NSArray *)arg1 coarseDelegate:(id <CRCTLDDelegate>)arg2 fineDelegate:(id <CRCTLDDelegate>)arg3 coarseOnly:(_Bool)arg4;
- (NSArray *)orderAndGroupRegions:(NSArray *)arg1 tableGroups:(NSArray *)arg2;
@end

