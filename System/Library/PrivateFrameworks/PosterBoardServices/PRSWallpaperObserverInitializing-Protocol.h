//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterBoardServices/NSObject-Protocol.h>

@class NSArray, PRSPosterRoleCollectionObserverUpdate;
@protocol __PRSRoleActivePosterObserverUpdate__, __PRSWallpaperObserverPathUpdate__;

@protocol PRSWallpaperObserverInitializing <NSObject>
- (oneway void)initializeWithKnownIdentities:(NSArray<__PRSWallpaperObserverPathUpdate__> *)arg1 knownRoles:(NSArray<__PRSRoleActivePosterObserverUpdate__> *)arg2 knownCollection:(PRSPosterRoleCollectionObserverUpdate *)arg3;
@end
