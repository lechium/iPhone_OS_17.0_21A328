//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OADTextRun;

__attribute__((visibility("hidden")))
@interface PMTextRunMapper
{
    OADTextRun *mTextRun;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000046fedb
- (void)mapAt:(id)arg1 withState:(id)arg2;	// IMP=0x00000000000ac9bc
- (void)addFontForLanguageType:(int)arg1 toCharacterStyle:(id)arg2;	// IMP=0x000000000046fc51
- (id)initWithOadTextRun:(id)arg1 parent:(id)arg2;	// IMP=0x00000000000ac930
- (id)fontScheme;	// IMP=0x00000000000ad813
- (id)copyCharacterStyleWithState:(id)arg1;	// IMP=0x00000000000acfb1
- (_Bool)_isDefaultFill:(id)arg1;	// IMP=0x00000000001fc052

@end
