//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSIndexPath, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SFFluidTabOverviewLinearLayout
{
    NSMutableDictionary *_cachedAttributes;	// 8 = 0x8
    NSIndexPath *_dataSourceZoomedItemIndexPath;	// 16 = 0x10
}

+ (Class)layoutAttributesClass;	// IMP=0x00600000000fd5ab
- (void).cxx_destruct;	// IMP=0x00000000000fde6a
@property(retain, nonatomic) NSIndexPath *zoomedItemIndexPath; // @synthesize zoomedItemIndexPath=_dataSourceZoomedItemIndexPath;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x00000000000fdad2
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x00000000000fd6e7
- (_Bool)shouldAllowScrollGesture;	// IMP=0x00000000000fd5bc

@end

