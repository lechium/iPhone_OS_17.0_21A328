//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class GEORPProblemStatusResponse, MKMapView, NSLayoutConstraint, NSString, RAPAnnotation, UIButton, UIImageView, UILabel, UITextView, UIView;

@interface RAPFixedProblemViewController : UIViewController
{
    NSLayoutConstraint *_mapHeightConstraint;	// 8 = 0x8
    RAPAnnotation *_annotation;	// 16 = 0x10
    CDStruct_02837cd9 _mapRect;	// 24 = 0x18
    NSString *_headerText;	// 56 = 0x38
    NSString *_footerText;	// 64 = 0x40
    UIButton *_actionButton;	// 72 = 0x48
    UIView *_actionButtonSeparator;	// 80 = 0x50
    UILabel *_startLabel;	// 88 = 0x58
    UILabel *_destinationLabel;	// 96 = 0x60
    UIImageView *_transitIconImageView;	// 104 = 0x68
    UIImageView *_transitIconBackgroundImageView;	// 112 = 0x70
    UITextView *_textView;	// 120 = 0x78
    GEORPProblemStatusResponse *_problemStatusResponse;	// 128 = 0x80
    MKMapView *_mapView;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x0020000000a4d285
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) GEORPProblemStatusResponse *problemStatusResponse; // @synthesize problemStatusResponse=_problemStatusResponse;
- (id)labelMarkerOnMapViewWithText:(id)arg1;	// IMP=0x0010000000a4d04e
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(_Bool)arg2;	// IMP=0x0010000000a4cc25
- (void)handleDone:(id)arg1;	// IMP=0x0010000000a4cbd9
- (void)_updateTextFieldIfLoaded;	// IMP=0x0010000000a4c757
- (void)_setHeaderText:(id)arg1 footerText:(id)arg2;	// IMP=0x0010000000a4c6c3
- (void)_updateMapViewIfLoaded;	// IMP=0x0010000000a4c34f
- (void)_setAnnotationsWithDetails:(id)arg1;	// IMP=0x0010000000a4c0a5
- (void)_contentSizeCategoryDidChange;	// IMP=0x0010000000a4bee5
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0010000000a4bd59
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000a4bcdb
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0010000000a4bcd0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000a4bc6e
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000a4bb1c
- (void)addRouteOverlayOnView:(id)arg1;	// IMP=0x0010000000a4b288
- (void)viewDidLoad;	// IMP=0x0010000000a4a492
- (void)dealloc;	// IMP=0x0010000000a4a3f1
- (id)init;	// IMP=0x0010000000a4a39f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

