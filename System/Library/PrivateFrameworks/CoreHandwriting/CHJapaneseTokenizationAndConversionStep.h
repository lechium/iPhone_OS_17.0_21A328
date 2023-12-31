//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CHMecabraWrapper, CHStringOVSChecker;

@interface CHJapaneseTokenizationAndConversionStep
{
    _Bool _promoteKanaConversion;	// 8 = 0x8
    CHMecabraWrapper *_mecabraWrapper;	// 16 = 0x10
    struct __MecabraContext *_mecabraContextRef;	// 24 = 0x18
    void *_wordLanguageModel;	// 32 = 0x20
    CHStringOVSChecker *_ovsStringChecker;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000002174f0
- (void)dealloc;	// IMP=0x0000000000217430
- (id)process:(id)arg1 options:(id)arg2;	// IMP=0x00000000002147a0
- (id)initWithMecabra:(id)arg1 wordLanguageModel:(void *)arg2 ovsStringChecker:(id)arg3 promoteKanaConversion:(_Bool)arg4;	// IMP=0x0000000000214020

@end

