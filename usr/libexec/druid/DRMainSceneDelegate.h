//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIResponder.h>

@class DRTouchTrackingWindow, NSString, UIWindow;

@interface DRMainSceneDelegate : UIResponder
{
    DRTouchTrackingWindow *_touchTrackingWindow;	// 8 = 0x8
    UIWindow *_window;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000024493
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) DRTouchTrackingWindow *touchTrackingWindow; // @synthesize touchTrackingWindow=_touchTrackingWindow;
- (void)viewController:(id)arg1 setTouchOffset:(struct CGPoint)arg2 forSession:(unsigned int)arg3;	// IMP=0x00100000000243e1
- (void)viewController:(id)arg1 requestImagesForSessionID:(unsigned int)arg2 client:(id)arg3 itemIndexes:(id)arg4;	// IMP=0x001000000002434f
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;	// IMP=0x0010000000024173

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

