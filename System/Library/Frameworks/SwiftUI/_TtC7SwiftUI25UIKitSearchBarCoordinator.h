//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC7SwiftUI25UIKitSearchBarCoordinator
{
    MISSING_TYPE *triggerSubmission;	// 8 = 0x8
    MISSING_TYPE *configuration;	// 0 = 0x0
    MISSING_TYPE *scopes;	// 0 = 0x0
    MISSING_TYPE *tokenScopes;	// 2004049759 = 0x77735f5f
    MISSING_TYPE *placement;	// 1887007839 = 0x7079745f
    MISSING_TYPE *delegate;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *searchBar;	// 0 = 0x0
    MISSING_TYPE *isViewUpdating;	// 0 = 0x0
    MISSING_TYPE *oldText;	// 0 = 0x0
    MISSING_TYPE *oldTokens;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00000000006354ea
- (id)init;	// IMP=0x0000000000635428
- (void)textFieldDidChangeSelection:(id)arg1;	// IMP=0x00000000006352fa
- (void)searchBar:(id)arg1 selectedScopeButtonIndexDidChange:(long long)arg2;	// IMP=0x0000000000635229
- (void)searchBarCancelButtonClicked:(id)arg1;	// IMP=0x0000000000635022
- (void)searchBarTextDidEndEditing:(id)arg1;	// IMP=0x0000000000634bfe
- (void)searchBarTextDidBeginEditing:(id)arg1;	// IMP=0x000000000063478a
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;	// IMP=0x00000000006341f4
- (void)primaryActionTriggered:(id)arg1;	// IMP=0x0000000000633c7b

@end

