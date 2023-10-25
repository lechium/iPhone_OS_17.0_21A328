//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, WDParagraphProperties;

__attribute__((visibility("hidden")))
@interface WDParagraph
{
    WDParagraphProperties *mProperties;	// 16 = 0x10
    NSMutableArray *mRuns;	// 24 = 0x18
    unsigned long long identifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000003f5326
@property unsigned long long identifier; // @synthesize identifier;
- (id)description;	// IMP=0x00000000003f52c6
- (_Bool)isEmpty;	// IMP=0x00000000003f51de
- (int)blockType;	// IMP=0x00000000000ea0df
- (id)newRunIterator;	// IMP=0x00000000003f51a8
- (id)runIterator;	// IMP=0x00000000003f516a
- (void)removeLastCharacter:(unsigned short)arg1;	// IMP=0x00000000000dab66
- (float)maxReflectionDistance;	// IMP=0x00000000003f4fa3
- (id)addMath:(id)arg1;	// IMP=0x00000000003f4f0d
- (id)addDateTime:(id)arg1;	// IMP=0x00000000003f4e77
- (id)addBookmark:(id)arg1 type:(int)arg2;	// IMP=0x00000000000dee84
- (id)addBookmark;	// IMP=0x00000000001a5f92
- (id)addSpecialCharacter;	// IMP=0x000000000015cbd8
- (id)addSymbol;	// IMP=0x00000000001d196f
- (id)addHyperlinkFieldMarker:(int)arg1;	// IMP=0x00000000003f4e18
- (id)addHyperlinkFieldMarker;	// IMP=0x00000000003f4da7
- (id)addFieldMarker:(int)arg1;	// IMP=0x00000000001af5e9
- (id)addFieldMarker;	// IMP=0x00000000000de6f2
- (id)addEndnote;	// IMP=0x00000000001f87ba
- (id)addFootnote;	// IMP=0x0000000000166111
- (id)addAnnotation:(int)arg1;	// IMP=0x0000000000221d0c
- (id)addAnnotation:(int)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000003f4cfc
- (id)addCharacterRun;	// IMP=0x00000000000da0c6
- (void)clearRuns;	// IMP=0x00000000003f4cdb
- (void)removeRun:(id)arg1;	// IMP=0x00000000003f4cbe
- (void)insertRun:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000003f4ca1
- (void)addRun:(id)arg1;	// IMP=0x00000000000de5e2
- (id)runAt:(unsigned long long)arg1;	// IMP=0x00000000000dab21
- (unsigned long long)runCount;	// IMP=0x00000000000dab04
- (id)runs;	// IMP=0x00000000003f4c8c
- (void)clearProperties;	// IMP=0x00000000003f4c6b
- (id)properties;	// IMP=0x00000000000d84b6
- (id)initWithText:(id)arg1 string:(id)arg2;	// IMP=0x00000000003f4b5b
- (id)initWithText:(id)arg1;	// IMP=0x00000000000d80ec
- (_Bool)isContinuationOf:(id)arg1;	// IMP=0x0000000000101013
- (_Bool)isTextFrame;	// IMP=0x00000000000eeb86

@end
