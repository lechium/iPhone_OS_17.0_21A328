//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface OABShapeManager
{
    void *mShape;	// 40 = 0x28
}

- (_Bool)hidden;	// IMP=0x000000000002d9c2
- (_Bool)textPathStrikethrough;	// IMP=0x00000000003026b3
- (_Bool)textPathSmallcaps;	// IMP=0x00000000001553dc
- (_Bool)textPathUnderline;	// IMP=0x000000000030264e
- (_Bool)textPathItalic;	// IMP=0x0000000000155346
- (_Bool)textPathBold;	// IMP=0x00000000001552b0
- (id)textPathFontFamily;	// IMP=0x0000000000155151
- (int)textPathFontSize;	// IMP=0x000000000015521a
- (int)textPathTextAlignment;	// IMP=0x0000000000154d5a
- (id)textPathUnicodeString;	// IMP=0x0000000000154e0f
- (_Bool)isTextPath;	// IMP=0x0000000000028caf
- (_Bool)isShadowed;	// IMP=0x00000000000294b5
- (_Bool)isStroked;	// IMP=0x000000000002946c
- (_Bool)isFilled;	// IMP=0x0000000000028c66
- (_Bool)isShadowOK;	// IMP=0x0000000000152c77
- (_Bool)isStrokeOK;	// IMP=0x0000000000103c5d
- (_Bool)isFillOK;	// IMP=0x00000000001042ba
- (id)initWithShape:(void *)arg1;	// IMP=0x000000000023d2c0
- (id)initWithShape:(void *)arg1 masterShape:(void *)arg2;	// IMP=0x0000000000028bec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
