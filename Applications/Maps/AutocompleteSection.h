//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface AutocompleteSection
{
    _Bool _isQuerySuggestionsSection;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
}

+ (id)sectionWithTitle:(id)arg1 items:(id)arg2 isQuerySuggestionsSection:(_Bool)arg3;	// IMP=0x0040000000a2521d
- (void).cxx_destruct;	// IMP=0x0020000000a252dc
@property(nonatomic) _Bool isQuerySuggestionsSection; // @synthesize isQuerySuggestionsSection=_isQuerySuggestionsSection;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithTitle:(id)arg1 items:(id)arg2 isQuerySuggestionsSection:(_Bool)arg3;	// IMP=0x0010000000a25187

@end

