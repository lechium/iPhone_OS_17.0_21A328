//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RunningBoard/NSObject-Protocol.h>

@class RBLaunchdProperties, RBProcess, RBSProcessInstance;

@protocol RBLaunchManagerDelegate <NSObject>
- (RBProcess *)_lifecycleQueue_addProcessWithInstance:(RBSProcessInstance *)arg1 properties:(RBLaunchdProperties *)arg2;
@end
