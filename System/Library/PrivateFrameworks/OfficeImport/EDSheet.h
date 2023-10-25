//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EDColorReference, EDHeaderFooter, EDPageSetup, EDProcessors, EDString, EDWarnings, EDWorkbook, ESDContainer, NSMutableArray, OITSUPointerKeyDictionary;

__attribute__((visibility("hidden")))
@interface EDSheet
{
    EDString *mName;	// 24 = 0x18
    _Bool mHidden;	// 32 = 0x20
    _Bool mDisplayFormulas;	// 33 = 0x21
    _Bool mDisplayGridlines;	// 34 = 0x22
    _Bool mIsDialogSheet;	// 35 = 0x23
    EDColorReference *mDefaultGridlineColorReference;	// 40 = 0x28
    EDHeaderFooter *mHeaderFooter;	// 48 = 0x30
    EDPageSetup *mPageSetup;	// 56 = 0x38
    NSMutableArray *mDrawables;	// 64 = 0x40
    OITSUPointerKeyDictionary *mTextBoxMap;	// 72 = 0x48
    OITSUPointerKeyDictionary *mCommentMap;	// 80 = 0x50
    EDProcessors *mProcessors;	// 88 = 0x58
    EDWarnings *mWarnings;	// 96 = 0x60
    ESDContainer *mEscherDrawing;	// 104 = 0x68
    EDWorkbook *mWorkbook;	// 112 = 0x70
}

+ (id)sheetWithWorkbook:(id)arg1;	// IMP=0x00600000003a797d
- (void).cxx_destruct;	// IMP=0x00000000003a7cb6
@property(readonly) __weak EDWorkbook *workbook; // @synthesize workbook=mWorkbook;
@property(nonatomic) _Bool isDialogSheet; // @synthesize isDialogSheet=mIsDialogSheet;
- (id)description;	// IMP=0x00000000003a7c5f
- (id)warnings;	// IMP=0x000000000023325a
- (void)applyProcessors;	// IMP=0x000000000012e2a4
- (id)processors;	// IMP=0x0000000000123bdf
- (void)setEDComment:(id)arg1 forShape:(id)arg2;	// IMP=0x00000000003a7c42
- (id)edCommentForShape:(id)arg1;	// IMP=0x00000000003a7c15
- (unsigned long long)commentCount;	// IMP=0x00000000003a7bf8
- (void)setEDTextBox:(id)arg1 forShape:(id)arg2;	// IMP=0x00000000003a7bdb
- (id)edTextBoxForShape:(id)arg1;	// IMP=0x00000000003a7bae
- (id)drawables;	// IMP=0x00000000003a7b99
- (void)removeDrawableAtIndex:(unsigned long long)arg1;	// IMP=0x00000000003a7b7c
- (void)addDrawable:(id)arg1;	// IMP=0x000000000013ec4a
- (id)drawableAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001457dd
- (unsigned long long)drawableCount;	// IMP=0x00000000001309b0
- (void)setPageSetup:(id)arg1;	// IMP=0x0000000000124ce6
- (id)pageSetup;	// IMP=0x00000000001c3761
- (void)setHeaderFooter:(id)arg1;	// IMP=0x0000000000124b87
- (id)headerFooter;	// IMP=0x00000000003a7b62
- (void)setDefaultGridlineColor:(id)arg1;	// IMP=0x00000000003a7a88
- (id)defaultGridlineColor;	// IMP=0x00000000003a7a6b
- (void)setDisplayGridlines:(_Bool)arg1;	// IMP=0x000000000012c18b
- (_Bool)isDisplayGridlines;	// IMP=0x0000000000131c1b
- (void)setDisplayFormulas:(_Bool)arg1;	// IMP=0x000000000012c17b
- (_Bool)isDisplayFormulas;	// IMP=0x000000000013009b
- (void)setHidden:(_Bool)arg1;	// IMP=0x000000000012011b
- (_Bool)isHidden;	// IMP=0x00000000001205cb
- (void)setName:(id)arg1;	// IMP=0x0000000000120091
- (id)name;	// IMP=0x000000000012ef7c
- (void)doneWithNonRowContent;	// IMP=0x00000000003a79eb
- (void)dealloc;	// IMP=0x0000000000137032
- (id)initWithWorkbook:(id)arg1;	// IMP=0x000000000011fb80
- (void)reduceMemoryIfPossible;	// IMP=0x00000000003a7d7e
- (void)setEscherDrawing:(id)arg1;	// IMP=0x00000000003a7d99
- (id)escherDrawing;	// IMP=0x00000000003a7d84
- (id)drawableEnumerator;	// IMP=0x00000000003a7dd8
- (void)setDefaultGridlineColorReference:(id)arg1;	// IMP=0x000000000012003e
- (id)defaultGridlineColorReference;	// IMP=0x00000000003a7db9
- (void)teardown;	// IMP=0x0000000000136e93
- (void)setup;	// IMP=0x000000000011fe4d

@end
