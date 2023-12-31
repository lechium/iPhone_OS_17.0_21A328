//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCNAction.h"

__attribute__((visibility("hidden")))
@interface SCNActionMove : SCNAction
{
    struct SCNCActionMove *_mycaction;	// 8 = 0x8
}

+ (id)moveToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;	// IMP=0x0060000000297b71
+ (id)moveTo:(struct SCNVector3)arg1 duration:(double)arg2;	// IMP=0x0060000000297b3c
+ (id)moveByX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;	// IMP=0x0060000000297a65
+ (id)moveBy:(struct SCNVector3)arg1 duration:(double)arg2;	// IMP=0x0060000000297a30
+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000297a28
- (id)parameters;	// IMP=0x0000000000297db8
- (_Bool)isRelative;	// IMP=0x0000000000297da1
- (id)reversedAction;	// IMP=0x0000000000297ce2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000297c36
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000297757
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000029738d
- (id)init;	// IMP=0x00000000002972ae

@end

