//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL, WBSGlobalFrameIdentifier, WBSSavedAccountContext;

__attribute__((visibility("hidden")))
@interface SFAccountPickerConfiguration : NSObject
{
    _Bool _forUserNamesOnly;	// 8 = 0x8
    _Bool _shouldShowIcons;	// 9 = 0x9
    _Bool _shouldShowPasskeysInAccountPicker;	// 10 = 0xa
    _Bool _shouldShowAutoFillPasskeys;	// 11 = 0xb
    _Bool _hasAuditToken;	// 12 = 0xc
    _Bool _shouldEnableAddingNewPasswordsIfPossible;	// 13 = 0xd
    _Bool _shouldShowGeneratedPasswordsForDomain;	// 14 = 0xe
    _Bool _isForFillingIndividualAccountFields;	// 15 = 0xf
    _Bool _shouldShowReceivedVerificationCodes;	// 16 = 0x10
    _Bool _shouldHideCreatePasswordsInSettingsHint;	// 17 = 0x11
    NSString *_title;	// 24 = 0x18
    NSString *_prompt;	// 32 = 0x20
    NSString *_promptWhenPasskeysAreAvailable;	// 40 = 0x28
    NSArray *_serviceNameHintStrings;	// 48 = 0x30
    NSArray *_domainHintStrings;	// 56 = 0x38
    unsigned long long _minimumNumberOfCredentialsToShowLikelyMatchesSection;	// 64 = 0x40
    WBSGlobalFrameIdentifier *_currentWebFrameIdentifierForAutoFillPasskeys;	// 72 = 0x48
    NSString *_addPasswordSuggestedDomain;	// 80 = 0x50
    NSString *_appIDForReceivedVerificationCodes;	// 88 = 0x58
    NSURL *_websiteURLForReceivedVerificationCodes;	// 96 = 0x60
    WBSSavedAccountContext *_savedAccountContext;	// 104 = 0x68
    CDStruct_4c969caf _connectedAppAuditToken;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000050d0c
@property(retain, nonatomic) WBSSavedAccountContext *savedAccountContext; // @synthesize savedAccountContext=_savedAccountContext;
@property(nonatomic) _Bool shouldHideCreatePasswordsInSettingsHint; // @synthesize shouldHideCreatePasswordsInSettingsHint=_shouldHideCreatePasswordsInSettingsHint;
@property(copy, nonatomic) NSURL *websiteURLForReceivedVerificationCodes; // @synthesize websiteURLForReceivedVerificationCodes=_websiteURLForReceivedVerificationCodes;
@property(copy, nonatomic) NSString *appIDForReceivedVerificationCodes; // @synthesize appIDForReceivedVerificationCodes=_appIDForReceivedVerificationCodes;
@property(nonatomic) _Bool shouldShowReceivedVerificationCodes; // @synthesize shouldShowReceivedVerificationCodes=_shouldShowReceivedVerificationCodes;
@property(nonatomic) _Bool isForFillingIndividualAccountFields; // @synthesize isForFillingIndividualAccountFields=_isForFillingIndividualAccountFields;
@property(copy, nonatomic) NSString *addPasswordSuggestedDomain; // @synthesize addPasswordSuggestedDomain=_addPasswordSuggestedDomain;
@property(nonatomic) _Bool shouldShowGeneratedPasswordsForDomain; // @synthesize shouldShowGeneratedPasswordsForDomain=_shouldShowGeneratedPasswordsForDomain;
@property(nonatomic) _Bool shouldEnableAddingNewPasswordsIfPossible; // @synthesize shouldEnableAddingNewPasswordsIfPossible=_shouldEnableAddingNewPasswordsIfPossible;
@property(readonly, nonatomic) _Bool hasAuditToken; // @synthesize hasAuditToken=_hasAuditToken;
@property(nonatomic) CDStruct_4c969caf connectedAppAuditToken; // @synthesize connectedAppAuditToken=_connectedAppAuditToken;
@property(copy, nonatomic) WBSGlobalFrameIdentifier *currentWebFrameIdentifierForAutoFillPasskeys; // @synthesize currentWebFrameIdentifierForAutoFillPasskeys=_currentWebFrameIdentifierForAutoFillPasskeys;
@property(nonatomic) _Bool shouldShowAutoFillPasskeys; // @synthesize shouldShowAutoFillPasskeys=_shouldShowAutoFillPasskeys;
@property(nonatomic) _Bool shouldShowPasskeysInAccountPicker; // @synthesize shouldShowPasskeysInAccountPicker=_shouldShowPasskeysInAccountPicker;
@property(nonatomic) _Bool shouldShowIcons; // @synthesize shouldShowIcons=_shouldShowIcons;
@property(nonatomic) _Bool forUserNamesOnly; // @synthesize forUserNamesOnly=_forUserNamesOnly;
@property(nonatomic) unsigned long long minimumNumberOfCredentialsToShowLikelyMatchesSection; // @synthesize minimumNumberOfCredentialsToShowLikelyMatchesSection=_minimumNumberOfCredentialsToShowLikelyMatchesSection;
@property(copy, nonatomic) NSArray *domainHintStrings; // @synthesize domainHintStrings=_domainHintStrings;
@property(copy, nonatomic) NSArray *serviceNameHintStrings; // @synthesize serviceNameHintStrings=_serviceNameHintStrings;
@property(copy, nonatomic) NSString *promptWhenPasskeysAreAvailable; // @synthesize promptWhenPasskeysAreAvailable=_promptWhenPasskeysAreAvailable;
@property(copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) _Bool shouldAllowAddingNewPasswords;
- (id)init;	// IMP=0x0000000000050a82

@end

