//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class CNVisualIdentityPickerViewController, UIPresentationController, UIViewController;

@protocol CNVisualIdentityPickerPresenterDelegate <NSObject>
- (void)visualIdentityPicker:(CNVisualIdentityPickerViewController *)arg1 presentationControllerWillDismiss:(UIPresentationController *)arg2;

@optional
- (void)visualIdentityPicker:(CNVisualIdentityPickerViewController *)arg1 dismissViewController:(UIViewController *)arg2;
- (void)visualIdentityPicker:(CNVisualIdentityPickerViewController *)arg1 presentViewController:(UIViewController *)arg2;
@end

