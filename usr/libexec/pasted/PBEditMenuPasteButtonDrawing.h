//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UISTextParagraphDrawing, UISVectorGlyphDrawing;

@interface PBEditMenuPasteButtonDrawing : NSObject
{
    UISTextParagraphDrawing *_titleDrawing;	// 8 = 0x8
    struct CGPoint _titleOffset;	// 16 = 0x10
    UISVectorGlyphDrawing *_glyph;	// 32 = 0x20
    struct CGPoint _glyphOffset;	// 40 = 0x28
    struct CGSize _size;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000021667
- (void)drawInContext:(struct CGContext *)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x00100000000215c8
@property(readonly, nonatomic) struct CGSize drawingSize;
- (void)dealloc;	// IMP=0x0010000000021561
- (id)initWithStyle:(id)arg1 tag:(id)arg2;	// IMP=0x0010000000020e73

// Remaining properties
@property(readonly, nonatomic) struct CGRect alignmentRect;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

