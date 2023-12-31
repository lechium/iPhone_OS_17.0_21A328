//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSString, SKUIClientContext, SKUIReviewList, SKUIReviewsHistogramView, UIControl;

__attribute__((visibility("hidden")))
@interface SKUIReviewsHistogramViewController : UIViewController
{
    SKUIClientContext *_clientContext;	// 8 = 0x8
    SKUIReviewsHistogramView *_histogramView;	// 16 = 0x10
    SKUIReviewList *_reviewList;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000021ea21
@property(retain, nonatomic) SKUIReviewList *reviewList; // @synthesize reviewList=_reviewList;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void)_reloadHistogram;	// IMP=0x000000000021e74a
- (id)_histogramView;	// IMP=0x000000000021e639
- (void)loadView;	// IMP=0x000000000021e5ed
@property(readonly, nonatomic) UIControl *writeAReviewButton;
@property(copy, nonatomic) NSString *versionString;
@property(readonly, nonatomic) UIControl *starRatingControl;
@property(nonatomic) long long selectedSegmentIndex;
@property(copy, nonatomic) NSArray *segmentedControlTitles;
@property(nonatomic) long long personalStarRating;
@property(readonly, nonatomic) UIControl *segmentedControl;
@property(readonly, nonatomic) UIControl *appSupportButton;

@end

