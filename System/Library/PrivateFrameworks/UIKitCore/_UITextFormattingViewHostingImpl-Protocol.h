//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIRemoteSheetContaining-Protocol.h>

@class NSData, UITextFormattingViewController, UITextFormattingViewControllerConfiguration;

@protocol _UITextFormattingViewHostingImpl <_UIRemoteSheetContaining>
@property(nonatomic) __weak UITextFormattingViewController *delegateTextFormattingViewController;
- (void)setRemoteTextAttributes:(NSData *)arg1;
- (void)setRemoteConfiguration:(UITextFormattingViewControllerConfiguration *)arg1;
- (void)setupRemoteHosting;
@end

