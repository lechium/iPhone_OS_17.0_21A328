//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _UIStatusBarVisualProvider_CarPlayVertical
{
    NSDictionary *_orderedDisplayItemPlacements;	// 8 = 0x8
}

+ (struct CGSize)intrinsicContentSizeForOrientation:(long long)arg1;	// IMP=0x0060000000f55243
- (void).cxx_destruct;	// IMP=0x0000000000f57ad9
@property(retain, nonatomic) NSDictionary *orderedDisplayItemPlacements; // @synthesize orderedDisplayItemPlacements=_orderedDisplayItemPlacements;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;	// IMP=0x0000000000f56de8
- (id)setupInContainerView:(id)arg1;	// IMP=0x0000000000f552fa
- (void)itemCreated:(id)arg1;	// IMP=0x0000000000f55259

@end

