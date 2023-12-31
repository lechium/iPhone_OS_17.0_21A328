//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKConversation, CKSendMenuViewController, NSString;

@protocol CKSendMenuViewControllerDelegate
- (void)sendMenuDidAppear:(CKSendMenuViewController *)arg1 presentationStyle:(long long)arg2;
@property(nonatomic, readonly) _Bool isAppCardPresentationStyleExpanded;
- (CKConversation *)conversationForSendMenu;
- (void)sendMenuViewControllerDidFinishDismissAnimation:(CKSendMenuViewController *)arg1;
- (void)sendMenuViewControllerWillPerformFullScreenDismissAnimation:(CKSendMenuViewController *)arg1;
- (void)sendMenuViewControllerRequestDismiss:(CKSendMenuViewController *)arg1;
- (void)sendMenuViewController:(CKSendMenuViewController *)arg1 didSelectExtensionIdentifier:(NSString *)arg2;
@end

