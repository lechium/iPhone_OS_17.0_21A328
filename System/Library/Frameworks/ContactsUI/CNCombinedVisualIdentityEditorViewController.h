//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class CNPhotoPickerDataSource, CNVisualIdentityAvatarStyleEditorViewController, NSString, UISegmentedControl;
@protocol CNVisualIdentityItemEditorViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNCombinedVisualIdentityEditorViewController : UIViewController
{
    id <CNVisualIdentityItemEditorViewControllerDelegate> _delegate;	// 8 = 0x8
    CNPhotoPickerDataSource *_dataSource;	// 16 = 0x10
    UISegmentedControl *_segmentedControl;	// 24 = 0x18
    CNVisualIdentityAvatarStyleEditorViewController *_textEditor;	// 32 = 0x20
    CNVisualIdentityAvatarStyleEditorViewController *_emojiEditor;	// 40 = 0x28
    CNVisualIdentityAvatarStyleEditorViewController *_selectedEditor;	// 48 = 0x30
}

+ (id)log;	// IMP=0x001000000029fb0b
- (void).cxx_destruct;	// IMP=0x000000000029fa98
@property(retain, nonatomic) CNVisualIdentityAvatarStyleEditorViewController *selectedEditor; // @synthesize selectedEditor=_selectedEditor;
@property(retain, nonatomic) CNVisualIdentityAvatarStyleEditorViewController *emojiEditor; // @synthesize emojiEditor=_emojiEditor;
@property(retain, nonatomic) CNVisualIdentityAvatarStyleEditorViewController *textEditor; // @synthesize textEditor=_textEditor;
@property(retain, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(retain, nonatomic) CNPhotoPickerDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <CNVisualIdentityItemEditorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)avatarStyleEditor:(id)arg1 didUpdateItem:(id)arg2;	// IMP=0x000000000029f9a0
- (id)updatedProviderItem;	// IMP=0x000000000029f84e
- (void)didTapDone;	// IMP=0x000000000029f796
- (void)didTapCancel;	// IMP=0x000000000029f701
- (void)_updateEditorsVisibility;	// IMP=0x000000000029f63c
- (void)setupEditors;	// IMP=0x000000000029ed71
- (void)_segmentedControlDidChange:(id)arg1;	// IMP=0x000000000029ecc9
- (void)setupSegmentedControl;	// IMP=0x000000000029e897
- (void)updateDoneButtonEnabledState;	// IMP=0x000000000029e764
- (void)setupBarButtonItems;	// IMP=0x000000000029e52c
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000029e4ba
- (void)viewDidLoad;	// IMP=0x000000000029e3e7
- (id)_newStyleEditorWithItem:(id)arg1;	// IMP=0x000000000029e343
- (id)initWithProviderItem:(id)arg1 dataSource:(id)arg2;	// IMP=0x000000000029e08b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

