//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLiOSDocumentMode, UIBarButtonItem;
@protocol CRLiOSToolTrayProviding;

@protocol _TtP8Freeform24CRLiOSPencilTrayDelegate_
- (_Bool)shouldKeepDocumentModeOnVisibilityChangeOfPencilTray:(id <CRLiOSToolTrayProviding>)arg1;
- (UIBarButtonItem *)barButtonItemForPresentingColorPickerWithHiddenPencilTray:(id <CRLiOSToolTrayProviding>)arg1;
- (void)didUpdateRectangleObscuringCanvasScrollViewForPencilTray:(id <CRLiOSToolTrayProviding>)arg1;
- (CRLiOSDocumentMode *)pencilDocumentModeFor:(unsigned long long)arg1;
@end
