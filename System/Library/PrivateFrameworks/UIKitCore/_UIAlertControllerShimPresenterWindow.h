//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIApplicationRotationFollowingWindow.h"

@class UIAlertController;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerShimPresenterWindow : UIApplicationRotationFollowingWindow
{
    UIAlertController *_alertController;	// 288 = 0x120
}

- (void).cxx_destruct;	// IMP=0x00000000000cc71a
@property(readonly, retain, nonatomic) UIAlertController *alertController;
- (void)presentAlertController:(id)arg1 animated:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000cc461
- (id)_presentationViewController;	// IMP=0x00000000000cc3d5
- (id)initWithWindowScene:(id)arg1;	// IMP=0x00000000000cc31f
- (id)init;	// IMP=0x00000000000cc19e

@end

