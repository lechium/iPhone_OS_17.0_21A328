//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CMOutlineState, NSMutableArray, NSMutableDictionary, WDText;

__attribute__((visibility("hidden")))
@interface WMState
{
    CMOutlineState *currentListState;	// 88 = 0x58
    CMOutlineState *outlineState;	// 96 = 0x60
    NSMutableDictionary *listStates;	// 104 = 0x68
    WDText *mLastHeader;	// 112 = 0x70
    WDText *mLastFooter;	// 120 = 0x78
    unsigned int mCurrentPage;	// 128 = 0x80
    unsigned long long mBlockIndex;	// 136 = 0x88
    unsigned long long mRunIndex;	// 144 = 0x90
    float mTopMargin;	// 152 = 0x98
    float mLeftMargin;	// 156 = 0x9c
    float mPageHeight;	// 160 = 0xa0
    _Bool mIsFrame;	// 164 = 0xa4
    _Bool mIsFrameStart;	// 165 = 0xa5
    _Bool mIsFrameEnd;	// 166 = 0xa6
    _Bool mIsHeaderOrFooter;	// 167 = 0xa7
    float mTotalPageHeight;	// 168 = 0xa8
    NSMutableArray *_paragraphStack;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x000000000045ad87
@property(retain) NSMutableArray *paragraphStack; // @synthesize paragraphStack=_paragraphStack;
- (_Bool)containsParagraph:(id)arg1;	// IMP=0x000000000045acd4
- (void)popParagraph;	// IMP=0x000000000045ac83
- (void)pushParagraph:(id)arg1;	// IMP=0x000000000045abfb
- (_Bool)isHeaderOrFooter;	// IMP=0x000000000015e15b
- (void)setIsHeaderOrFooter:(_Bool)arg1;	// IMP=0x0000000000100f8b
- (_Bool)isFrameEnd;	// IMP=0x000000000010177b
- (void)setIsFrameEnd:(_Bool)arg1;	// IMP=0x00000000000eee9b
- (_Bool)isFrameStart;	// IMP=0x00000000001015ab
- (void)setIsFrameStart:(_Bool)arg1;	// IMP=0x00000000000eee8b
- (_Bool)isFrame;	// IMP=0x00000000000eeeab
- (void)setIsFrame:(_Bool)arg1;	// IMP=0x00000000000eee7b
- (id)lastFooter;	// IMP=0x00000000000fddb6
- (void)setLastFooter:(id)arg1;	// IMP=0x0000000000100f72
- (id)lastHeader;	// IMP=0x00000000000ee59d
- (void)setLastHeader:(id)arg1;	// IMP=0x000000000015d069
- (float)leftMargin;	// IMP=0x00000000002328c7
- (void)setLeftMargin:(float)arg1;	// IMP=0x00000000000edc55
- (float)topMargin;	// IMP=0x000000000022d533
- (void)setTopMargin:(float)arg1;	// IMP=0x00000000000edc41
- (float)totalPageHeight;	// IMP=0x000000000015e21f
- (void)setTotalPageHeight:(float)arg1;	// IMP=0x000000000015e23d
- (float)pageHeight;	// IMP=0x000000000045abdb
- (void)setPageHeight:(float)arg1;	// IMP=0x00000000000edc69
- (unsigned long long)blockIndex;	// IMP=0x0000000000101598
- (void)setBlockIndex:(unsigned long long)arg1;	// IMP=0x00000000000ee917
- (unsigned long long)runIndex;	// IMP=0x00000000001e0ac6
- (void)setRunIndex:(unsigned long long)arg1;	// IMP=0x00000000000f0d95
- (float)pageOffset;	// IMP=0x000000000015e1de
- (unsigned int)currentPage;	// IMP=0x00000000000f4bbe
- (void)setCurrentPage:(unsigned int)arg1;	// IMP=0x00000000000f4bce
- (void)setListState:(id)arg1 forListDefinitionId:(int)arg2;	// IMP=0x000000000045ab03
- (id)listStateForListDefinitionWithId:(int)arg1 settingUpStateIfNeededWithDocument:(id)arg2;	// IMP=0x000000000045a9e6
- (id)listStateForListDefinitionId:(int)arg1;	// IMP=0x000000000045a964
- (void)clearCurrentListState;	// IMP=0x00000000000f56a3
- (_Bool)isCurrentListDefinitionId:(int)arg1;	// IMP=0x000000000045a8ad
- (_Bool)isCurrentListStateOverridden;	// IMP=0x00000000000f5498
- (void)setCurrentListState:(id)arg1;	// IMP=0x00000000000f5645
- (id)outlineState;	// IMP=0x00000000001b8ca0
- (id)currentListState;	// IMP=0x00000000000f547b
- (void)dealloc;	// IMP=0x00000000000fde50
- (id)init;	// IMP=0x00000000000eb9f0

@end
