//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITextSelectionRect.h"

@class NSValue, UIColor;

__attribute__((visibility("hidden")))
@interface _UITextUnderlineRect : UITextSelectionRect
{
    NSValue *_transformValue;	// 24 = 0x18
    UIColor *_underlineColor;	// 32 = 0x20
    long long _underlineType;	// 40 = 0x28
    struct CGRect _rect;	// 48 = 0x30
}

+ (id)underlineRectWithRect:(struct CGRect)arg1 offset:(double)arg2 transform:(id)arg3;	// IMP=0x0060000000e86d5f
- (void).cxx_destruct;	// IMP=0x0000000000e86f8a
@property(nonatomic) long long underlineType; // @synthesize underlineType=_underlineType;
@property(retain, nonatomic) UIColor *underlineColor; // @synthesize underlineColor=_underlineColor;
@property(retain, nonatomic) NSValue *transformValue; // @synthesize transformValue=_transformValue;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
- (id)description;	// IMP=0x0000000000e86e26
- (id)_transform;	// IMP=0x0000000000e86e11
@property(readonly, nonatomic) struct CGRect fullRect;

@end

