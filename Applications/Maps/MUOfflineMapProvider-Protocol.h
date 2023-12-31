//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSProgress;
@protocol MUOfflineMapProviderObserver;

@protocol MUOfflineMapProvider <NSObject>
@property(readonly, nonatomic) NSProgress *downloadProgress;
@property(readonly, nonatomic) long long downloadState;
- (void)removeObserver:(id <MUOfflineMapProviderObserver>)arg1;
- (void)addObserver:(id <MUOfflineMapProviderObserver>)arg1;
@end

