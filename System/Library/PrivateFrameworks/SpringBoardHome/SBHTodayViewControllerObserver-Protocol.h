//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardHome/NSObject-Protocol.h>

@protocol SBHTodayViewController;

@protocol SBHTodayViewControllerObserver <NSObject>

@optional
- (void)todayViewController:(id <SBHTodayViewController>)arg1 didChangePresentationProgress:(double)arg2 newPresentationProgress:(double)arg3 fromLeading:(_Bool)arg4;
- (void)todayViewController:(id <SBHTodayViewController>)arg1 contentVisibilityDidChange:(unsigned long long)arg2;
- (void)todayViewController:(id <SBHTodayViewController>)arg1 contentVisibilityWillChange:(unsigned long long)arg2;
- (void)todayViewControllerDidEndScrolling:(id <SBHTodayViewController>)arg1;
- (void)todayViewControllerDidDisappear:(id <SBHTodayViewController>)arg1;
- (void)todayViewControllerWillDisappear:(id <SBHTodayViewController>)arg1;
- (void)todayViewControllerDidAppear:(id <SBHTodayViewController>)arg1;
@end

