//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol UIVectorOperatable;

__attribute__((visibility("hidden")))
@interface UIViewFrictionBounceAnimation : NSObject
{
    id _stableTarget;	// 8 = 0x8
    id _intermediate;	// 16 = 0x10
    id _current;	// 24 = 0x18
    id _epsilon;	// 32 = 0x20
    double _deceleration;	// 40 = 0x28
    double _bounce;	// 48 = 0x30
    id <UIVectorOperatable> _targetValue;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000015b1e08
@property(retain, nonatomic) id <UIVectorOperatable> targetValue; // @synthesize targetValue=_targetValue;
- (void)setVelocity:(id)arg1;	// IMP=0x00000000015b1df1
- (id)velocity;	// IMP=0x00000000015b1ddb
- (_Bool)isStable;	// IMP=0x00000000015b1d85
- (id)initWithCurrent:(id)arg1 target:(id)arg2;	// IMP=0x00000000015b1c43
- (id)updatedTarget;	// IMP=0x00000000015b1c35
- (id)stepWithDelta:(double)arg1;	// IMP=0x00000000015b1b4a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
