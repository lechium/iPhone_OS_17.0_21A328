//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CHTransliterateConfusableCharactersArabicStep
{
    struct map<std::string, std::pair<std::string, double>, std::less<std::string>, std::allocator<std::pair<const std::string, std::pair<std::string, double>>>> _transliterationMapArabicLetters;	// 8 = 0x8
    struct map<std::string, std::pair<std::string, double>, std::less<std::string>, std::allocator<std::pair<const std::string, std::pair<std::string, double>>>> _transliterationMapArabicNumbers;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x000000000020e6a0
- (void).cxx_destruct;	// IMP=0x000000000020e660
- (id)process:(id)arg1 options:(id)arg2;	// IMP=0x000000000020cd90
- (id)init;	// IMP=0x000000000020ca40

@end

