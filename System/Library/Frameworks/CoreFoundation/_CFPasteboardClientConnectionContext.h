//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _CFPasteboardClientConnectionContext : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    struct __CFArray *_cleanupBlocks;	// 16 = 0x10
}

- (void)cleanup;	// IMP=0x000000000010bd5a
- (void)addCleanupBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000010bc76
- (void)dealloc;	// IMP=0x000000000010bc14
- (id)init;	// IMP=0x000000000010bb92

@end

