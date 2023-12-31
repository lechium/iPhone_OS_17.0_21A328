//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary, NSMutableSet, _UIKeyShortcutHUDMenu, _UIMenuLeafValidation;

__attribute__((visibility("hidden")))
@interface _UIKeyShortcutHUDModel : NSObject
{
    NSMapTable *_displayableAppKeyCommandToModelShortcutMap;	// 8 = 0x8
    NSMutableSet *_performableAppKeyCommands;	// 16 = 0x10
    NSMutableSet *_equivalentKeyCommandsInPriorityAlreadyEnumerated;	// 24 = 0x18
    NSMapTable *_appKeyCommandToModelKeyCommandMap;	// 32 = 0x20
    struct __GSKeyboard *_gsKeyboard;	// 40 = 0x28
    _UIMenuLeafValidation *_validation;	// 48 = 0x30
    _UIKeyShortcutHUDMenu *_menu;	// 56 = 0x38
    NSMutableSet *_modelKeyCommands;	// 64 = 0x40
    NSMapTable *_modelKeyCommandToModelShortcutMap;	// 72 = 0x48
    NSMutableDictionary *_modelKeyCommandToAppKeyCommandMap;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000ae04d1
+ (id)modelForCurrentMenu;	// IMP=0x0010000000adcdc6
- (void).cxx_destruct;	// IMP=0x0000000000ae0c04
@property(retain, nonatomic) NSMutableDictionary *modelKeyCommandToAppKeyCommandMap; // @synthesize modelKeyCommandToAppKeyCommandMap=_modelKeyCommandToAppKeyCommandMap;
@property(retain, nonatomic) NSMapTable *modelKeyCommandToModelShortcutMap; // @synthesize modelKeyCommandToModelShortcutMap=_modelKeyCommandToModelShortcutMap;
@property(retain, nonatomic) NSMutableSet *modelKeyCommands; // @synthesize modelKeyCommands=_modelKeyCommands;
@property(readonly, nonatomic) _UIKeyShortcutHUDMenu *menu; // @synthesize menu=_menu;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000ae069d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000ae04d9
- (void)_addShortcutsFromHUDMenu:(id)arg1 toShortcutsArray:(id)arg2;	// IMP=0x0000000000ae0249
- (id)_finalizedHUDMenuFromValidatedHUDMenu:(id)arg1;	// IMP=0x0000000000adffb4
- (id)_validatedHUDMenuFromUIMenu:(id)arg1;	// IMP=0x0000000000adfc5c
- (_Bool)_isKeyCommandPerformable:(id)arg1 outTarget:(out id *)arg2;	// IMP=0x0000000000adfaef
- (void)_validateBaseKeyCommand:(id)arg1 usingAlternate:(id)arg2;	// IMP=0x0000000000adf62c
- (void)_validateKeyCommandAndAlternates:(id)arg1;	// IMP=0x0000000000adf4c2
- (void)_enumerateKeyCommandsInMenu:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000adf1db
- (id)_menuByOmittingNonKeyCommandsInMenu:(id)arg1;	// IMP=0x0000000000adee5a
- (id)_sanitizedMainMenu;	// IMP=0x0000000000adeb3f
- (id)_responderBasedKeyCommandsStartingAtResponder:(id)arg1;	// IMP=0x0000000000adea66
- (void)_buildMenu;	// IMP=0x0000000000addcec
- (id)originalTargetForSelectedKeyCommand:(id)arg1;	// IMP=0x0000000000addc68
- (id)appKeyCommandForSelectedKeyCommand:(id)arg1;	// IMP=0x0000000000addc52
- (id)modelShortcutForModelKeyCommand:(id)arg1;	// IMP=0x0000000000addc3c
- (id)menuWithAlternatesForModifierFlags:(long long)arg1;	// IMP=0x0000000000add7a9
- (id)searchMenuWithSearchText:(id)arg1 maxSearchResultEntries:(unsigned long long)arg2;	// IMP=0x0000000000add0b8
- (id)modelKeyCommandsExcludingHUDCommands:(id)arg1;	// IMP=0x0000000000adced7
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (id)init;	// IMP=0x0000000000adcdf2

@end

