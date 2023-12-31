//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VideosTransitionFadeAnimator : NSObject
{
    long long _transitionType;	// 8 = 0x8
    double _animationDuration;	// 16 = 0x10
}

@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) long long transitionType; // @synthesize transitionType=_transitionType;
- (double)transitionDuration:(id)arg1;	// IMP=0x000000000017f6bc
- (void)animateTransition:(id)arg1;	// IMP=0x000000000017f207
- (id)initWithTransitionType:(long long)arg1 andDuration:(double)arg2;	// IMP=0x000000000017f1bb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

