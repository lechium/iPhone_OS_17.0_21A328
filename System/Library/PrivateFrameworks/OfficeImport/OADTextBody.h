//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, OADTextBodyProperties, OADTextListStyle;

__attribute__((visibility("hidden")))
@interface OADTextBody : NSObject
{
    OADTextBodyProperties *mProperties;	// 8 = 0x8
    NSMutableArray *mParagraphs;	// 16 = 0x10
    OADTextListStyle *mTextListStyle;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000032737d
- (id)description;	// IMP=0x000000000032733f
- (id)plainText;	// IMP=0x00000000003271f0
- (_Bool)isSimilarToTextBody:(id)arg1;	// IMP=0x0000000000327099
- (_Bool)propagateActualTextStyleToTextListStyle;	// IMP=0x0000000000326dd1
- (void)removeUnnecessaryOverrides;	// IMP=0x000000000002e9b6
- (void)flattenProperties;	// IMP=0x0000000000326cdd
- (_Bool)isEmpty;	// IMP=0x0000000000107c91
- (void)removeLastParagraphIfEmpty;	// IMP=0x0000000000326c46
- (void)removeLeadingNewlines;	// IMP=0x0000000000326b80
- (void)removeTrailingNewlines;	// IMP=0x0000000000326abc
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1 ownTextListStyle:(_Bool)arg2;	// IMP=0x000000000032689e
- (void)setParentTextListStyle:(id)arg1;	// IMP=0x000000000002e690
- (void)applyTextListStyle:(id)arg1;	// IMP=0x0000000000326817
- (id)overrideTextListStyle;	// IMP=0x0000000000039013
- (id)textListStyle;	// IMP=0x0000000000038957
- (id)firstParagraphEffects;	// IMP=0x0000000000326739
- (unsigned long long)newLineCount;	// IMP=0x00000000003265e1
- (void)removeAllParagraphs;	// IMP=0x00000000003265cb
- (id)addParagraph;	// IMP=0x000000000002b04e
- (id)paragraphAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000aaf8c
- (unsigned long long)nonEmptyParagraphCount;	// IMP=0x0000000000326519
- (unsigned long long)paragraphCount;	// IMP=0x00000000000aaf76
- (void)setProperties:(id)arg1;	// IMP=0x000000000023d2af
- (id)properties;	// IMP=0x000000000002d982
- (id)init;	// IMP=0x00000000000288bc
- (void)addParagraphsFromTextBody:(id)arg1;	// IMP=0x00000000003444eb
- (id)findFirstTextRunOfClass:(Class)arg1;	// IMP=0x000000000002e3d0

@end
