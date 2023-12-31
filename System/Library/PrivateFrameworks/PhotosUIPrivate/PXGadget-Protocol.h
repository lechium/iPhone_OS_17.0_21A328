//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class NSArray, NSObject, NSString, PXGadgetSpec, UICollectionViewCell, UIMenu, UIPreviewParameters, UIView, UIViewController;
@protocol PXAnonymousView, PXAnonymousViewController, PXGadgetDelegate, UICoordinateSpace;

@protocol PXGadget <NSObject>
@property(nonatomic) __weak id <PXGadgetDelegate> delegate;
@property(retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property(readonly, nonatomic) unsigned long long gadgetCapabilities;
@property(readonly, nonatomic) unsigned long long gadgetType;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@optional
@property(nonatomic) struct CGRect visibleContentRect;
@property(readonly, nonatomic) Class collectionViewItemClass;
@property(nonatomic) long long priority;
@property(readonly, nonatomic) unsigned long long headerStyle;
@property(readonly, nonatomic) NSString *accessoryButtonTitle;
@property(readonly, nonatomic) unsigned long long accessoryButtonType;
@property(readonly, nonatomic) _Bool wantsMultilineTitle;
@property(readonly, nonatomic) NSString *localizedTitle;
- (void)commitPreviewView:(UIView *)arg1;
- (void)didDismissPreviewWithPreviewView:(UIView *)arg1 committing:(_Bool)arg2;
- (void)commitPreviewViewController:(UIViewController *)arg1;
- (void)didDismissPreviewViewController:(UIViewController *)arg1 committing:(_Bool)arg2;
- (UIMenu *)contextMenuWithSuggestedActions:(NSArray *)arg1;
- (UIPreviewParameters *)previewParametersForTargetPreviewView:(UIView *)arg1;
- (NSObject<PXAnonymousViewController> *)previewViewControllerAtLocation:(struct CGPoint)arg1 fromSourceView:(NSObject<PXAnonymousView> *)arg2;
- (NSObject<PXAnonymousView> *)targetPreviewViewForLocation:(struct CGPoint)arg1 inCoordinateSpace:(id <UICoordinateSpace>)arg2;
- (NSObject<PXAnonymousViewController> *)contentViewController;
- (NSObject<PXAnonymousView> *)contentView;
- (void)prefetchDuringScrollingForWidth:(double)arg1;
- (void)gadgetWasDismissed;
- (void)gadgetControllerHasDisappeared;
- (void)gadgetControllerHasAppeared;
- (void)contentHasBeenSeen;
- (NSString *)uniqueGadgetIdentifier;
- (NSArray *)debugURLsForDiagnostics;
- (void)removeCollectionViewItem:(UICollectionViewCell *)arg1;
- (void)prepareCollectionViewItem:(UICollectionViewCell *)arg1;
- (void)contentViewDidDisappear;
- (void)contentViewWillAppear;
- (void)preloadResources;
- (void)userDidSelectAccessoryButton:(NSObject<PXAnonymousView> *)arg1;
- (void)userDidSelectGadget;
@end

