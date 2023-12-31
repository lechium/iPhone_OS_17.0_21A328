//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIScrollView;
@protocol _UIScrollViewScrollObserver_Internal;

__attribute__((visibility("hidden")))
@interface _UISearchControllerDidScrollDelegate : NSObject
{
    id <_UIScrollViewScrollObserver_Internal> _controller;	// 8 = 0x8
    UIScrollView *_scrollView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000058b563
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <_UIScrollViewScrollObserver_Internal> controller; // @synthesize controller=_controller;
- (void)_observeScrollViewDidScroll:(id)arg1;	// IMP=0x000000000058b46e
- (void)_didScroll;	// IMP=0x000000000058b3d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

