//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITapGestureRecognizer.h"

__attribute__((visibility("hidden")))
@interface _UIBarTapGestureRecognizer : UITapGestureRecognizer
{
    _Bool _failWhenTappingInBars;	// 16 = 0x10
    long long _tapCategory;	// 24 = 0x18
}

@property(nonatomic) _Bool failWhenTappingInBars; // @synthesize failWhenTappingInBars=_failWhenTappingInBars;
@property(readonly, nonatomic) long long tapCategory; // @synthesize tapCategory=_tapCategory;
- (id)description;	// IMP=0x000000000020427e
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000002041ce
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000204110
- (long long)_categoryForTapLocation:(struct CGPoint)arg1;	// IMP=0x0000000000203e9f
- (void)_setDelegate:(id)arg1;	// IMP=0x0000000000203dbc
- (void)setDelegate:(id)arg1;	// IMP=0x0000000000203d90
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000000203d0b

@end

