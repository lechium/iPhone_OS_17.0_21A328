//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowUICore/NSObject-Protocol.h>

@class UIViewController, UIWindow, WFActionUserInterface;

@protocol WFActionUserInterfaceDelegate <NSObject>
- (void)dismissPlatterForActionUserInterface:(WFActionUserInterface *)arg1 completionHandler:(void (^)(void))arg2;
- (UIWindow *)presentationAnchorForActionUserInterface:(WFActionUserInterface *)arg1;
- (void)actionUserInterface:(WFActionUserInterface *)arg1 setSupportedInterfaceOrientations:(unsigned long long)arg2;
- (void)actionUserInterface:(WFActionUserInterface *)arg1 showViewControllerInPlatter:(UIViewController *)arg2;
- (UIViewController *)viewControllerForPresentingActionUserInterface:(WFActionUserInterface *)arg1;
@end
