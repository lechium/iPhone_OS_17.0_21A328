//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOXPCActivity;
@protocol OS_dispatch_queue;

@interface GEOMobileAssetResourceUpdater : NSObject
{
    NSObject<OS_dispatch_queue> *_updateWorkQueue;	// 8 = 0x8
    GEOXPCActivity *_activity;	// 16 = 0x10
    _Bool _running;	// 24 = 0x18
}

+ (void)run;	// IMP=0x0040000000017e9f
+ (void)registerXPCActivity;	// IMP=0x0010000000017c72
+ (id)sharedUpdater;	// IMP=0x0010000000017b00
- (void).cxx_destruct;	// IMP=0x0020000000018db5
- (void)_pruneOldResourcesIn:(id)arg1;	// IMP=0x0010000000018924
- (void)_processResources:(id)arg1 group:(id)arg2;	// IMP=0x00100000000185da
- (void)_fetchAssets;	// IMP=0x0010000000018248
- (void)_updateComplete;	// IMP=0x00100000000181c6
- (void)_updateOnQueue;	// IMP=0x0010000000017f3d
- (void)_update;	// IMP=0x0010000000017edc
- (void)_registerActivity;	// IMP=0x0010000000017c8d
- (id)initInternal;	// IMP=0x0010000000017b65

@end

