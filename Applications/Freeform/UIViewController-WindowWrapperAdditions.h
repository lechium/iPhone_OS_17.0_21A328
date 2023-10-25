//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class CRLiOSPopoverPresentationController, CRLiOSPresentationConfiguration, CRLiOSWindowWrapper;

@interface UIViewController (WindowWrapperAdditions)
@property(readonly, nonatomic) CRLiOSWindowWrapper *crl_windowWrapper;
- (void)crl_animateAlongsideCurrentTransitionIfPossible:(CDUnknownBlockType)arg1;	// IMP=0x0010000000341fd4
@property(readonly, nonatomic) CRLiOSPopoverPresentationController *crl_popoverPresentationController;
@property(nonatomic, setter=crl_setModalPresentationStyle:) long long crl_modalPresentationStyle;
@property(readonly, nonatomic) _Bool crl_wantsCustomPopoverPresentationController;
- (void)crl_dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000341d8a
- (_Bool)crl_updateContentSizePreservingPreviousWidthWithSize:(struct CGSize)arg1 validateSize:(CDUnknownBlockType)arg2;	// IMP=0x0010000000341acb
- (_Bool)crl_updateContentSizePreservingPreviousWidthWithSize:(struct CGSize)arg1;	// IMP=0x0010000000341ab7
@property(readonly, nonatomic) _Bool crl_shouldUpdateNavigationContentSizeWithPreferredContentSize;
- (void)crl_adjustScrollIndicatorInsetsForTableView:(id)arg1;	// IMP=0x00100000003417d3
@property(readonly, nonatomic) _Bool crl_optsIntoDoneButtonManagement;
@property(readonly, nonatomic) _Bool crl_preserveEditorSelection;
@property(retain, nonatomic, setter=crl_setPresentationConfiguration:) CRLiOSPresentationConfiguration *crl_presentationConfiguration;
@property(nonatomic, readonly) _Bool crl_canBeDismissed;
@end
