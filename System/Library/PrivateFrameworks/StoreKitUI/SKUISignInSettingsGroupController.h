//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable, NSString;

__attribute__((visibility("hidden")))
@interface SKUISignInSettingsGroupController
{
    NSString *_accountName;	// 8 = 0x8
    _Bool _authenticating;	// 16 = 0x10
    NSMapTable *_keyMapping;	// 24 = 0x18
    NSString *_password;	// 32 = 0x20
    _Bool _valid;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000acfd9
- (void)_updateValidation;	// IMP=0x00000000000acf42
- (id)_submitSettingDescription;	// IMP=0x00000000000acdaf
- (void)_signInSuccess:(id)arg1;	// IMP=0x00000000000acc88
- (void)_signInFailed:(id)arg1 error:(id)arg2;	// IMP=0x00000000000ac8e7
- (id)_settingDescriptionForKey:(id)arg1;	// IMP=0x00000000000ac546
- (void)_resignFirstResponder;	// IMP=0x00000000000ac388
- (id)_keyForSettingDescription:(id)arg1;	// IMP=0x00000000000ac1c4
- (void)_becomeFirstResponderWithKey:(id)arg1;	// IMP=0x00000000000ac131
- (void)_updateFieldsAuthenticating:(_Bool)arg1;	// IMP=0x00000000000abf71
- (void)_attemptSignInWithAccountName:(id)arg1 password:(id)arg2;	// IMP=0x00000000000ab813
- (id)valueForSettingDescription:(id)arg1;	// IMP=0x00000000000ab74d
- (void)submitSettingDescription:(id)arg1;	// IMP=0x00000000000ab643
- (void)setValue:(id)arg1 forSettingDescription:(id)arg2;	// IMP=0x00000000000ab56b
- (void)returnInSettingDescription:(id)arg1;	// IMP=0x00000000000ab454
- (_Bool)isAuthenticating;	// IMP=0x00000000000ab3f7

@end
