//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoverSheet/NSObject-Protocol.h>

@class SBFBarSwipeBehavior, UIView;

@protocol SBFBarSwipeBehaviorDelegate <NSObject>
- (void)barSwipeBehaviorActionPerformed:(SBFBarSwipeBehavior *)arg1;

@optional
- (UIView *)barSwipeBehaviorGrabberViewContainer:(SBFBarSwipeBehavior *)arg1;
- (void)barSwipeBehavior:(SBFBarSwipeBehavior *)arg1 didUpdateAdditionalEdgeSpacing:(double)arg2;
@end
