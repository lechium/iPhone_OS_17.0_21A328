//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCXPCManager
{
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;	// 88 = 0x58
    NSMutableArray *_registeredServices;	// 96 = 0x60
}

+ (void)addNSError:(id)arg1 toXPCArgumentDictionary:(id)arg2;	// IMP=0x0060000000084a17
+ (void)registerTerminateBlock:(CDUnknownBlockType)arg1 forService:(const char *)arg2 expectedClasses:(id)arg3;	// IMP=0x0060000000084732
+ (void)registerBlock:(CDUnknownBlockType)arg1 forService:(const char *)arg2;	// IMP=0x006000000008458d
+ (void)registerBlocksForService;	// IMP=0x006000000008439d
+ (id)sharedInstance;	// IMP=0x006000000008433c
- (void)deregisterBlocksFromService;	// IMP=0x00000000000843fe
- (void)dealloc;	// IMP=0x00000000000842b5
- (id)init;	// IMP=0x0000000000084131
- (id)autorelease;	// IMP=0x0000000000084128
- (oneway void)release;	// IMP=0x0000000000084122
- (unsigned long long)retainCount;	// IMP=0x0000000000084115
- (id)retain;	// IMP=0x000000000008410c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000084103
- (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000840fa

@end

