//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface CRLPdfTagger : NSObject
{
    _Bool _stateIsValid;	// 8 = 0x8
    NSMutableArray *_contextStack;	// 16 = 0x10
    NSMutableArray *_tagStack;	// 24 = 0x18
    NSMutableArray *_paragraphLevelResolverStack;	// 32 = 0x20
    struct CGContext *_cgContext;	// 40 = 0x28
    unsigned long long _taggingPreventionDepth;	// 48 = 0x30
}

+ (_Bool)shouldMapDrawableRep:(id)arg1;	// IMP=0x004000000056a622
+ (_Bool)isHeaderTag:(int)arg1;	// IMP=0x0010000000569166
+ (_Bool)isHeadingStyle:(id)arg1 headingIndex:(int *)arg2;	// IMP=0x001000000056912f
+ (unsigned long long)indexOfFirstVisibleCharInRange:(struct _NSRange)arg1 ofStorage:(id)arg2;	// IMP=0x0010000000568bb7
- (void).cxx_destruct;	// IMP=0x002000000056b29a
@property(nonatomic) unsigned long long taggingPreventionDepth; // @synthesize taggingPreventionDepth=_taggingPreventionDepth;
@property(nonatomic) struct CGContext *cgContext; // @synthesize cgContext=_cgContext;
- (void)endComment;	// IMP=0x001000000056b1ef
- (void)beginComment;	// IMP=0x001000000056b119
- (void)endFreehandDrawing:(id)arg1;	// IMP=0x001000000056b04b
- (void)beginFreehandDrawing:(id)arg1;	// IMP=0x001000000056af7d
- (void)endDrawable:(id)arg1;	// IMP=0x001000000056af4f
- (void)beginDrawable:(id)arg1;	// IMP=0x001000000056a9a8
- (void)endObject:(id)arg1;	// IMP=0x001000000056a8e9
- (void)beginObject:(id)arg1;	// IMP=0x001000000056a82a
- (void)handleDropCapAdornment:(id)arg1;	// IMP=0x001000000056a61c
- (id)regularDrawableRepForObjectRep:(id)arg1;	// IMP=0x001000000056a501
- (void)handleObject:(id)arg1 drawableBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000056a3f8
- (void)dispatchObject:(id)arg1 drawableBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000056a314
- (void)endTateChuYokoRunWithRange:(struct _NSRange)arg1 baseTextRange:(struct _NSRange)arg2;	// IMP=0x001000000056a30e
- (void)beginTateChuYokoRunWithRange:(struct _NSRange)arg1 baseTextRange:(struct _NSRange)arg2;	// IMP=0x001000000056a308
- (void)endRubyRunWithRange:(struct _NSRange)arg1 baseTextRange:(struct _NSRange)arg2;	// IMP=0x001000000056a302
- (void)beginRubyRunWithRange:(struct _NSRange)arg1 baseTextRange:(struct _NSRange)arg2;	// IMP=0x001000000056a2fc
- (void)endAncillaryTextRunWithRange:(struct _NSRange)arg1 baseTextRange:(struct _NSRange)arg2;	// IMP=0x001000000056a279
- (void)beginAncillaryTextRunWithRange:(struct _NSRange)arg1 baseTextRange:(struct _NSRange)arg2;	// IMP=0x001000000056a12e
- (void)endPrimaryTextRunWithRange:(struct _NSRange)arg1 hasActualContents:(_Bool)arg2;	// IMP=0x001000000056a0ab
- (void)beginPrimaryTextRunWithRange:(struct _NSRange)arg1 hasActualContents:(_Bool)arg2;	// IMP=0x0010000000569f1a
- (id)retrieveHighestInfoAtCharIndex:(unsigned long long)arg1 returnTagType:(int *)arg2;	// IMP=0x0010000000569e45
- (_Bool);	// IMP=0x0010000000569e3d
- (void)endLineFragmentBodyWithRange:(struct _NSRange)arg1;	// IMP=0x0010000000569d5b
- (void)beginLineFragmentBodyWithRange:(struct _NSRange)arg1;	// IMP=0x0010000000569c40
- (void)endListLabel;	// IMP=0x0010000000569bbd
- (void)beginListLabel;	// IMP=0x0010000000569ab9
- (void)endLineFragmentWithRange:(struct _NSRange)arg1;	// IMP=0x00100000005699f3
- (void)beginLineFragmentWithRange:(struct _NSRange)arg1;	// IMP=0x001000000056991c
- (unsigned long long)indexOfFirstVisibleCharInParagraphAtOrAfterCharIndex:(unsigned long long)arg1;	// IMP=0x00100000005698db
- (_Bool)charIndexIsAtEndOfParagraph:(unsigned long long)arg1;	// IMP=0x00100000005698b5
- (_Bool)charIndexIsAtStartOfParagraph:(unsigned long long)arg1;	// IMP=0x0010000000569892
- (struct _NSRange)currentParagraphRange;	// IMP=0x00100000005697fd
- (void)advanceParagraphEnumeratorToCharIndex:(unsigned long long)arg1;	// IMP=0x0010000000569781
- (void)assertCharIndexRelativeToParagraphRange:(_Bool)arg1;	// IMP=0x0010000000569766
- (void)endParagraphBodyWithLineFragmentRange:(struct _NSRange)arg1;	// IMP=0x0010000000569760
- (void)beginParagraphBodyWithLineFragmentRange:(struct _NSRange)arg1;	// IMP=0x0010000000569721
- (void)endParagraphWithLineFragmentRange:(struct _NSRange)arg1;	// IMP=0x00100000005696cd
- (void)beginParagraphWithLineFragmentRange:(struct _NSRange)arg1;	// IMP=0x00100000005694e2
- (_Bool)currentParagraphHasContents;	// IMP=0x0010000000569393
- (_Bool)currentParagraphNeedsSpans;	// IMP=0x0010000000569178
- (void)endMultiParagraphEntityWithLineFragmentRange:(struct _NSRange)arg1;	// IMP=0x0010000000568e6d
- (void)beginMultiParagraphEntityWithLineFragmentRange:(struct _NSRange)arg1;	// IMP=0x0010000000568bc0
- (void)assertTopOfContextStackIsParagraph:(_Bool)arg1;	// IMP=0x0010000000568b81
- (_Bool)topOfContextStackIsParagraph;	// IMP=0x0010000000568b1b
- (void)endTextColumn:(id)arg1;	// IMP=0x0010000000568a98
- (void)beginTextColumn:(id)arg1 limitSelection:(id)arg2;	// IMP=0x001000000056893c
- (void)endTextStorageChunk:(id)arg1;	// IMP=0x00100000005688b9
- (void)beginTextStorageChunk:(id)arg1 limitSelection:(id)arg2;	// IMP=0x0010000000568367
- (void)endPage;	// IMP=0x0010000000568348
- (void)beginPage;	// IMP=0x001000000056832e
- (id)topmostParagraphLevelResolver;	// IMP=0x0010000000568318
- (struct _NSRange)topmostColumnRange;	// IMP=0x00100000005682b1
- (id)topmostTextStorage;	// IMP=0x001000000056824d
- (id)topmostColumn;	// IMP=0x00100000005681e9
- (id)topmostParagraphContext;	// IMP=0x00100000005681bb
- (id)topmostColumnContext;	// IMP=0x001000000056818d
- (void)restoreStateFromTopOfContextStackWithExpectedClass:(Class)arg1;	// IMP=0x00100000005680b3
- (id)topOfContextStackWithExpectedClass:(Class)arg1;	// IMP=0x0010000000567fdf
- (id)topOfContextStack;	// IMP=0x0010000000567fc9
- (void)setState:(id)arg1;	// IMP=0x0010000000567f6f
- (id)state;	// IMP=0x0010000000567f1d
- (unsigned long long)depthOfTopmostTagOfType:(int)arg1;	// IMP=0x0010000000567d7a
- (int)topmostTagType;	// IMP=0x0010000000567d66
- (int)tagTypeAtDepth:(unsigned long long)arg1;	// IMP=0x0010000000567ca4
- (unsigned long long)depthOfContext:(id)arg1;	// IMP=0x0010000000567c21
- (id)topmostContextOfClass:(Class)arg1;	// IMP=0x0010000000567ab7
- (void)popTagStackUntilReachingHeight:(unsigned long long)arg1;	// IMP=0x0010000000567a25
- (unsigned long long)tagStackHeight;	// IMP=0x0010000000567a0f
- (void)endTag;	// IMP=0x0010000000567919
- (void)beginTagWithType:(int)arg1;	// IMP=0x0010000000567905
- (void)beginTagWithType:(int)arg1 tagProperties:(id)arg2;	// IMP=0x0010000000567817
- (void)popContextWithExpectedClass:(Class)arg1;	// IMP=0x00100000005676f9
- (void)pushContext:(id)arg1;	// IMP=0x001000000056743d
- (void)executeBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000005673d7
- (void)setUp;	// IMP=0x00100000005672c3
- (id)init;	// IMP=0x001000000056725a

@end

