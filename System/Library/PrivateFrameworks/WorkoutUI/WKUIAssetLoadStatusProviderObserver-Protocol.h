//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@protocol WKUIAssetLoadStatusProviderObserver
- (void)didUpdateWithAssetLoadProgress:(float)arg1;
- (void)didUpdateWithAssetLoadStatus:(long long)arg1 bundleReason:(long long)arg2 failureReason:(NSString *)arg3;
@end

