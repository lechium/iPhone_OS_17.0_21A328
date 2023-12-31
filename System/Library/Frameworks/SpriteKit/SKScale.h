//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKAction.h"

__attribute__((visibility("hidden")))
@interface SKScale : SKAction
{
    struct SKCScale *_mycaction;	// 8 = 0x8
}

+ (id)scaleYTo:(double)arg1 duration:(double)arg2;	// IMP=0x0060000000027920
+ (id)scaleXTo:(double)arg1 duration:(double)arg2;	// IMP=0x006000000002788b
+ (id)scaleXTo:(double)arg1 y:(double)arg2 duration:(double)arg3;	// IMP=0x00600000000277f9
+ (id)scaleToSize:(struct CGSize)arg1 duration:(double)arg2;	// IMP=0x006000000002775d
+ (id)scaleTo:(double)arg1 duration:(double)arg2;	// IMP=0x006000000002773e
+ (id)scaleYBy:(double)arg1 duration:(double)arg2;	// IMP=0x0060000000027686
+ (id)scaleXBy:(double)arg1 duration:(double)arg2;	// IMP=0x00600000000275ce
+ (id)scaleXBy:(double)arg1 y:(double)arg2 duration:(double)arg3;	// IMP=0x0060000000027510
+ (id)scaleBy:(double)arg1 duration:(double)arg2;	// IMP=0x00600000000274f1
+ (_Bool)supportsSecureCoding;	// IMP=0x006000000002695a
- (id)reversedAction;	// IMP=0x0000000000027a45
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000279b5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000027076
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000026a8a
- (id)init;	// IMP=0x0000000000026962

@end

