//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBAssistantRootViewController, SBWindow;
@protocol SBAssistantSceneControllingObserver;

@protocol SBAssistantSceneControlling <NSObject>
@property(readonly, nonatomic) SBAssistantRootViewController *assistantRootViewController;
@property(readonly, nonatomic) SBWindow *window;
@property(readonly, nonatomic, getter=isVisible) _Bool visible;
- (void)dismissAssistantViewIfNecessaryForGestureTranslation:(struct CGPoint)arg1 velocity:(struct CGPoint)arg2;
- (void)dismissAssistantViewIfNecessaryWithAnimation:(long long)arg1 completion:(void (^)(void))arg2;
- (void)dismissAssistantViewIfNecessaryWithAnimation:(long long)arg1;
- (void)dismissAssistantViewIfNecessary;
- (void)removeObserver:(id <SBAssistantSceneControllingObserver>)arg1;
- (void)addObserver:(id <SBAssistantSceneControllingObserver>)arg1;
@end

