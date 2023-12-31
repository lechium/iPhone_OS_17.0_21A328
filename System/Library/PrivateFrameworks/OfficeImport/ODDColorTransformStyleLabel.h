//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ODDFillColorList;

__attribute__((visibility("hidden")))
@interface ODDColorTransformStyleLabel : NSObject
{
    ODDFillColorList *mFillColors;	// 8 = 0x8
    ODDFillColorList *mLineColors;	// 16 = 0x10
    ODDFillColorList *mEffectColors;	// 24 = 0x18
    ODDFillColorList *mTextLineColors;	// 32 = 0x20
    ODDFillColorList *mTextFillColors;	// 40 = 0x28
    ODDFillColorList *mTextEffectColors;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000032eed4
- (void)applyToShapeStyle:(id)arg1 index:(unsigned int)arg2 count:(unsigned int)arg3 state:(id)arg4;	// IMP=0x00000000001e9fce
- (void)setTextEffectColors:(id)arg1;	// IMP=0x00000000001e3ff7
- (id)textEffectColors;	// IMP=0x000000000032eec6
- (void)setTextFillColors:(id)arg1;	// IMP=0x00000000001e3fe6
- (id)textFillColors;	// IMP=0x00000000001ea45c
- (void)setTextLineColors:(id)arg1;	// IMP=0x00000000001e3fd5
- (id)textLineColors;	// IMP=0x000000000032eeb8
- (void)setEffectColors:(id)arg1;	// IMP=0x00000000001e3fc4
- (id)effectColors;	// IMP=0x00000000001ea44e
- (void)setLineColors:(id)arg1;	// IMP=0x00000000001e3fb3
- (id)lineColors;	// IMP=0x00000000001ea432
- (void)setFillColors:(id)arg1;	// IMP=0x00000000001e3fa2
- (id)fillColors;	// IMP=0x00000000001ea305

@end

