//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIView;
@protocol SCATElement;

@protocol SCATElementManagerVisualProvider
- (void)orientationDidChange:(UIView *)arg1;
- (void)updateCustomFocusingViewStateForViewsWithElement:(id <SCATElement>)arg1;
- (void)dismiss:(_Bool)arg1;
- (void)didUpdateWithDisplayContext:(UIView *)arg1 animated:(_Bool)arg2;
- (void)presentWithDisplayContext:(UIView *)arg1 animated:(_Bool)arg2;
- (_Bool)isDisplayed;
@end

