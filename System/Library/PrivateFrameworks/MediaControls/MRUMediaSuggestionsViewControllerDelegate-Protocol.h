//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaControls/NSObject-Protocol.h>

@class MRMediaSuggestion, MRUMediaSuggestionsViewController;

@protocol MRUMediaSuggestionsViewControllerDelegate <NSObject>
- (void)mediaSuggestionsViewController:(MRUMediaSuggestionsViewController *)arg1 didSelectSuggestion:(MRMediaSuggestion *)arg2 completion:(void (^)(void))arg3;
@end

