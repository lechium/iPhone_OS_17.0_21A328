//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Accounts/ACAccountStore.h>

@class ACAccount, NSArray, NSString;

@interface ACAccountStore (AppleMediaServices)
+ (_Bool)_isAccountsCachingEnabled;	// IMP=0x00200000001bae18
+ (id)_secureTokenForIdentifier:(id)arg1;	// IMP=0x00200000001baa6d
+ (id)ams_accountTypeIdentifierForMediaType:(id)arg1;	// IMP=0x00200000001b4bab
+ (id)ams_sharedAccountStoreForMediaType:(id)arg1;	// IMP=0x00200000001b3f0e
+ (id)ams_sharedAccountStoreForClient:(id)arg1;	// IMP=0x00200000001b3eac
+ (id)ams_sharedAccountStore;	// IMP=0x00200000001b3e98
+ (id)_ams_newAccountStore;	// IMP=0x00200000001bc57a
+ (id)_ams_defaultAccountStore;	// IMP=0x00200000001bc15b
+ (id)ams_sharedAccountStoreForProcessInfo:(id)arg1;	// IMP=0x00200000001bafc4
- (id)ams_iTunesSandboxAccounts;	// IMP=0x00100000001baf66
- (id)ams_iTunesAccountWithHomeUserIdentifier:(id)arg1;	// IMP=0x00100000001baf5e
- (id)ams_iTunesAccountWithHomeUserID:(id)arg1;	// IMP=0x00100000001baed4
- (id)ams_iTunesAccountWithHomeID:(id)arg1;	// IMP=0x00100000001baec2
@property(readonly, nonatomic) NSArray *ams_iTunesAccountsWithHomeUserIdentifiers;
- (id)ams_iTunesAccountsWithHomeUserID;	// IMP=0x00100000001baea3
- (id)ams_iTunesAccountForHomeWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001bae44
- (id)ams_iTunesAccountForHomeWithIdentifier:(id)arg1;	// IMP=0x00100000001bae30
- (id)_saveAccount:(id)arg1 verifyCredentials:(_Bool)arg2;	// IMP=0x00100000001ba69b
- (id)_iTunesAccountsForAccountType:(id)arg1;	// IMP=0x00100000001ba556
- (id)_updateStorefrontInLocalAccount:(id)arg1;	// IMP=0x00100000001b9cef
- (id)_fetchLocaliTunesAccountForAccountType:(id)arg1 shouldUpdateStorefront:(_Bool)arg2;	// IMP=0x00100000001b9892
- (id)_createLocaliTunesAccountForAccountType:(id)arg1;	// IMP=0x00100000001b9721
- (id)_correspondingAccountWithAccountTypeIdentifier:(id)arg1 forAccount:(id)arg2;	// IMP=0x00100000001b9480
- (void)_checkErrorForUnitTestAccess:(id)arg1;	// IMP=0x00100000001b91d7
- (_Bool)_addUserCookiesForResponse:(id)arg1 account:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001b91bf
- (_Bool)_addGlobalCookiesForResponse:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001b9151
- (id)_accountTypeForMediaType:(id)arg1;	// IMP=0x00100000001b90c6
- (_Bool)ams_removeCookiesMatchingProperties:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001b8f47
- (_Bool)ams_addCookiesForResult:(id)arg1 account:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001b8e57
- (_Bool)ams_addCookiesForResponse:(id)arg1 request:(id)arg2 account:(id)arg3 error:(id *)arg4;	// IMP=0x00100000001b8e3f
- (_Bool)ams_addCookiesForResponse:(id)arg1 account:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001b8dca
- (_Bool)ams_setSecureToken:(id)arg1 forAccount:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001b86e4
- (id)ams_setiTunesAccount:(id)arg1 forHomeWithIdentifier:(id)arg2;	// IMP=0x00100000001b82f8
- (id)ams_secureTokenForAccount:(id)arg1;	// IMP=0x00100000001b81df
- (id)ams_saveAccount:(id)arg1 verifyCredentials:(_Bool)arg2;	// IMP=0x00100000001b81c8
- (id)ams_saveAccount:(id)arg1;	// IMP=0x00100000001b81b4
- (id)ams_localiTunesAccountForAccountMediaType:(id)arg1;	// IMP=0x00100000001b81a0
- (id)ams_mediaAccountForHomeWithIdentifier:(id)arg1;	// IMP=0x00100000001b7f01
- (id)ams_localiTunesAccountForAccountType:(id)arg1;	// IMP=0x00100000001b7eed
- (id)ams_iTunesAccountsForMediaTypes:(id)arg1;	// IMP=0x00100000001b7ba7
- (id)ams_iTunesAccountsForMediaType:(id)arg1;	// IMP=0x00100000001b7b17
- (id)ams_iTunesAccountWithUsername:(id)arg1 forMediaType:(id)arg2;	// IMP=0x00100000001b7862
- (id)ams_iTunesAccountWithUsername:(id)arg1;	// IMP=0x00100000001b771e
- (id)ams_iTunesAccountWithDSID:(id)arg1 forMediaType:(id)arg2;	// IMP=0x00100000001b74e8
- (id)ams_iTunesAccountWithDSID:(id)arg1;	// IMP=0x00100000001b73b9
- (id)ams_iTunesAccountWithAltDSID:(id)arg1 DSID:(id)arg2 username:(id)arg3 forMediaType:(id)arg4;	// IMP=0x00100000001b6f23
- (id)ams_iTunesAccountWithAltDSID:(id)arg1 DSID:(id)arg2 username:(id)arg3;	// IMP=0x00100000001b6e43
- (id)ams_iTunesAccountWithAltDSID:(id)arg1 forMediaType:(id)arg2;	// IMP=0x00100000001b6c0d
- (id)ams_iTunesAccountWithAltDSID:(id)arg1;	// IMP=0x00100000001b6ae5
- (id)ams_iTunesAccountForAccount:(id)arg1 forMediaType:(id)arg2 createIfNeeded:(_Bool)arg3;	// IMP=0x00100000001b5cfd
- (id)ams_iTunesAccountForAccount:(id)arg1;	// IMP=0x00100000001b5cde
- (id)ams_IDSAccountForAccount:(id)arg1;	// IMP=0x00100000001b5cbf
- (id)ams_IDMSAccountForAccount:(id)arg1;	// IMP=0x00100000001b5ca0
- (id)ams_iCloudAccountForAccount:(id)arg1;	// IMP=0x00100000001b5c81
- (id)ams_cookiesForURL:(id)arg1 bag:(id)arg2;	// IMP=0x00100000001b564b
- (id)ams_cookiesForURL:(id)arg1;	// IMP=0x00100000001b55f7
- (id)ams_fetchGrandSlamTokenForAccount:(id)arg1 withIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001b5392
- (id)ams_activeiTunesAccountForMediaType:(id)arg1;	// IMP=0x00100000001b4fe6
- (id)ams_accountWithAltDSID:(id)arg1 DSID:(id)arg2 username:(id)arg3 accountTypeIdentifier:(id)arg4;	// IMP=0x00100000001b4c1f
@property(readonly, nonatomic) NSString *ams_mediaType;
- (id)ams_fetchLocaliTunesAccount;	// IMP=0x00100000001b4af2
- (id)ams_localiTunesAccount;	// IMP=0x00100000001b45d0
@property(readonly, nonatomic) NSArray *ams_iTunesAccounts;
@property(readonly, nonatomic) ACAccount *ams_activeiTunesAccount;
@property(readonly, nonatomic) ACAccount *ams_activeiCloudAccount;
@property(readonly, nonatomic, getter=ams_isActiveAccountCombined) _Bool ams_activeAccountCombined;
@property(readonly, nonatomic) NSArray *ams_alliTunesAccounts;
- (id)_ams_fetchAccountsWithAccountTypeIdentifier:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00100000001bc4bf
- (id)_ams_fetchAccountsWithAccountType:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00100000001bc379
- (id)_ams_fetchAccountWithIdentifier:(id)arg1;	// IMP=0x00100000001bc1b5
- (id)_ams_fetchAccountTypeWithAccountTypeIdenfitier:(id)arg1;	// IMP=0x00100000001bc03b
- (id)_ams_accountWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001bbf5d
- (id)_ams_accountsWithAccountTypeIdentifier:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00100000001bbee7
- (id)_ams_accountsWithAccountType:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00100000001bbdf1
- (id)_ams_accountTypeWithAccountTypeIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001bbbbf
- (id)_ams_localiTunesAccountForAccountType:(id)arg1 shouldUpdateStorefront:(_Bool)arg2;	// IMP=0x00100000001bb970
- (id)ams_saveAccount:(id)arg1 withOptions:(long long)arg2;	// IMP=0x00100000001bb3c9
- (_Bool)ams_isAccountNew:(id)arg1;	// IMP=0x00100000001bb35d
- (id)ams_demoAccount;	// IMP=0x00100000001bb2f1
- (id)_ams_localiTunesAccountForAccountMediaType:(id)arg1 updateStorefront:(_Bool)arg2;	// IMP=0x00100000001bb238
- (id)_ams_localiTunesAccountAfterUpdatingStorefront:(_Bool)arg1;	// IMP=0x00100000001bb03a
@property(readonly, nonatomic) ACAccount *_ams_localiTunesAccount;
@end
