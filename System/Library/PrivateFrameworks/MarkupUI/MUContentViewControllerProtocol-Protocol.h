//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MarkupUI/NSObject-Protocol.h>

@class NSArray, UIScrollView, UITouch, UIView;
@protocol UICoordinateSpace;

@protocol MUContentViewControllerProtocol <NSObject>
@property(readonly, nonatomic) _Bool canEditContent;
@property(readonly, nonatomic) UIScrollView *contentViewScrollView;
@property(readonly, nonatomic) long long defaultToolTag;
@property(nonatomic) struct UIEdgeInsets edgeInsets;
- (_Bool)acceptSingleTouch:(UITouch *)arg1;
- (UIView *)contentSnapshot;
- (struct CGRect)visibleContentRectInCoordinateSpace:(id <UICoordinateSpace>)arg1;
- (struct CGRect)visibleContentRect;
- (struct CGSize)idealContentSizeForScreenSize:(struct CGSize)arg1 windowDecorationSize:(struct CGSize)arg2;
- (struct CGSize)contentSize;
- (void)loadContentWithCompletionBlock:(void (^)(void))arg1;
- (void)uninstallAllAnnotationControllerOverlays;
- (void)teardown;
- (void)setup;

@optional
@property(nonatomic) _Bool centersIgnoringContentInsets;
@property(nonatomic) _Bool navigationModeHorizontal;
@property(readonly) unsigned long long pageCount;
@property(nonatomic) _Bool showsThumbnailView;
@property(retain) NSArray *sourceContentReplacedAnnotationMaps;
@end

