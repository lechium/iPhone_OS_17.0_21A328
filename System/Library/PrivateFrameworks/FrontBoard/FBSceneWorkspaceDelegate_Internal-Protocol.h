//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoard/FBSceneWorkspaceDelegate-Protocol.h>

@class FBSSceneTransitionContext, FBScene, FBSceneWorkspace;
@protocol FBSceneClientProcess;

@protocol FBSceneWorkspaceDelegate_Internal <FBSceneWorkspaceDelegate>
- (void)workspace:(FBSceneWorkspace *)arg1 didReceiveScene:(FBScene *)arg2 withContext:(FBSSceneTransitionContext *)arg3 fromProcess:(id <FBSceneClientProcess>)arg4;
@end

