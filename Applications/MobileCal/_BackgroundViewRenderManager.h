//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSOperationQueue;

@interface _BackgroundViewRenderManager : NSObject
{
    NSOperationQueue *_queue;	// 8 = 0x8
    NSMutableSet *_viewsInQueue;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x0040000000049bce
- (void).cxx_destruct;	// IMP=0x002000000004a238
- (void)cancelAllRendering;	// IMP=0x001000000004a1c5
- (void)removeViewFromQueue:(id)arg1;	// IMP=0x0010000000049f4c
- (void)addViewToQueue:(id)arg1;	// IMP=0x0010000000049cae
- (id)init;	// IMP=0x0010000000049c23

@end
