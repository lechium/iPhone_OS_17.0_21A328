//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class WDFont;

__attribute__((visibility("hidden")))
@interface WDSymbol
{
    WDFont *mFont;	// 16 = 0x10
    unsigned short mCharacter;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000400281
- (id)description;	// IMP=0x0000000000400243
- (int)runType;	// IMP=0x00000000001d1eb8
- (void)setCharacter:(unsigned short)arg1;	// IMP=0x00000000001d1e96
- (unsigned short)character;	// IMP=0x00000000001d1ff5
- (void)setFont:(id)arg1;	// IMP=0x00000000001d1e82
- (id)font;	// IMP=0x00000000001d2006
- (id)initWithParagraph:(id)arg1;	// IMP=0x00000000001d19e0

@end

