//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSCharacterSet;

@interface CHTransliterateHalfWidthPunctuationStep
{
    _Bool _shouldAddAlternatives;	// 8 = 0x8
    NSCharacterSet *_contextInvariantCharacterSet;	// 16 = 0x10
    NSCharacterSet *_forwardLookingCharacterSet;	// 24 = 0x18
    NSCharacterSet *_backwardLookingCharacterSet;	// 32 = 0x20
    NSCharacterSet *_widthAlternativeCharacterSet;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001f9820
- (id)process:(id)arg1 options:(id)arg2;	// IMP=0x00000000001f85c0
- (id)initWithShouldAddAlternatives:(_Bool)arg1;	// IMP=0x00000000001f8420

@end

