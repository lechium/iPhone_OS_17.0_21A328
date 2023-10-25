//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSString, SBDisplayItem, SBFluidSwitcherDragAndDropManager, SBFluidSwitcherGesture, UIGestureRecognizer;
@protocol SBAppPlatterDragSourceViewProviding;

@protocol SBFluidSwitcherDragAndDropManagerDelegate <NSObject>
- (void)dragAndDropManager:(SBFluidSwitcherDragAndDropManager *)arg1 didEndGesture:(SBFluidSwitcherGesture *)arg2;
- (void)dragAndDropManager:(SBFluidSwitcherDragAndDropManager *)arg1 didUpdateGesture:(SBFluidSwitcherGesture *)arg2;
- (void)dragAndDropManager:(SBFluidSwitcherDragAndDropManager *)arg1 didBeginGesture:(SBFluidSwitcherGesture *)arg2;
- (void)dragAndDropManager:(SBFluidSwitcherDragAndDropManager *)arg1 willEndDraggingWindowWithSceneIdentifier:(NSString *)arg2;
- (void)dragAndDropManager:(SBFluidSwitcherDragAndDropManager *)arg1 didPlatterizeWindowDragWithSceneIdentifier:(NSString *)arg2;
- (void)dragAndDropManager:(SBFluidSwitcherDragAndDropManager *)arg1 didBeginDraggingWindowWithSceneIdentifier:(NSString *)arg2;
- (id <SBAppPlatterDragSourceViewProviding>)dragAndDropManager:(SBFluidSwitcherDragAndDropManager *)arg1 sourceViewProviderForDraggingWindowWithGestureRecognizer:(UIGestureRecognizer *)arg2;
- (SBDisplayItem *)dragAndDropManager:(SBFluidSwitcherDragAndDropManager *)arg1 displayItemForDraggingWindowWithGestureRecognizer:(UIGestureRecognizer *)arg2;
@end
