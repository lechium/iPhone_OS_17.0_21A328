//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITabBarController.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI25RootSplitTabBarController : UITabBarController
{
    MISSING_TYPE *splitDelegate;	// 8 = 0x8
    MISSING_TYPE *trackModeSwitchOnParentMoveEvents;	// 24 = 0x18
    MISSING_TYPE *listenForAppear;	// 25 = 0x19
    MISSING_TYPE *listenForDissapear;	// 26 = 0x1a
}

- (void).cxx_destruct;	// IMP=0x00000000009299fe
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000009299b0
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000092991e
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000009292d6
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000009291e6
- (void)didMoveToParentViewController:(id)arg1;	// IMP=0x000000000092919b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000928dcf
- (id)init;	// IMP=0x0000000000928d22

@end

