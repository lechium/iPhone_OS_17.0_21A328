//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSSet, NSString, SBApplication, SBMainDisplayLayoutState, SBMainDisplayLayoutStateManager;

@protocol SBLayoutStateSceneIdentityProviderDataSource <NSObject>
- (NSString *)newSceneIdentifierForBundleIdentifier:(NSString *)arg1 supportsMultiwindow:(_Bool)arg2;
- (NSSet *)transientApplicationSceneHandlesForApplication:(SBApplication *)arg1;
- (NSSet *)externalApplicationSceneHandles;
- (SBMainDisplayLayoutState *)currentLayoutState;
- (SBMainDisplayLayoutStateManager *)layoutStateManager;
@end

