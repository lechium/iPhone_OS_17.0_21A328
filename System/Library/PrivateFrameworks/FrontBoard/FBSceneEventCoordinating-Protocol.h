//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoard/NSObject-Protocol.h>

@class FBSSceneClientSettings, FBSSceneClientSettingsDiff, FBSSceneSettings, FBSSceneTransitionContext, FBScene, NSError, NSSet, NSString;

@protocol FBSceneEventCoordinating <NSObject>
- (void)scene:(FBScene *)arg1 didReceiveActions:(NSSet *)arg2 forExtension:(Class)arg3;
- (void)scene:(FBScene *)arg1 deactivateAndInvalidate:(_Bool)arg2 withError:(NSError *)arg3 block:(void (^)(void))arg4;
- (void)scene:(FBScene *)arg1 didUpdateClientSettingsWithDiff:(FBSSceneClientSettingsDiff *)arg2 oldClientSettings:(FBSSceneClientSettings *)arg3 transitionContext:(FBSSceneTransitionContext *)arg4;
- (void)scene:(FBScene *)arg1 handleUpdateToSettings:(FBSSceneSettings *)arg2 withTransitionContext:(FBSSceneTransitionContext *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)scene:(FBScene *)arg1 enumerateAndCalloutToObserversWithEventName:(NSString *)arg2 block:(void (^)(FBSceneObserver *))arg3;
@end

