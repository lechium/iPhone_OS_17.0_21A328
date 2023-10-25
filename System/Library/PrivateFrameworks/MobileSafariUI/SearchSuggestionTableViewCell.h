//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CompletionArrowView;

__attribute__((visibility("hidden")))
@interface SearchSuggestionTableViewCell
{
    CompletionArrowView *_accessoryView;	// 8 = 0x8
    _Bool _hidesAccessoryView;	// 16 = 0x10
    CDUnknownBlockType _accessoryActionHandler;	// 24 = 0x18
}

+ (id)_suggestedTextAttributes;	// IMP=0x006000000010166f
+ (id)_matchedTextAttributes;	// IMP=0x00600000001013c0
- (void).cxx_destruct;	// IMP=0x0000000000102343
@property(copy, nonatomic) CDUnknownBlockType accessoryActionHandler; // @synthesize accessoryActionHandler=_accessoryActionHandler;
@property(nonatomic) _Bool hidesAccessoryView; // @synthesize hidesAccessoryView=_hidesAccessoryView;
- (void)_accessoryButtonTapped:(id)arg1;	// IMP=0x00000000001022f7
- (void)layoutSubviews;	// IMP=0x0000000000102166
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000102062
- (void)setSearchSuggestion:(id)arg1 withQuery:(id)arg2;	// IMP=0x0000000000101c63
@property(nonatomic) _Bool usesDownBackwardCompletionArrow;
- (void)prepareForReuse;	// IMP=0x0000000000101b8d
@property(nonatomic) _Bool hidesImage;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000101898

@end
