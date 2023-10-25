//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class NSString, WFAction;

@protocol WFActionEventObserver <NSObject>

@optional
- (void)actionReloadAuxiliaryButton:(WFAction *)arg1;
- (void)action:(WFAction *)arg1 supplementalParameterValueDidChangeForKey:(NSString *)arg2;
- (void)action:(WFAction *)arg1 parameterStateDidChangeForKey:(NSString *)arg2;
- (void)actionRunningStateDidChange:(WFAction *)arg1;
- (void)actionOutputDetailsDidChange:(WFAction *)arg1;
- (void)actionIconDidChange:(WFAction *)arg1;
- (void)actionNameDidChange:(WFAction *)arg1;
@end
