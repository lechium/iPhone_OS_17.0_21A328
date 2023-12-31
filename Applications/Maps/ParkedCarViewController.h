//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class GEOAutomobileOptions, GEOCyclingOptions, GEOTransitOptions, GEOWalkingOptions, MUScrollableStackView, NSArray, NSString, ParkedCar, ParkedCarDetailsSectionController, ParkedCarHeaderSectionController, UIScrollView, UIView;
@protocol ParkedCarViewControllerDelegate, UIScrollViewDelegate;

@interface ParkedCarViewController : UIViewController
{
    MUScrollableStackView *_contentStackView;	// 8 = 0x8
    ParkedCarHeaderSectionController *_headerSectionController;	// 16 = 0x10
    ParkedCarDetailsSectionController *_detailsSectionController;	// 24 = 0x18
    NSArray *_sectionControllers;	// 32 = 0x20
    _Bool _active;	// 40 = 0x28
    GEOAutomobileOptions *_automobileOptions;	// 48 = 0x30
    double _contentAlpha;	// 56 = 0x38
    GEOCyclingOptions *_cyclingOptions;	// 64 = 0x40
    GEOTransitOptions *_transitOptions;	// 72 = 0x48
    GEOWalkingOptions *_walkingOptions;	// 80 = 0x50
    id <ParkedCarViewControllerDelegate> _parkedCarDelegate;	// 88 = 0x58
    ParkedCar *_parkedCar;	// 96 = 0x60
}

+ (double)headerHeightInMinimalMode;	// IMP=0x00200000007fcdf0
- (void).cxx_destruct;	// IMP=0x00200000007fed37
@property(retain, nonatomic) ParkedCar *parkedCar; // @synthesize parkedCar=_parkedCar;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) __weak id <ParkedCarViewControllerDelegate> parkedCarDelegate; // @synthesize parkedCarDelegate=_parkedCarDelegate;
@property(retain, nonatomic) GEOWalkingOptions *walkingOptions; // @synthesize walkingOptions=_walkingOptions;
@property(retain, nonatomic) GEOTransitOptions *transitOptions; // @synthesize transitOptions=_transitOptions;
@property(retain, nonatomic) GEOCyclingOptions *cyclingOptions; // @synthesize cyclingOptions=_cyclingOptions;
@property(retain, nonatomic) GEOAutomobileOptions *automobileOptions; // @synthesize automobileOptions=_automobileOptions;
- (void)updateHeaderTrailingConstant;	// IMP=0x00100000007fec28
@property(readonly, nonatomic) UIView *viewForHeaderContainmentString;
@property(readonly, nonatomic) UIView *draggableHeaderView;
- (id)draggableContent;	// IMP=0x00100000007fec10
- (void)instrumentDismissAction;	// IMP=0x00100000007febbf
- (void)parkedCarFooterActionsSectionControllerDidRemoveParkedCar:(id)arg1;	// IMP=0x00100000007feac3
- (void)parkedCarFooterActionsSectionControllerDidShareLocation:(id)arg1;	// IMP=0x00100000007fea77
- (void)parkedCarDetailsSectionControllerDidRemovePhoto:(id)arg1;	// IMP=0x00100000007fea00
- (void)parkedCarDetailsSectionControllerDidTapViewPhoto:(id)arg1;	// IMP=0x00100000007fe9ee
- (void)parkedCarDetailsSectionControllerDidTapAddPhotos:(id)arg1;	// IMP=0x00100000007fe9dc
- (void)parkedCarHeaderButtonsSectionControllerRequestsEditLocation:(id)arg1;	// IMP=0x00100000007fe9ca
- (void)parkedCarHeaderButtonsSectionControllerRequestsDirections:(id)arg1;	// IMP=0x00100000007fe9b8
- (void)locationRefinementViewController:(id)arg1 didSelectCoordinate:(struct CLLocationCoordinate2D)arg2;	// IMP=0x00100000007fe927
- (void)imagePickerControllerDidCancel:(id)arg1;	// IMP=0x00100000007fe851
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;	// IMP=0x00100000007fe706
- (void)textFieldRowViewDidChange:(id)arg1;	// IMP=0x00100000007fe6af
- (void)textFieldRowViewDidEndEditing:(id)arg1;	// IMP=0x00100000007fe60a
- (void)textFieldRowViewDidBeginEditing:(id)arg1;	// IMP=0x00100000007fe4ab
- (id)animationControllerForDismissedController:(id)arg1;	// IMP=0x00100000007fe400
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x00100000007fe355
- (void)_editLocationTapped;	// IMP=0x00100000007fe2b1
- (void)_getDirections;	// IMP=0x00100000007fe0f7
- (void)_imagePickerDidRetake:(id)arg1;	// IMP=0x00100000007fe0a6
- (void)_showCamera;	// IMP=0x00100000007fdfe2
- (void)_showLocationRefinement;	// IMP=0x00100000007fdedf
- (void)_handlePhotoTap;	// IMP=0x00100000007fdcc5
- (void)performAction:(long long)arg1;	// IMP=0x00100000007fdc82
- (void)parkedCarManager:(id)arg1 didUpdateParkedCar:(id)arg2;	// IMP=0x00100000007fdaf7
- (void)dismissTextField;	// IMP=0x00100000007fdada
- (void)_locationApprovalDidChange:(id)arg1;	// IMP=0x00100000007fd869
- (void)_updateSectionControllerState:(_Bool)arg1;	// IMP=0x00100000007fd72d
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000007fd6ea
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000007fd6a4
- (void)viewDidLayoutSubviews;	// IMP=0x00100000007fd5fd
- (void)_loadStackViewIfNeeded;	// IMP=0x00100000007fd534
- (void)viewDidLoad;	// IMP=0x00100000007fd0b9
- (_Bool)_canShowWhileLocked;	// IMP=0x00100000007fd0b1
- (void)_updateContentAlpha:(double)arg1;	// IMP=0x00100000007fcf05
@property(nonatomic) double contentAlpha; // @synthesize contentAlpha=_contentAlpha;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)scrollToTopAnimated:(_Bool)arg1;	// IMP=0x00100000007fce47
- (double)currentHeight;	// IMP=0x00100000007fce26
- (void)hideTitle:(_Bool)arg1;	// IMP=0x00100000007fce09
- (void)contentAboveTitleScrollPositionChanged:(double)arg1;	// IMP=0x00100000007fcdea
@property(readonly, nonatomic) double heightForContentAboveTitle;
- (void);	// IMP=0x00100000007fcd78
@property(nonatomic) __weak id <UIScrollViewDelegate> scrollViewDelegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

