//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDCollection, EDColorsCollection, EDContentFormatsCollection, EDFontsCollection, EDLinksCollection, EDStylesCollection, EDTableStylesCollection;

__attribute__((visibility("hidden")))
@interface EDResources : NSObject
{
    EDCollection *mStrings;	// 8 = 0x8
    EDContentFormatsCollection *mContentFormats;	// 16 = 0x10
    EDFontsCollection *mFonts;	// 24 = 0x18
    EDCollection *mAlignmentInfos;	// 32 = 0x20
    EDStylesCollection *mStyles;	// 40 = 0x28
    EDColorsCollection *mColors;	// 48 = 0x30
    EDColorsCollection *mThemes;	// 56 = 0x38
    EDCollection *mNames;	// 64 = 0x40
    EDLinksCollection *mLinks;	// 72 = 0x48
    EDCollection *mBorders;	// 80 = 0x50
    EDCollection *mBorder;	// 88 = 0x58
    EDCollection *mFills;	// 96 = 0x60
    EDCollection *mDifferentialStyles;	// 104 = 0x68
    EDTableStylesCollection *mTableStyles;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000000003a63e9
- (id)description;	// IMP=0x00000000003a63ab
- (id)tableStyles;	// IMP=0x00000000001bd79c
- (id)differentialStyles;	// IMP=0x000000000014f5dd
- (id)fills;	// IMP=0x000000000011caeb
- (id)border;	// IMP=0x000000000011c1a9
- (id)borders;	// IMP=0x000000000011c6ff
- (id)links;	// IMP=0x000000000011ed1f
- (id)names;	// IMP=0x000000000011eef1
- (id)themes;	// IMP=0x00000000001b9e94
- (id)colors;	// IMP=0x00000000001354a2
- (id)styles;	// IMP=0x000000000011a778
- (id)alignmentInfos;	// IMP=0x000000000011b910
- (id)fonts;	// IMP=0x000000000011802c
- (id)contentFormats;	// IMP=0x0000000000119048
- (id)strings;	// IMP=0x000000000011f0bc
- (id)initWithStringOptimization:(_Bool)arg1;	// IMP=0x00000000001150e7
- (void)setThemes:(id)arg1;	// IMP=0x00000000002033c4
- (void)setColors:(id)arg1;	// IMP=0x000000000011da6d

@end

