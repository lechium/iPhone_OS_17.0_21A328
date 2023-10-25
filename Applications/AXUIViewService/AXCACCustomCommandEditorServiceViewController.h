//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class CACCustomCommandEditorViewController, NSString, UINavigationController;

@interface AXCACCustomCommandEditorServiceViewController : SBUIRemoteAlertServiceViewController
{
    UINavigationController *_editorNavigationController;	// 8 = 0x8
    CACCustomCommandEditorViewController *_editor;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000003b15
@property(readonly, nonatomic) CACCustomCommandEditorViewController *editor; // @synthesize editor=_editor;
@property(readonly, nonatomic) UINavigationController *editorNavigationController; // @synthesize editorNavigationController=_editorNavigationController;
- (void)didUpdateSpokenStringForEditor:(id)arg1;	// IMP=0x0010000000003aed
- (void)didUpdatePropertiesForEditor:(id)arg1;	// IMP=0x0010000000003ae7
- (void)didFinalizeSpokenStringForEditor:(id)arg1;	// IMP=0x0010000000003ae1
- (void)didCancelEditingCustomCommandForEditor:(id)arg1;	// IMP=0x0010000000003acf
- (void)didFinishEditingCustomCommandForEditor:(id)arg1;	// IMP=0x0010000000003abd
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x0010000000003aab
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000003335
- (void)prepareForActivationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000003323
- (void)_dismiss;	// IMP=0x0010000000003291
- (void)_cancelButtonTapped;	// IMP=0x001000000000327f
- (void)_saveCommandItem;	// IMP=0x001000000000304f
- (long long)preferredStatusBarStyle;	// IMP=0x0010000000003047
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000002f00
- (id)init;	// IMP=0x0010000000002ba5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
