//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIWindow;

__attribute__((visibility("hidden")))
@interface _UIUpdateCycleDebugOverlay : NSObject
{
    UIWindow *_windowWithBorder;	// 8 = 0x8
}

+ (id)instance;	// IMP=0x001000000018d9b1
- (void).cxx_destruct;	// IMP=0x000000000018dd52
- (void)removeBorderFromWindow:(id)arg1;	// IMP=0x000000000018dc65
- (void)addBorderToWindow:(id)arg1;	// IMP=0x000000000018db5f
- (void)_updateCompleted;	// IMP=0x000000000018daa3

@end

