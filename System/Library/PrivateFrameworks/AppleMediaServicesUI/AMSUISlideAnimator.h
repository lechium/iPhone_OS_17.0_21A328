//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CASpringAnimation, NSString;

__attribute__((visibility("hidden")))
@interface AMSUISlideAnimator : NSObject
{
    CASpringAnimation *_animation;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000007302f
@property(retain, nonatomic) CASpringAnimation *animation; // @synthesize animation=_animation;
- (void)animateTransition:(id)arg1;	// IMP=0x000000000007297b
- (double)transitionDuration:(id)arg1;	// IMP=0x0000000000072825

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
