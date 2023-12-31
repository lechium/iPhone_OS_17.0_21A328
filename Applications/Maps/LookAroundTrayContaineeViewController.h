//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LookAroundTrayHeaderViewController, LookAroundVibrantBackgroundButton, MKLookAroundView, MKViewWithHairline, NSDateFormatter, NSLayoutConstraint, NSString, UILabel, UILayoutGuide, UIScrollView, UIStackView, UIView;
@protocol LookAroundActionCoordination, LookAroundTrayContaineeViewControllerDelegate;

@interface LookAroundTrayContaineeViewController
{
    _Bool _visible;	// 8 = 0x8
    id <LookAroundActionCoordination> _actionCoordinator;	// 16 = 0x10
    id <LookAroundTrayContaineeViewControllerDelegate> _delegate;	// 24 = 0x18
    NSDateFormatter *_dateFormatter;	// 32 = 0x20
    MKLookAroundView *_lookAroundView;	// 40 = 0x28
    LookAroundTrayHeaderViewController *_headerViewController;	// 48 = 0x30
    UIScrollView *_scrollView;	// 56 = 0x38
    UIView *_containerView;	// 64 = 0x40
    UILayoutGuide *_containerLayoutGuide;	// 72 = 0x48
    UIStackView *_buttonStackView;	// 80 = 0x50
    LookAroundVibrantBackgroundButton *_toggleLabelsButton;	// 88 = 0x58
    LookAroundVibrantBackgroundButton *_shareButton;	// 96 = 0x60
    LookAroundVibrantBackgroundButton *_reportAnIssueButton;	// 104 = 0x68
    UILabel *_lastUpdatedLabel;	// 112 = 0x70
    MKViewWithHairline *_grabberSafeAreaView;	// 120 = 0x78
    NSLayoutConstraint *_grabberSafeAreaHeightConstraint;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00200000003c2cbd
@property(retain, nonatomic) NSLayoutConstraint *grabberSafeAreaHeightConstraint; // @synthesize grabberSafeAreaHeightConstraint=_grabberSafeAreaHeightConstraint;
@property(retain, nonatomic) MKViewWithHairline *grabberSafeAreaView; // @synthesize grabberSafeAreaView=_grabberSafeAreaView;
@property(retain, nonatomic) UILabel *lastUpdatedLabel; // @synthesize lastUpdatedLabel=_lastUpdatedLabel;
@property(retain, nonatomic) LookAroundVibrantBackgroundButton *reportAnIssueButton; // @synthesize reportAnIssueButton=_reportAnIssueButton;
@property(retain, nonatomic) LookAroundVibrantBackgroundButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) LookAroundVibrantBackgroundButton *toggleLabelsButton; // @synthesize toggleLabelsButton=_toggleLabelsButton;
@property(retain, nonatomic) UIStackView *buttonStackView; // @synthesize buttonStackView=_buttonStackView;
@property(retain, nonatomic) UILayoutGuide *containerLayoutGuide; // @synthesize containerLayoutGuide=_containerLayoutGuide;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) LookAroundTrayHeaderViewController *headerViewController; // @synthesize headerViewController=_headerViewController;
@property(retain, nonatomic) MKLookAroundView *lookAroundView; // @synthesize lookAroundView=_lookAroundView;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) __weak id <LookAroundTrayContaineeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <LookAroundActionCoordination> actionCoordinator; // @synthesize actionCoordinator=_actionCoordinator;
- (void)_contentSizeCategoryDidChange:(id)arg1;	// IMP=0x00100000003c2a35
- (void)_updateLabelsButton;	// IMP=0x00100000003c28dc
- (void)_setupViews;	// IMP=0x00100000003c2093
- (void)_setupConstraints;	// IMP=0x00100000003c0d04
- (void)reportAnIssueButtonTapped:(id)arg1;	// IMP=0x00100000003c0c99
- (void)shareButtonTapped:(id)arg1;	// IMP=0x00100000003c0c2e
- (void)toggleLabelsButtonTapped:(id)arg1;	// IMP=0x00100000003c0bac
- (void)trayHeaderDidReceiveTap;	// IMP=0x00100000003c0b04
- (void)trayHeaderButtonDidTouchUpInside:(id)arg1;	// IMP=0x00100000003c0afe
- (void)_captureUserAction:(int)arg1 onTarget:(int)arg2 eventValue:(id)arg3;	// IMP=0x00100000003c09af
- (void)willChangeContainerStyle:(unsigned long long)arg1;	// IMP=0x00100000003c08a9
- (void)willChangeLayout:(unsigned long long)arg1;	// IMP=0x00100000003c07c2
- (double)heightForLayout:(unsigned long long)arg1;	// IMP=0x00100000003c06a8
- (id)contentView;	// IMP=0x00100000003c0693
- (id)headerView;	// IMP=0x00100000003c0676
- (double)headerHeight;	// IMP=0x00100000003c057c
- (long long)preferredUserInterfaceStyle;	// IMP=0x00100000003c0571
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000003c04ee
- (void)viewDidLoad;	// IMP=0x00100000003c0461
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00100000003c030f
@property(readonly, nonatomic) _Bool supportsLookAroundPIP;
- (void)updateLocation;	// IMP=0x00100000003bff72
- (id)initWithLookAroundView:(id)arg1;	// IMP=0x00100000003bfe0a
- (_Bool)_canShowWhileLocked;	// IMP=0x00100000003bfe02

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

