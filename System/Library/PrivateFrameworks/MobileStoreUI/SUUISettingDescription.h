//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SUUISettingsGroupDescription, SUUIViewElement;

__attribute__((visibility("hidden")))
@interface SUUISettingDescription : NSObject
{
    SUUIViewElement *_viewElement;	// 8 = 0x8
    _Bool _editsValid;	// 16 = 0x10
    SUUISettingsGroupDescription *_parent;	// 24 = 0x18
}

+ (Class)_viewClassForSettingDescription:(id)arg1;	// IMP=0x00600000001a8837
+ (Class)viewClassForSettingDescription:(id)arg1;	// IMP=0x00600000001a8628
+ (_Bool)allowsEdit;	// IMP=0x00600000001a8620
- (void).cxx_destruct;	// IMP=0x00000000001a8b26
@property(retain, nonatomic) SUUIViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(nonatomic) __weak SUUISettingsGroupDescription *parent; // @synthesize parent=_parent;
- (void)_setEditsValid:(_Bool)arg1;	// IMP=0x00000000001a8aae
- (void)_revealSetting;	// IMP=0x00000000001a8a78
- (void)_reloadSetting;	// IMP=0x00000000001a8a42
- (void)_presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001a89c5
- (_Bool)_isHidden;	// IMP=0x00000000001a898a
- (_Bool)_initiallyHidden;	// IMP=0x00000000001a8982
- (void)_hideSetting;	// IMP=0x00000000001a894c
- (void)_dispatchUpdate:(id)arg1;	// IMP=0x00000000001a88f2
- (void)_dismissViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001a8875
- (void)_deleteSetting;	// IMP=0x00000000001a883f
- (void)reloadWithViewElement:(id)arg1 parent:(id)arg2;	// IMP=0x00000000001a87e9
- (void)reloadData;	// IMP=0x00000000001a87e3
- (id)indexPath;	// IMP=0x00000000001a879a
- (void)handleSelectionOnCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001a86d7
@property(readonly, nonatomic) _Bool editsValid;
- (void)discardEdits;	// IMP=0x00000000001a869d
- (_Bool)commitEdits:(CDUnknownBlockType)arg1;	// IMP=0x00000000001a868a
- (void)cancelEdits;	// IMP=0x00000000001a8684
- (void)beginEditing;	// IMP=0x00000000001a867e
@property(readonly, nonatomic) _Bool allowsSelection;
- (id)initWithViewElement:(id)arg1 parent:(id)arg2;	// IMP=0x00000000001a8586

@end

