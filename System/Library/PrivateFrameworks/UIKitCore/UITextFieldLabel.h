//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UILabel.h"

__attribute__((visibility("hidden")))
@interface UITextFieldLabel : UILabel
{
    _Bool _shouldRenderWithoutTextField;	// 8 = 0x8
}

+ (id)_defaultAttributes;	// IMP=0x0060000001319172
+ (id)defaultFont;	// IMP=0x006000000131913d
@property(nonatomic) _Bool shouldRenderWithoutTextField; // @synthesize shouldRenderWithoutTextField=_shouldRenderWithoutTextField;
- (_Bool)_shouldDrawUnderlinesLikeWebKit;	// IMP=0x0000000001319135
- (void)drawTextInRect:(struct CGRect)arg1;	// IMP=0x0000000001319037
- (void)_defaultDrawTextInRect:(struct CGRect)arg1;	// IMP=0x0000000001318ff7

@end

