//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UITextMagnifierCaret
{
    double _yOffset;	// 112 = 0x70
    struct CGPoint _offset;	// 120 = 0x78
}

+ (Class)renderClass;	// IMP=0x006000000138de9f
+ (id)activeCaretMagnifier;	// IMP=0x006000000138de8e
+ (id)sharedCaretMagnifier;	// IMP=0x006000000138dd50
@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
- (double)offsetFromMagnificationPoint;	// IMP=0x000000000138e7d1
- (_Bool)isHorizontal;	// IMP=0x000000000138e7c9
- (void)beginMagnifyingTarget:(id)arg1 text:(id)arg2 magnificationPoint:(struct CGPoint)arg3 offset:(struct CGPoint)arg4 animated:(_Bool)arg5;	// IMP=0x000000000138e6ce
- (void)updateFrameAndOffset;	// IMP=0x000000000138e448
- (void)remove;	// IMP=0x000000000138e3e4
- (void)zoomDownAnimation;	// IMP=0x000000000138e0bb
- (void)zoomUpAnimation;	// IMP=0x000000000138df8b
- (_Bool)terminalPointPlacedCarefully;	// IMP=0x000000000138df26
- (void)setAnimationPoint:(struct CGPoint)arg1;	// IMP=0x000000000138df14
- (struct CGPoint)animationPoint;	// IMP=0x000000000138df02
- (id)initWithFrame;	// IMP=0x000000000138deb0

@end

