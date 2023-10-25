//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariServices/NSObject-Protocol.h>

@class SFDialog, SFDialogController;

@protocol SFDialogControllerDelegate <NSObject>

@optional
- (void)dialogController:(SFDialogController *)arg1 didDismissDialog:(SFDialog *)arg2;
- (void)dialogController:(SFDialogController *)arg1 willPresentDialog:(SFDialog *)arg2;
- (long long)dialogController:(SFDialogController *)arg1 presentationPolicyForDialog:(SFDialog *)arg2;
@end
