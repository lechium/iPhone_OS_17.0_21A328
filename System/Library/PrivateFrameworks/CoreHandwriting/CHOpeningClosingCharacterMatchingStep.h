//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSCharacterSet;

@interface CHOpeningClosingCharacterMatchingStep
{
    NSCharacterSet *_openingBracketCharacters;	// 8 = 0x8
    NSCharacterSet *_closingBracketCharacters;	// 16 = 0x10
    NSCharacterSet *_openingQuoteCharacters;	// 24 = 0x18
    NSCharacterSet *_closingQuoteCharacters;	// 32 = 0x20
    NSCharacterSet *_symmetricQuoteCharacters;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001fad30
- (id)process:(id)arg1 options:(id)arg2;	// IMP=0x00000000001f9a00
- (id)init;	// IMP=0x00000000001f9880

@end

