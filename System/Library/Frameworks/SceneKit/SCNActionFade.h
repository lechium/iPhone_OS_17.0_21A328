//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCNAction.h"

__attribute__((visibility("hidden")))
@interface SCNActionFade : SCNAction
{
    struct SCNCActionFade *_mycaction;	// 8 = 0x8
}

+ (id)fadeOutWithDuration:(double)arg1;	// IMP=0x0060000000151661
+ (id)fadeInWithDuration:(double)arg1;	// IMP=0x00600000001515ff
+ (id)fadeOpacityTo:(double)arg1 duration:(double)arg2;	// IMP=0x006000000015158c
+ (id)fadeOpacityBy:(double)arg1 duration:(double)arg2;	// IMP=0x0060000000151500
+ (_Bool)supportsSecureCoding;	// IMP=0x006000000015147c
- (id)reversedAction;	// IMP=0x000000000015174f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001516c4
- (id)parameters;	// IMP=0x0000000000151484
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000015134c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000015115d
- (id)init;	// IMP=0x0000000000151062

@end

