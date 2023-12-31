//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRCFileUnlinker : NSObject
{
    _Atomic int _suspendCount;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_cachePurgeSource;	// 24 = 0x18
    NSString *_unlinkRootPath;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000232d95
- (_Bool)renameAndUnlinkInBackgroundItemAt:(int)arg1 path:(id)arg2;	// IMP=0x000000000023244e
- (void)forcePurgeWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000023237c
- (void)_purge;	// IMP=0x0000000000232066
- (_Bool)renameAndUnlinkInBackgroundItemAtPath:(id)arg1;	// IMP=0x000000000023204c
- (void)suspend;	// IMP=0x0000000000231f83
- (void)resume;	// IMP=0x0000000000231dd7
- (void)dealloc;	// IMP=0x0000000000231d54
- (id)initWithCacheDirPath:(id)arg1;	// IMP=0x0000000000231ac2

@end

