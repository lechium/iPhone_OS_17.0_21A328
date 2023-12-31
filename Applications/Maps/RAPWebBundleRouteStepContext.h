//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOComposedRouteStep, NSString;

@interface RAPWebBundleRouteStepContext
{
    GEOComposedRouteStep *_step;	// 8 = 0x8
    _Bool _isMissedStep;	// 16 = 0x10
    NSString *_aggregatedData;	// 24 = 0x18
    NSString *_mapSnapshotId;	// 32 = 0x20
    unsigned long long _routeIndex;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000780df9
- (id)context;	// IMP=0x00100000007806ee
- (id)initWithRouteStep:(id)arg1 isMissedStep:(_Bool)arg2 aggregatedData:(id)arg3 locales:(id)arg4 mapSnapshotId:(id)arg5 routeIndex:(unsigned long long)arg6;	// IMP=0x0010000000780466

@end

