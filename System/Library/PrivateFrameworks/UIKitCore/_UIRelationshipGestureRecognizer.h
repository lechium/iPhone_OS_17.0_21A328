//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIGestureRecognizer.h"

__attribute__((visibility("hidden")))
@interface _UIRelationshipGestureRecognizer : UIGestureRecognizer
{
    _Bool _succeedsOnTouchesEnded;	// 16 = 0x10
    _Bool _failsOnTouchesCancelled;	// 17 = 0x11
}

@property(nonatomic) _Bool failsOnTouchesCancelled; // @synthesize failsOnTouchesCancelled=_failsOnTouchesCancelled;
@property(nonatomic) _Bool succeedsOnTouchesEnded; // @synthesize succeedsOnTouchesEnded=_succeedsOnTouchesEnded;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000009a034c
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000009a030e
- (void)_succeed;	// IMP=0x00000000009a02f7
- (void)_fail;	// IMP=0x00000000009a02e0
- (_Bool)_isGestureType:(long long)arg1;	// IMP=0x00000000009a02d3
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x00000000009a0294

@end

