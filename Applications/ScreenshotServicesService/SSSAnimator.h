//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIViewPropertyAnimator;
@protocol UIDragAnimating;

@interface SSSAnimator : NSObject
{
    UIViewPropertyAnimator *_propertyAnimator;	// 8 = 0x8
    id <UIDragAnimating> _dragAnimating;	// 16 = 0x10
}

+ (id)animatorWithDragAnimating:(id)arg1;	// IMP=0x004000000005e11f
+ (id)animatorWithPropertyAnimator:(id)arg1;	// IMP=0x001000000005e0ce
- (void).cxx_destruct;	// IMP=0x002000000005e2fe
@property(nonatomic) __weak id <UIDragAnimating> dragAnimating; // @synthesize dragAnimating=_dragAnimating;
@property(nonatomic) __weak UIViewPropertyAnimator *propertyAnimator; // @synthesize propertyAnimator=_propertyAnimator;
- (void)addCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000005e210
- (void)addAnimations:(CDUnknownBlockType)arg1;	// IMP=0x001000000005e170

@end

