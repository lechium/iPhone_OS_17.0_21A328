//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CPColumn
{
    _Bool hasCentredParagraph;	// 161 = 0xa1
    _Bool hasColumnBreak;	// 162 = 0xa2
    double maxLeftPad;	// 168 = 0xa8
    double maxRightPad;	// 176 = 0xb0
    double maxRight;	// 184 = 0xb8
    double minLeft;	// 192 = 0xc0
    _Bool complete;	// 200 = 0xc8
}

@property _Bool complete; // @synthesize complete;
- (id)description;	// IMP=0x0000000000561529
- (double)selectionBottom;	// IMP=0x00000000005614df
- (struct CGRect)paddedBounds;	// IMP=0x0000000000561449
- (void)setMaxRightPad:(double)arg1;	// IMP=0x000000000056135f
- (double)maxRightPad;	// IMP=0x000000000056134d
- (void)setMaxLeftPad:(double)arg1;	// IMP=0x0000000000561258
- (double)maxLeftPad;	// IMP=0x0000000000561246
- (double)rightPad;	// IMP=0x000000000056112d
- (double)leftPad;	// IMP=0x00000000005610f2
- (void)setHasCentredParagraph:(_Bool)arg1;	// IMP=0x00000000005610e2
- (_Bool)hasCentredParagraph;	// IMP=0x00000000005610d2
- (double)bottomBaseline;	// IMP=0x0000000000561074
- (struct CGRect)columnBounds;	// IMP=0x0000000000561041
- (_Bool)isShapeRegion;	// IMP=0x0000000000561039
- (_Bool)isImageRegion;	// IMP=0x0000000000561031
- (void)setIsImageRegion:(_Bool)arg1;	// IMP=0x000000000056102b
- (_Bool)isRowRegion;	// IMP=0x0000000000561023
- (_Bool)isGraphicalRegion;	// IMP=0x000000000056101b
- (_Bool)isBoxRegion;	// IMP=0x0000000000561013
- (void)setHasColumnBreak:(_Bool)arg1;	// IMP=0x0000000000561003
- (void)accept:(id)arg1;	// IMP=0x0000000000560fe8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000560fb9
- (void)dealloc;	// IMP=0x0000000000560f8a
- (id)init;	// IMP=0x0000000000560f0a
- (int)inOrder;	// IMP=0x00000000005ef681
- (int)outOrder;	// IMP=0x00000000005ef64a

@end
