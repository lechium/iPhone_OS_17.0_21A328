//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GQHTextBox
{
}

+ (int)outputInnerSandbagsForFrame:(struct CGRect)arg1 drawable:(id)arg2 state:(id)arg3;	// IMP=0x00800000000376bd
+ (_Bool)outputWrapSandbagsForFrame:(struct CGRect)arg1 columnCount:(int)arg2 drawable:(id)arg3 state:(id)arg4 isPageFrame:(_Bool)arg5;	// IMP=0x0080000000037072
+ (int)outputWrapSandbagsForFrame:(struct CGRect)arg1 columnCount:(int)arg2 drawable:(id)arg3 state:(id)arg4;	// IMP=0x008000000003703e
+ (void)createExternalWrapSandbagStyles:(id)arg1;	// IMP=0x0080000000036f9e
+ (void)mapScaledImageFill:(id)arg1 style:(id)arg2 size:(struct CGSize)arg3;	// IMP=0x0080000000036dd8
+ (_Bool)styleNeedsImageFillMapping:(id)arg1;	// IMP=0x0080000000036d86
+ (void)mapLayout:(id)arg1 style:(id)arg2 state:(id)arg3;	// IMP=0x00800000000368bf
+ (const char *)name;	// IMP=0x00800000000368b2
+ (int)handleLayoutStorage:(id)arg1 state:(id)arg2;	// IMP=0x0080000000036674
+ (int)handleShapeText:(id)arg1 boundsRect:(struct CGRect)arg2 floating:(_Bool)arg3 state:(id)arg4;	// IMP=0x0080000000036033
+ (void)mapStyle:(id)arg1 style:(id)arg2 state:(id)arg3;	// IMP=0x0080000000035f90
+ (int)outputWrapSandbagsForShape:(id)arg1 layoutStyle:(id)arg2 state:(id)arg3;	// IMP=0x0080000000037df7
+ (int)outputInnerSandbagsForShape:(id)arg1 layoutStyle:(id)arg2 state:(id)arg3;	// IMP=0x0080000000037d2c
+ (void)outputSandbag:(id)arg1 state:(id)arg2;	// IMP=0x0080000000037c03

@end

