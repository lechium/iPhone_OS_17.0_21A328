//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIButton.h>

__attribute__((visibility("hidden")))
@interface CAUITransportButton : UIButton
{
    int drawingStyle;	// 8 = 0x8
    struct CGColor *fillColor;	// 16 = 0x10
    struct CGRect imageRect;	// 24 = 0x18
}

+ (Class)layerClass;	// IMP=0x006000000000d86e
- (struct CGPath *)newPathRefForStyle:(int)arg1;	// IMP=0x000000000000df6f
- (void)flash;	// IMP=0x000000000000ddcc
@property struct CGColor *fillColor;
@property int drawingStyle;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000000d9ec
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000000d95b
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000000d87f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000000d60f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000d384

@end
