//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC12NewsArticles27BrandBarNavigationAnimation : _TtCs12_SwiftObject
{
    MISSING_TYPE *shouldCompressAtTop;	// 16 = 0x10
    MISSING_TYPE *topOffset;	// 24 = 0x18
    MISSING_TYPE *shouldCloseGapOnScroll;	// 32 = 0x20
}

- (void)reloadWithTraitCollection:(id)arg1;	// IMP=0x00000000000a9330
- (double)minimumBarHeightForTraitCollection:(id)arg1;	// IMP=0x00000000000a9320
- (double)maximumBarHeightForTraitCollection:(id)arg1;	// IMP=0x00000000000a9310
- (_Bool)animationShouldBeginForScrollView:(id)arg1 currentlyFullyCompressed:(_Bool)arg2;	// IMP=0x00000000000a9300
- (void)scrollViewIsAtTop:(_Bool)arg1 offset:(double)arg2;	// IMP=0x00000000000a92f0
- (void)updateWithPercentage:(double)arg1;	// IMP=0x00000000000a92e0
- (void)prepareForUpdates;	// IMP=0x00000000000a92d0
@property(nonatomic, readonly) _Bool shouldCloseGapOnScroll; // @synthesize shouldCloseGapOnScroll;
@property(nonatomic, readonly) double topOffset; // @synthesize topOffset;
@property(nonatomic, readonly) _Bool shouldCompressAtTop; // @synthesize shouldCompressAtTop;

@end

