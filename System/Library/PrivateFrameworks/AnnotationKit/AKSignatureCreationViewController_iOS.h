//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class AKController, AKInkSignatureView, AKSignatureBaselineView, AKSmoothPathView, NSString, NSUndoManager, UIButton, UILabel, UINavigationBar, UIResponder;
@protocol AKSignatureCreationControllerDelegate;

@interface AKSignatureCreationViewController_iOS : UIViewController
{
    id <AKSignatureCreationControllerDelegate> _delegate;	// 8 = 0x8
    UINavigationBar *_navBar;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UIButton *_downArrowButton;	// 32 = 0x20
    UIButton *_clearButton;	// 40 = 0x28
    AKSmoothPathView *_pathView;	// 48 = 0x30
    AKInkSignatureView *_signatureView;	// 56 = 0x38
    AKSignatureBaselineView *_baselineView;	// 64 = 0x40
    UILabel *_label;	// 72 = 0x48
    AKController *_controller;	// 80 = 0x50
    UIResponder *_responderToRestore;	// 88 = 0x58
    long long _descriptionTag;	// 96 = 0x60
    NSString *_customDescription;	// 104 = 0x68
    NSUndoManager *__undoManager;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000000000522af
@property(retain, nonatomic) NSUndoManager *_undoManager; // @synthesize _undoManager=__undoManager;
@property(retain, nonatomic) NSString *customDescription; // @synthesize customDescription=_customDescription;
@property long long descriptionTag; // @synthesize descriptionTag=_descriptionTag;
@property(nonatomic) __weak UIResponder *responderToRestore; // @synthesize responderToRestore=_responderToRestore;
@property(nonatomic) __weak AKController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) AKSignatureBaselineView *baselineView; // @synthesize baselineView=_baselineView;
@property(retain, nonatomic) AKInkSignatureView *signatureView; // @synthesize signatureView=_signatureView;
@property(retain, nonatomic) AKSmoothPathView *pathView; // @synthesize pathView=_pathView;
@property(retain, nonatomic) UIButton *clearButton; // @synthesize clearButton=_clearButton;
@property(retain, nonatomic) UIButton *downArrowButton; // @synthesize downArrowButton=_downArrowButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UINavigationBar *navBar; // @synthesize navBar=_navBar;
@property __weak id <AKSignatureCreationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;	// IMP=0x000000000005204c
- (id)undoManager;	// IMP=0x0000000000051fd5
- (void)_updateSignatureDescriptionWithStringValue:(id)arg1;	// IMP=0x0000000000051e9e
- (void)_removeSignatureDescription;	// IMP=0x0000000000051dda
- (void)showEditCustomDescriptionAlert;	// IMP=0x00000000000517e9
- (void)_showSignatureDescriptionSelectionAlert;	// IMP=0x0000000000050f5d
- (long long)positionForBar:(id)arg1;	// IMP=0x0000000000050f52
- (void)_applicationDidBecomeActive:(id)arg1;	// IMP=0x0000000000050eac
- (void)_notifyDidDismiss;	// IMP=0x0000000000050e4f
- (void)_done:(id)arg1;	// IMP=0x0000000000050af8
- (void)_clear:(id)arg1;	// IMP=0x0000000000050abb
- (void)_cancel:(id)arg1;	// IMP=0x0000000000050989
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000000050981
- (void)_validateButtons;	// IMP=0x0000000000050758
- (_Bool)prefersStatusBarHidden;	// IMP=0x0000000000050750
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000005049a
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000005034d
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x0000000000050117
- (void)didReceiveMemoryWarning;	// IMP=0x00000000000500e8
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000050051
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000004fffc
- (_Bool)becomeFirstResponder;	// IMP=0x000000000004ff31
- (_Bool)canBecomeFirstResponder;	// IMP=0x000000000004ff29
- (void)viewDidLoad;	// IMP=0x000000000004e67e
- (void)loadView;	// IMP=0x000000000004e611
- (void)dealloc;	// IMP=0x000000000004e59c
- (id)initWithController:(id)arg1;	// IMP=0x000000000004e439

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
