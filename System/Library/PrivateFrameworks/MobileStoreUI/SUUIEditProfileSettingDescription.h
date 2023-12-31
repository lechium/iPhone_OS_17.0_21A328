//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOperationQueue, NSRegularExpression, NSString, SUUISettingValueStore, UIImage;

__attribute__((visibility("hidden")))
@interface SUUIEditProfileSettingDescription
{
    CDUnknownBlockType _commitBlock;	// 8 = 0x8
    _Bool _editing;	// 16 = 0x10
    NSOperationQueue *_operationQueue;	// 24 = 0x18
    NSRegularExpression *_handleValidation;	// 32 = 0x20
    _Bool _suggestedHandlesDisplayed;	// 40 = 0x28
    SUUISettingValueStore *_valueStore;	// 48 = 0x30
    _Bool _handleValid;	// 56 = 0x38
}

+ (Class)_viewClassForSettingDescription:(id)arg1;	// IMP=0x001000000036b5a1
+ (_Bool)allowsEdit;	// IMP=0x001000000036b425
- (void).cxx_destruct;	// IMP=0x000000000036d3a1
@property(readonly, nonatomic, getter=isHandleValid) _Bool handleValid; // @synthesize handleValid=_handleValid;
@property(readonly, nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
- (id)_valueStore;	// IMP=0x000000000036d36c
- (_Bool)_validateName:(id)arg1;	// IMP=0x000000000036d342
- (_Bool)_validateHandle:(id)arg1;	// IMP=0x000000000036d23f
- (void)_updateValidity;	// IMP=0x000000000036d189
- (void)_uploadProfileImage:(id)arg1;	// IMP=0x000000000036cd99
- (void)_updateAccountInfo;	// IMP=0x000000000036c599
- (void)_reloadData;	// IMP=0x000000000036c56b
- (void)_leaveEditMode;	// IMP=0x000000000036c532
- (void)_hideFooter;	// IMP=0x000000000036c458
- (void)_hideSuggestedHandles;	// IMP=0x000000000036c446
- (void)_finalizeCommitWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x000000000036c32c
- (void)_fetchSuggestedHandles;	// IMP=0x000000000036c039
- (void)_fetchProfilePhoto;	// IMP=0x000000000036bdc1
- (void)_fetchAccountInfo;	// IMP=0x000000000036bb2d
- (void)_enterEditMode;	// IMP=0x000000000036bae5
- (void)_displaySuggestedHandles:(id)arg1;	// IMP=0x000000000036ba10
- (void)_displayRules:(_Bool)arg1;	// IMP=0x000000000036b954
- (void)_displayFooter:(id)arg1;	// IMP=0x000000000036b869
- (void)_authenticateOnCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000036b619
- (void)suggestedHandlesSettingsHeaderFooterDescription:(id)arg1 didSelectSuggestedHandle:(id)arg2;	// IMP=0x000000000036b5b2
- (void)discardEdits;	// IMP=0x000000000036b568
- (_Bool)commitEdits:(CDUnknownBlockType)arg1;	// IMP=0x000000000036b464
- (void)cancelEdits;	// IMP=0x000000000036b447
- (void)beginEditing;	// IMP=0x000000000036b435
- (_Bool)allowsSelection;	// IMP=0x000000000036b42d
- (void)profileImagePicker:(id)arg1 didPickProfileImage:(id)arg2 withCropRect:(id)arg3;	// IMP=0x000000000036b35b
- (void)profileImagePickerDidCancel:(id)arg1;	// IMP=0x000000000036b341
- (void)setPhoto:(id)arg1 withCropRect:(struct CGRect)arg2;	// IMP=0x000000000036b226
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSString *handle;
@property(readonly, copy, nonatomic) UIImage *photo;
- (void)chooseNewProfilePhoto;	// IMP=0x000000000036ae81
- (void)dealloc;	// IMP=0x000000000036ae38
- (id)initWithViewElement:(id)arg1 parent:(id)arg2;	// IMP=0x000000000036ad73

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

