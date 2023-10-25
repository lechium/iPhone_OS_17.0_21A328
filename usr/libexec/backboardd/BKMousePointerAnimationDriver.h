//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface BKMousePointerAnimationDriver : NSObject
{
    struct CGPoint _relativeTranslation;	// 8 = 0x8
    struct CGPoint _currentTranslation;	// 24 = 0x18
}

@property(readonly, nonatomic) struct CGPoint currentTranslation; // @synthesize currentTranslation=_currentTranslation;
@property(readonly, nonatomic) struct CGPoint relativeTranslation; // @synthesize relativeTranslation=_relativeTranslation;
@property(readonly, nonatomic, getter=isComplete) _Bool complete;
- (void)applyForTime:(double)arg1;	// IMP=0x00100000000949da
- (id)initWithRelativeTranslation:(struct CGPoint)arg1;	// IMP=0x001000000009497a

@end
