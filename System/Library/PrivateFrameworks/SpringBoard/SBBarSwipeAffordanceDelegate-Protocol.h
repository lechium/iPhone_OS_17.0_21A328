//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class BSAnimationSettings, SBBarSwipeAffordanceView;

@protocol SBBarSwipeAffordanceDelegate <NSObject>
- (unsigned long long)barSwipeAffordanceView:(SBBarSwipeAffordanceView *)arg1 systemGestureTypeForType:(long long)arg2;

@optional
- (BSAnimationSettings *)unhideAnimationSettingsForBarSwipeAffordanceView:(SBBarSwipeAffordanceView *)arg1;
- (BSAnimationSettings *)hideAnimationSettingsForBarSwipeAffordanceView:(SBBarSwipeAffordanceView *)arg1;
@end
