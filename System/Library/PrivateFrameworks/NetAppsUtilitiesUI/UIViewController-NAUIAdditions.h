//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@interface UIViewController (NAUIAdditions)
+ (id)recursiveDescription;	// IMP=0x00800000000081c5
- (void)naui_applicationWillEnterForeground;	// IMP=0x00100000000081bf
- (void)naui_applicationDidEnterBackground;	// IMP=0x00100000000081b9
- (_Bool)naui_isDescendantOfViewController:(id)arg1;	// IMP=0x0010000000008143
- (void)naui_loadViewIfNecessary;	// IMP=0x0010000000008120
- (_Bool)naui_hasAxisWithRegularSizeClassOrGreater;	// IMP=0x00100000000080e7
- (_Bool)naui_isVerticalSizeClassRegularOrGreater;	// IMP=0x001000000000808e
- (_Bool)naui_isHorizontalSizeClassRegularOrGreater;	// IMP=0x0010000000008035
- (_Bool)naui_canAnimate;	// IMP=0x0010000000007ff1
- (void)naui_addChildViewWithViewController:(id)arg1 toView:(id)arg2;	// IMP=0x0010000000007f59
- (void)naui_addChildViewWithViewController:(id)arg1;	// IMP=0x0010000000007eee
- (id)recursiveDescription;	// IMP=0x0010000000008517
- (id)_recursiveDescriptionWithInset:(id)arg1;	// IMP=0x00100000000081de
@end

