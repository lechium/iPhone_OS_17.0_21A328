//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/NSObject-Protocol.h>

@class WFHomeWorkflow, WFHomeWorkflowEditorViewController;

@protocol WFHomeWorkflowEditorViewControllerDelegate <NSObject>

@optional
- (void)homeWorkflowEditorViewController:(WFHomeWorkflowEditorViewController *)arg1 didFinishWithHomeWorkflow:(WFHomeWorkflow *)arg2 includesSecureAccessory:(_Bool)arg3;
@end
