//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CHCandidateRefinementStep
{
    _Bool _shouldKeepOutOfPatternCandidates;	// 8 = 0x8
    _Bool _shouldKeepDuplicateTokenIDs;	// 9 = 0x9
    _Bool _shouldKeepOutOfLexiconAlternatives;	// 10 = 0xa
    _Bool _shouldKeepAlternativeLengths;	// 11 = 0xb
    _Bool _shouldKeepSubstrings;	// 12 = 0xc
    _Bool _shouldKeepOriginalSpelling;	// 13 = 0xd
}

- (id)process:(id)arg1 options:(id)arg2;	// IMP=0x00000000001fe440
- (id)initWithShouldKeepOutOfPatternCandidates:(_Bool)arg1 shouldKeepDuplicateTokenIDs:(_Bool)arg2 shouldKeepOutOfLexiconAlternatives:(_Bool)arg3 shouldKeepAlternativeLengths:(_Bool)arg4 shouldKeepSubstrings:(_Bool)arg5 shouldKeepOriginalSpelling:(_Bool)arg6;	// IMP=0x00000000001fe3a0

@end

