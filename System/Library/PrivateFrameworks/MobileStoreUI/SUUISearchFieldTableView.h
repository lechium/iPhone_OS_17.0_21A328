//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableView.h>

@class SUUITrendingSearchPage, SUUITrendingSearchPageView, SUUITrendingSearchProvider;
@protocol SUUITrendingSearchPageViewDelegate;

__attribute__((visibility("hidden")))
@interface SUUISearchFieldTableView : UITableView
{
    SUUITrendingSearchPage *_page;	// 8 = 0x8
    SUUITrendingSearchPageView *_pageView;	// 16 = 0x10
    _Bool _trendingSearchesVisible;	// 24 = 0x18
    SUUITrendingSearchProvider *_trendingSearchProvider;	// 32 = 0x20
    id <SUUITrendingSearchPageViewDelegate> _trendingSearchDelegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000027b126
@property(nonatomic) _Bool trendingSearchesVisible; // @synthesize trendingSearchesVisible=_trendingSearchesVisible;
@property(nonatomic) __weak id <SUUITrendingSearchPageViewDelegate> trendingSearchDelegate; // @synthesize trendingSearchDelegate=_trendingSearchDelegate;
@property(retain, nonatomic) SUUITrendingSearchProvider *trendingSearchProvider; // @synthesize trendingSearchProvider=_trendingSearchProvider;
- (void)_reloadView;	// IMP=0x000000000027af46
- (void)_setTrendingResponse:(id)arg1 error:(id)arg2;	// IMP=0x000000000027aef0
- (void)_reloadData;	// IMP=0x000000000027ad19
- (void)layoutSubviews;	// IMP=0x000000000027ac89

@end
