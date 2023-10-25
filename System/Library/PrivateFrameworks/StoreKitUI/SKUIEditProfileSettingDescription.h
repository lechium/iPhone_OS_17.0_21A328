//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOperationQueue, NSRegularExpression, NSString, SKUISettingValueStore, UIImage;

__attribute__((visibility("hidden")))
@interface SKUIEditProfileSettingDescription
{
    CDUnknownBlockType _commitBlock;	// 8 = 0x8
    _Bool _editing;	// 16 = 0x10
    NSOperationQueue *_operationQueue;	// 24 = 0x18
    NSRegularExpression *_handleValidation;	// 32 = 0x20
    _Bool _suggestedHandlesDisplayed;	// 40 = 0x28
    SKUISettingValueStore *_valueStore;	// 48 = 0x30
    _Bool _handleValid;	// 56 = 0x38
}

+ (Class)_viewClassForSettingDescription:(id)arg1;	// IMP=0x001000000038fbcd
+ (_Bool)allowsEdit;	// IMP=0x001000000038fa51
- (void).cxx_destruct;	// IMP=0x00000000003919cd
@property(readonly, nonatomic, getter=isHandleValid) _Bool handleValid; // @synthesize handleValid=_handleValid;
@property(readonly, nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
- (id)_valueStore;	// IMP=0x0000000000391998
- (_Bool)_validateName:(id)arg1;	// IMP=0x000000000039196e
- (_Bool)_validateHandle:(id)arg1;	// IMP=0x000000000039186b
- (void)_updateValidity;	// IMP=0x00000000003917b5
- (void)_uploadProfileImage:(id)arg1;	// IMP=0x00000000003913c5
- (void)_updateAccountInfo;	// IMP=0x0000000000390bc5
- (void)_reloadData;	// IMP=0x0000000000390b97
- (void)_leaveEditMode;	// IMP=0x0000000000390b5e
- (void)_hideFooter;	// IMP=0x0000000000390a84
- (void)_hideSuggestedHandles;	// IMP=0x0000000000390a72
- (void)_finalizeCommitWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x0000000000390958
- (void)_fetchSuggestedHandles;	// IMP=0x0000000000390665
- (void)_fetchProfilePhoto;	// IMP=0x00000000003903ed
- (void)_fetchAccountInfo;	// IMP=0x0000000000390159
- (void)_enterEditMode;	// IMP=0x0000000000390111
- (void)_displaySuggestedHandles:(id)arg1;	// IMP=0x000000000039003c
- (void)_displayRules:(_Bool)arg1;	// IMP=0x000000000038ff80
- (void)_displayFooter:(id)arg1;	// IMP=0x000000000038fe95
- (void)_authenticateOnCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000038fc45
- (void)suggestedHandlesSettingsHeaderFooterDescription:(id)arg1 didSelectSuggestedHandle:(id)arg2;	// IMP=0x000000000038fbde
- (void)discardEdits;	// IMP=0x000000000038fb94
- (_Bool)commitEdits:(CDUnknownBlockType)arg1;	// IMP=0x000000000038fa90
- (void)cancelEdits;	// IMP=0x000000000038fa73
- (void)beginEditing;	// IMP=0x000000000038fa61
- (_Bool)allowsSelection;	// IMP=0x000000000038fa59
- (void)profileImagePicker:(id)arg1 didPickProfileImage:(id)arg2 withCropRect:(id)arg3;	// IMP=0x000000000038f987
- (void)profileImagePickerDidCancel:(id)arg1;	// IMP=0x000000000038f96d
- (void)setPhoto:(id)arg1 withCropRect:(struct CGRect)arg2;	// IMP=0x000000000038f852
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSString *handle;
@property(readonly, copy, nonatomic) UIImage *photo;
- (void)chooseNewProfilePhoto;	// IMP=0x000000000038f4ad
- (void)dealloc;	// IMP=0x000000000038f464
- (id)initWithViewElement:(id)arg1 parent:(id)arg2;	// IMP=0x000000000038f31d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
