//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CACSimpleContentViewManager, UIViewController;
@protocol CACViewController;

@protocol CACSimpleContentViewManagerDelegate
- (void)contentViewManager:(CACSimpleContentViewManager *)arg1 dismissViewController:(UIViewController<CACViewController> *)arg2 animated:(_Bool)arg3 completion:(void (^)(void))arg4;
- (void)contentViewManager:(CACSimpleContentViewManager *)arg1 presentViewController:(UIViewController<CACViewController> *)arg2 animated:(_Bool)arg3 completion:(void (^)(void))arg4;
@end

