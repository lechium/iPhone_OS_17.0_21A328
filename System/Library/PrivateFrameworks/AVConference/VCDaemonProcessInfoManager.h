//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCDaemonProcessInfoManager : NSObject
{
    NSObject<OS_dispatch_queue> *_xpcQueue;	// 8 = 0x8
}

+ (id)copyProcessInfo;	// IMP=0x00600000000fa9e5
+ (id)sharedManager;	// IMP=0x00600000000fa996
- (id)copyAuditTokenInfo;	// IMP=0x00000000000faf2c
- (id)copyUniquePidInfo;	// IMP=0x00000000000faca9
- (void)deregisterBlocksForService;	// IMP=0x00000000000fac70
- (void)registerBlocksForService;	// IMP=0x00000000000fab3b
- (id)autorelease;	// IMP=0x00000000000fab32
- (oneway void)release;	// IMP=0x00000000000fab2c
- (unsigned long long)retainCount;	// IMP=0x00000000000fab1f
- (id)retain;	// IMP=0x00000000000fab16
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000fab0d
- (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000fab00
- (void)dealloc;	// IMP=0x00000000000faa96
- (id)init;	// IMP=0x00000000000faa18

@end

