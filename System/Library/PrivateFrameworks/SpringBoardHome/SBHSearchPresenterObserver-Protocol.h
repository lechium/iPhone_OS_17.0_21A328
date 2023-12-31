//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardHome/NSObject-Protocol.h>

@protocol SBHSearchPresenting;

@protocol SBHSearchPresenterObserver <NSObject>

@optional
- (void)searchPresenterDidDismissSearch:(id <SBHSearchPresenting>)arg1;
- (void)searchPresenterWillDismissSearch:(id <SBHSearchPresenting>)arg1 animated:(_Bool)arg2;
- (void)searchPresenterDidPresentSearch:(id <SBHSearchPresenting>)arg1;
- (void)searchPresenterWillPresentSearch:(id <SBHSearchPresenting>)arg1 animated:(_Bool)arg2;
@end

