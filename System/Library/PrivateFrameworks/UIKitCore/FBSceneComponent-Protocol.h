//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/FBSSceneComponent-Protocol.h>
#import <UIKitCore/FBSceneObserver-Protocol.h>

@class FBSMutableSceneSettings, FBSSceneTransitionContext, FBScene;

@protocol FBSceneComponent <FBSSceneComponent, FBSceneObserver>

@optional
- (void)scene:(FBScene *)arg1 willUpdateSettings:(FBSMutableSceneSettings *)arg2 withTransitionContext:(FBSSceneTransitionContext *)arg3;
- (void)configureInitialSettings:(FBSMutableSceneSettings *)arg1;
@end

