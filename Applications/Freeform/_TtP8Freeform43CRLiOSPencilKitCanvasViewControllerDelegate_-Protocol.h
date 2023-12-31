//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CRLFreehandDrawingToolkit, CRLInteractiveCanvasController, UIView, _TtC8Freeform35CRLiOSPencilKitCanvasViewController;

@protocol _TtP8Freeform43CRLiOSPencilKitCanvasViewControllerDelegate_ <NSObject>
- (void)prepareForPencilKitBeganStroke:(_TtC8Freeform35CRLiOSPencilKitCanvasViewController *)arg1;
- (void)prepareForPencilKitEndingOrCancellingStroke:(_TtC8Freeform35CRLiOSPencilKitCanvasViewController *)arg1;
- (void)prepareForPencilKitSnapshottingForPencilKitCanvasViewController:(_TtC8Freeform35CRLiOSPencilKitCanvasViewController *)arg1;
- (void)pencilKitViewWantsSuppressedFreehandContent:(_Bool)arg1 forPencilKitCanvasViewController:(_TtC8Freeform35CRLiOSPencilKitCanvasViewController *)arg2;
- (UIView *)pencilKitRulerHostingViewForPencilKitCanvasViewController:(_TtC8Freeform35CRLiOSPencilKitCanvasViewController *)arg1;
- (UIView *)pencilKitSnapshotViewForPencilKitCanvasViewController:(_TtC8Freeform35CRLiOSPencilKitCanvasViewController *)arg1;
- (CRLFreehandDrawingToolkit *)freehandDrawingToolkitForPencilKitCanvasViewController:(_TtC8Freeform35CRLiOSPencilKitCanvasViewController *)arg1;
- (unsigned long long)pencilModeTypeForPencilKitCanvasViewController:(_TtC8Freeform35CRLiOSPencilKitCanvasViewController *)arg1;
- (CRLInteractiveCanvasController *)interactiveCanvasControllerForPencilKitCanvasViewController:(_TtC8Freeform35CRLiOSPencilKitCanvasViewController *)arg1;
@end

