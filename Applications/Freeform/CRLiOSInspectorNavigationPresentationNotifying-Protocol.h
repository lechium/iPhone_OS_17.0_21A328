//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class UINavigationController, UIViewController, UIViewPropertyAnimator;

@protocol CRLiOSInspectorNavigationPresentationNotifying <NSObject>
- (void)navigationController:(UINavigationController *)arg1 didTransitionFrom:(UIViewController *)arg2 to:(UIViewController *)arg3 operation:(long long)arg4;
- (void)navigationController:(UINavigationController *)arg1 willTransitionFrom:(UIViewController *)arg2 to:(UIViewController *)arg3 operation:(long long)arg4;

@optional
- (struct CGSize)navigationControllerExpectedContentSizeForTransition:(UINavigationController *)arg1;
- (void)navigationController:(UINavigationController *)arg1 animateWithAnimator:(UIViewPropertyAnimator *)arg2 from:(UIViewController *)arg3 to:(UIViewController *)arg4 operation:(long long)arg5;
@end
