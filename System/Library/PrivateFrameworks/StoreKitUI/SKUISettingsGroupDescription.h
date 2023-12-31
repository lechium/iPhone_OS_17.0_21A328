//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, SKUIClientContext, SKUIGroupViewElement, SKUISettingsContext, SKUISettingsGroupController, SKUISettingsGroupsDescription, SKUISettingsHeaderFooterDescription, SKUISettingsObjectStore;

__attribute__((visibility("hidden")))
@interface SKUISettingsGroupDescription : NSObject
{
    NSMutableSet *_editableSettings;	// 8 = 0x8
    SKUISettingsHeaderFooterDescription *_footerDescription;	// 16 = 0x10
    SKUISettingsHeaderFooterDescription *_headerDescription;	// 24 = 0x18
    SKUISettingsObjectStore *_settingDescriptions;	// 32 = 0x20
    SKUISettingsContext *_settingsContext;	// 40 = 0x28
    SKUISettingsGroupController *_controller;	// 48 = 0x30
    SKUISettingsGroupsDescription *_parent;	// 56 = 0x38
    SKUIGroupViewElement *_viewElement;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000009e3df
@property(retain, nonatomic) SKUIGroupViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(nonatomic) __weak SKUISettingsGroupsDescription *parent; // @synthesize parent=_parent;
@property(nonatomic) __weak SKUISettingsGroupController *controller; // @synthesize controller=_controller;
- (void)_updatedEditsValid;	// IMP=0x000000000009e345
- (void)_presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000009e2c8
- (void)_dismissViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000009e24b
- (void)_dispatchUpdateForSettingDescription:(id)arg1 updateType:(long long)arg2;	// IMP=0x000000000009e188
- (id)description;	// IMP=0x000000000009e02e
- (id)viewElementForSettingAtIndex:(unsigned long long)arg1;	// IMP=0x000000000009dfde
- (id)settingDescriptionAtIndex:(unsigned long long)arg1;	// IMP=0x000000000009dfc8
- (void)setHeaderViewElement:(id)arg1;	// IMP=0x000000000009df8f
- (void)setHeaderDescription:(id)arg1;	// IMP=0x000000000009df7e
- (void)setFooterViewElement:(id)arg1;	// IMP=0x000000000009df45
- (void)setFooterDescription:(id)arg1;	// IMP=0x000000000009df34
- (void)revealSettingsGroup;	// IMP=0x000000000009defe
- (void)revealSettingDescription:(id)arg1;	// IMP=0x000000000009de7b
- (void)requestLayoutForWidth:(double)arg1 context:(id)arg2;	// IMP=0x000000000009dc89
- (void)reloadSettingDescription:(id)arg1;	// IMP=0x000000000009dc72
- (void)reloadData;	// IMP=0x000000000009dc40
- (void)recycle;	// IMP=0x000000000009dbd8
- (unsigned long long)numberOfSettings;	// IMP=0x000000000009dbc2
- (id)newSiblingWithClass:(Class)arg1;	// IMP=0x000000000009db96
- (_Bool)isSettingDescriptionHidden:(id)arg1;	// IMP=0x000000000009db7d
- (_Bool)isEmpty;	// IMP=0x000000000009db57
- (id)indexPathForSettingDescription:(id)arg1;	// IMP=0x000000000009dade
- (unsigned long long)index;	// IMP=0x000000000009daa1
- (void)hideSettingDescription:(id)arg1;	// IMP=0x000000000009d98e
- (void)hideSettingsGroup;	// IMP=0x000000000009d958
- (id)headerDescription;	// IMP=0x000000000009d94a
- (_Bool)hasNoVisibleSettings;	// IMP=0x000000000009d90e
- (_Bool)hasHeader;	// IMP=0x000000000009d900
- (_Bool)hasFooter;	// IMP=0x000000000009d8f2
- (_Bool)hasEditableSettingDescriptions;	// IMP=0x000000000009d8cc
- (id)footerDescription;	// IMP=0x000000000009d8be
- (id)editableSettingDescriptions;	// IMP=0x000000000009d8a0
- (void)dispatchUpdate:(id)arg1;	// IMP=0x000000000009d846
- (void)deleteSettingDescription:(id)arg1;	// IMP=0x000000000009d6fc
- (void)deleteSettingsGroup;	// IMP=0x000000000009d6c6
@property(readonly, nonatomic) SKUIClientContext *clientContext;
- (void)addSibling:(id)arg1;	// IMP=0x000000000009d597
- (void)addSettingViewElement:(id)arg1;	// IMP=0x000000000009d50b
- (void)addSettingDescription:(id)arg1;	// IMP=0x000000000009d40c
- (id)initWithParent:(id)arg1 settingsContext:(id)arg2;	// IMP=0x000000000009d2f5

@end

