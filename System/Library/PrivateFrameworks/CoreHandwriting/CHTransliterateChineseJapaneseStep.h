//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CHTransliterateChineseJapaneseStep
{
    _Bool _transliterateSentences;	// 8 = 0x8
    void **_icuTransliterator;	// 16 = 0x10
}

- (void)dealloc;	// IMP=0x0000000000205240
- (id)process:(id)arg1 options:(id)arg2;	// IMP=0x0000000000204520
- (id)initWithTransliterateSentences:(_Bool)arg1;	// IMP=0x0000000000204440

@end

