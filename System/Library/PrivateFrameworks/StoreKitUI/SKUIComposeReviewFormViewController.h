//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStoreUI/SUViewController.h>

@class NSString, SKUIBarButtonItemSubmitWithAnimation, SKUIComposeReviewView, SKUIReviewMetadata;
@protocol SKUIComposeReviewFormDelegate;

__attribute__((visibility("hidden")))
@interface SKUIComposeReviewFormViewController : SUViewController
{
    SKUIBarButtonItemSubmitWithAnimation *_submitNavButton;	// 8 = 0x8
    SKUIComposeReviewView *_composeView;	// 16 = 0x10
    id <SKUIComposeReviewFormDelegate> _delegate;	// 24 = 0x18
    SKUIReviewMetadata *_review;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000025127
@property(nonatomic) __weak id <SKUIComposeReviewFormDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_submit;	// IMP=0x0000000000025070
- (void)_cancel;	// IMP=0x0000000000024fe6
- (void)composeReviewViewValidityChanged:(id)arg1;	// IMP=0x0000000000024f59
- (void)showSendAnimationInNavigationBarWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000024f3c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000024e8b
- (void)loadView;	// IMP=0x0000000000024bef
- (void)setRating:(float)arg1;	// IMP=0x0000000000024bd2
@property(readonly, copy, nonatomic) SKUIReviewMetadata *editedReviewMetadata;
- (void)dealloc;	// IMP=0x0000000000024b62
- (id)initWithReviewMetadata:(id)arg1;	// IMP=0x0000000000024ae8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
