//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSError, SBSystemAction, SBSystemActionInteractionContext;
@protocol BSInvalidatable, SBSystemActionPreviewCoordinating;

@protocol SBSystemActionExecuting <NSObject>
@property(readonly, nonatomic) double executionEndTime;
@property(readonly, nonatomic) double executionStartTime;
@property(readonly, nonatomic, getter=isExecuting) _Bool executing;
@property(readonly, nonatomic) _Bool canBeExecuted;
@property(readonly, nonatomic) SBSystemAction *systemAction;
- (id <BSInvalidatable>)executeWithContext:(SBSystemActionInteractionContext *)arg1 completion:(void (^)(id <SBSystemActionExecuting>, NSError *))arg2;
- (void)cancelPreviewing;
- (NSError *)previewWithCoordinator:(id <SBSystemActionPreviewCoordinating>)arg1;
@end

