//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SUUIPhysicalCirclesAnimationRequest : NSObject
{
    long long _animationType;	// 8 = 0x8
    CDUnknownBlockType _completionBlock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000025e1bb
@property(nonatomic) long long animationType; // @synthesize animationType=_animationType;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000025e13b
- (void)_setCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000025e101
- (void)finishAnimation;	// IMP=0x000000000025e0cd

@end
