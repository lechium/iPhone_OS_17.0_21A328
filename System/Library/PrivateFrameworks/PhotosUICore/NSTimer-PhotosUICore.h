//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSTimer.h>

@interface NSTimer (PhotosUICore)
+ (void)blockInvoke:(id)arg1;	// IMP=0x00800000008a7bb7
+ (id)px_scheduledTimerWithTimeInterval:(double)arg1 repeats:(_Bool)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00800000008a7b35
+ (id)px_timerWithFireDate:(id)arg1 interval:(double)arg2 repeats:(_Bool)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x00800000008a7a78
+ (id)px_timerWithTimeInterval:(double)arg1 weakTarget:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5;	// IMP=0x00800000008a79a5
+ (id)px_scheduledTimerWithTimeInterval:(double)arg1 weakTarget:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(_Bool)arg5;	// IMP=0x00800000008a78d2
@end

