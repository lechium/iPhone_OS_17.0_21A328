//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@protocol _InfiniteScrollViewControllerDelegate;

@interface _InfiniteScrollViewController : UIViewController
{
    id <_InfiniteScrollViewControllerDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000003a632
@property(nonatomic) __weak id <_InfiniteScrollViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewSafeAreaInsetsDidChange;	// IMP=0x001000000003a59b
- (void)viewDidLayoutSubviews;	// IMP=0x001000000003a55e

@end

