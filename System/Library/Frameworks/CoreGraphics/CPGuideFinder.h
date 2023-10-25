//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPCluster, CPZone, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CPGuideFinder : NSObject
{
    CPZone *contentZone;	// 8 = 0x8
    unsigned int countOfWordsInZone;	// 16 = 0x10
    double *anchorArray;	// 24 = 0x18
    double *rightHandSideArray;	// 32 = 0x20
    CDStruct_8db92b66 *crossingWordArray;	// 40 = 0x28
    CPCluster *anchors;	// 48 = 0x30
    CPCluster *rightHandSides;	// 56 = 0x38
    double medianFontSizeOfFirstCharacter;	// 64 = 0x40
    double medianFontSizeOfLastCharacter;	// 72 = 0x48
    NSMutableArray *gutters;	// 80 = 0x50
    NSMutableArray *leftGuides;	// 88 = 0x58
    NSMutableArray *rightGuides;	// 96 = 0x60
}

+ (void)reclusterBetweenGuides:(id)arg1;	// IMP=0x001000000013b721
+ (void)reclusterPreservingAlignment:(id)arg1;	// IMP=0x001000000013b5d7
+ (_Bool)gutterSeparates:(id)arg1 from:(id)arg2;	// IMP=0x001000000013b57d
+ (_Bool)guideSeparates:(id)arg1 from:(id)arg2;	// IMP=0x001000000013b523
- (id)rightGuides;	// IMP=0x000000000013ab5c
- (_Bool)hasRightGuides;	// IMP=0x000000000013ab36
- (id)leftGuides;	// IMP=0x000000000013ab2c
- (_Bool)hasLeftGuides;	// IMP=0x000000000013ab06
- (id)gutters;	// IMP=0x000000000013aafc
- (_Bool)hasGutters;	// IMP=0x000000000013aad6
- (void)markTextLines;	// IMP=0x000000000013a90d
- (void)splitTextLines;	// IMP=0x000000000013a8df
- (void)splitTextLinesBetweenBorderWords;	// IMP=0x000000000013a747
- (void)splitTextLinesAtBorderWords;	// IMP=0x000000000013a5e0
- (void)func:(id)arg1 and:(id)arg2 and:(unsigned int)arg3 and:(unsigned int)arg4;	// IMP=0x000000000013a4a3
- (void)findGuides;	// IMP=0x000000000013a3e2
- (void)findGutters;	// IMP=0x000000000013a1ef
- (void)findWordEdgeClusters;	// IMP=0x000000000013a05f
- (void)subdivideRightGuideAt:(unsigned int)arg1;	// IMP=0x0000000000139f40
- (void)subdivideLeftGuideAt:(unsigned int)arg1;	// IMP=0x0000000000139e21
- (void)subdivideGutterFrom:(unsigned int)arg1 to:(unsigned int)arg2;	// IMP=0x0000000000139cc0
- (void)subdivideStripInto:(id)arg1 from:(double)arg2 to:(double)arg3 borderedBy:(CDStruct_8db92b66 *)arg4 ofCount:(unsigned int)arg5 crossedBy:(CDStruct_8db92b66 *)arg6 ofCount:(unsigned int)arg7;	// IMP=0x00000000001395c5
- (void)setAlignForWordWithExtent:(CDStruct_8db92b66 *)arg1 stripArray:(id)arg2 stripMax:(double)arg3;	// IMP=0x000000000013958b
- (_Bool)addStripTo:(id)arg1 bottom:(double)arg2 left:(double)arg3 top:(double)arg4 right:(double)arg5;	// IMP=0x0000000000139493
- (void)getWordEdges;	// IMP=0x000000000013937b
- (double)medianFontSizeOfLastCharacter;	// IMP=0x0000000000139370
- (double)medianFontSizeOfFirstCharacter;	// IMP=0x0000000000139365
- (void)dealloc;	// IMP=0x00000000001392f9
- (void)finalize;	// IMP=0x00000000001392bb
- (void)dispose;	// IMP=0x0000000000139257
- (id)initWithContentZone:(id)arg1;	// IMP=0x00000000001391e0

@end
