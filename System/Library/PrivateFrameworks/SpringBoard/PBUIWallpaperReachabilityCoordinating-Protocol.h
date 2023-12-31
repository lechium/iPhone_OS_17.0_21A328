//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class UIWindow;
@protocol PBUIWallpaperReachabilityObserving;

@protocol PBUIWallpaperReachabilityCoordinating <NSObject>
@property(readonly, nonatomic) double effectiveReachabilityYOffset;
- (_Bool)isWindowIgnoredForReachability:(UIWindow *)arg1;
- (void)removeReachabilityObserver:(id <PBUIWallpaperReachabilityObserving>)arg1;
- (void)addReachabilityObserver:(id <PBUIWallpaperReachabilityObserving>)arg1;
@end

