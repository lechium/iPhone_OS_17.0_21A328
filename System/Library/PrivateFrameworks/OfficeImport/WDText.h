//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, WDDocument, WDTableCell;

__attribute__((visibility("hidden")))
@interface WDText : NSObject
{
    NSMutableArray *mBlocks;	// 8 = 0x8
    int mTextType;	// 16 = 0x10
    WDDocument *mDocument;	// 24 = 0x18
    WDTableCell *mTableCell;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000004067ff
@property(readonly) __weak WDDocument *document; // @synthesize document=mDocument;
- (id)description;	// IMP=0x00000000004067c1
- (id)content;	// IMP=0x000000000040667f
- (_Bool)isEmpty;	// IMP=0x00000000004065c2
- (id)newRunIterator;	// IMP=0x0000000000406564
- (id)runIterator;	// IMP=0x00000000004064e7
- (id)newBlockIterator;	// IMP=0x00000000004064b8
- (id)blockIterator;	// IMP=0x0000000000406481
- (int)tableNestingLevel;	// IMP=0x00000000000d6b65
- (void)removeLastBlock;	// IMP=0x0000000000100dd3
- (void)removeLastCharacter:(unsigned short)arg1;	// IMP=0x00000000000e9ff2
- (id)addTableAtIndex:(int)arg1;	// IMP=0x0000000000406412
- (id)addTable;	// IMP=0x00000000000e63aa
- (id)paragraphs;	// IMP=0x000000000040626a
- (id)firstParagraph;	// IMP=0x0000000000406091
- (id)addParagraphAtIndex:(int)arg1;	// IMP=0x0000000000406022
- (id)addParagraph;	// IMP=0x00000000000d8082
@property(readonly) __weak WDTableCell *tableCell; // @synthesize tableCell=mTableCell;
- (int)textType;	// IMP=0x00000000000d73ca
- (void)addBlock:(id)arg1;	// IMP=0x000000000040600c
- (unsigned long long)indexOfBlock:(id)arg1;	// IMP=0x0000000000405ff6
- (id)lastBlock;	// IMP=0x00000000001acf43
- (id)blockAt:(unsigned long long)arg1;	// IMP=0x00000000000ee928
- (unsigned long long)blockCount;	// IMP=0x00000000000ed10e
- (id)blocks;	// IMP=0x0000000000405fe8
- (id)initWithDocument:(id)arg1 textType:(int)arg2 tableCell:(id)arg3;	// IMP=0x00000000000c3358
- (id)initWithDocument:(id)arg1 textType:(int)arg2;	// IMP=0x00000000000c3343

@end

