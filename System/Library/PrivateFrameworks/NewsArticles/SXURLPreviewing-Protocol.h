//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsArticles/NSObject-Protocol.h>

@class NSURL, UIViewController;

@protocol SXURLPreviewing <NSObject>
- (void)commitViewController:(UIViewController *)arg1 URL:(NSURL *)arg2;
- (UIViewController *)viewControllerForURL:(NSURL *)arg1;
@end
