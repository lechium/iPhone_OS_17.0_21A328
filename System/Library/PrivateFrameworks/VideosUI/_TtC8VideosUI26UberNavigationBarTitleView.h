//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UINavigationBarTitleView.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI26UberNavigationBarTitleView : _UINavigationBarTitleView
{
    MISSING_TYPE *customBackButton;	// 8 = 0x8
    MISSING_TYPE *titleView;	// 16 = 0x10
    MISSING_TYPE *titleOpacity;	// 24 = 0x18
    MISSING_TYPE *hostViewController;	// 32 = 0x20
    MISSING_TYPE *isBackButtonHidden;	// 40 = 0x28
    MISSING_TYPE *touchProxyView;	// 48 = 0x30
    MISSING_TYPE *showUberState;	// 56 = 0x38
    MISSING_TYPE *isUber;	// 57 = 0x39
    MISSING_TYPE *futureDisplayMode;	// 64 = 0x40
    MISSING_TYPE *dismissalDisplayMode;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000480379
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000480346
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000004802af
- (void)contentDidChange;	// IMP=0x0000000000480131
- (void)layoutSubviews;	// IMP=0x00000000004800d3
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000047fb5b

@end

