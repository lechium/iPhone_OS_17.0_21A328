//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE, NSSet;

@interface _TtC8Freeform34CRLiOSStencilLibraryViewController : UIViewController
{
    MISSING_TYPE *stencilLibrary;	// 8 = 0x8
    MISSING_TYPE *editingCoordinator;	// 16 = 0x10
    MISSING_TYPE *icc;	// 24 = 0x18
    MISSING_TYPE *stencilDataArchiver;	// 32 = 0x20
    MISSING_TYPE *$__lazy_storage_$_gridView;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_gridViewController;	// 0 = 0x0
    MISSING_TYPE *swiftUIPublisher;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0040000000acb7b0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000acb750
- (void)stencilGridViewWantsToSaveStencilToLibraryWithTitle:(id)arg1;	// IMP=0x0010000000acb700
- (void)stencilGridViewDidPressCancelButton;	// IMP=0x0010000000acb6e0
@property(nonatomic, readonly) NSSet *boardItemsToSave;
- (void)dismissViewController;	// IMP=0x0010000000aca0f0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000aca0b0
- (void)viewDidLoad;	// IMP=0x0010000000ac9e90
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000ac9e70
- (id)initWithEditingCoordinator:(id)arg1 interactiveCanvasController:(id)arg2 boardItemsToSave:(id)arg3;	// IMP=0x0010000000ac9df0

@end

