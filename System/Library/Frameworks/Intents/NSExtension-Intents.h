//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtension.h>

@interface NSExtension (Intents)
+ (_Bool)appAllowedToTalkToSiri:(id)arg1;	// IMP=0x0060000000354244
+ (void)_findAppsWithAnyIntentsExtensionCheckingSiriEnabledUseFilter:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0060000000354120
+ (void)_intents_findSiriEntitledAppsContainingAnIntentsExtensionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x006000000035408d
+ (void)_intents_findPossibleSiriEnabledAppsWithAnIntentsServiceExtension:(CDUnknownBlockType)arg1;	// IMP=0x0060000000354076
+ (void)_intents_findAppsWithAnIntentsServiceExtension:(CDUnknownBlockType)arg1;	// IMP=0x0060000000353fe3
+ (id)_extensionMatchingDictionaryForIntentClassNames:(id)arg1 extensionPointName:(id)arg2 launchId:(id)arg3;	// IMP=0x0060000000353e70
+ (id)_intents_uiExtensionMatchingAttributesForIntents:(id)arg1;	// IMP=0x0060000000353e54
+ (id)_intents_extensionMatchingAttributesForIntents:(id)arg1;	// IMP=0x0060000000353e38
+ (void)_matchExtensionsWithAttributes:(id)arg1 extensionPointName:(id)arg2 requireTrustCheck:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0060000000353d7d
+ (void)_matchSnippetExtensionsWithExtensionPointName:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0060000000353bfc
+ (void)_matchExtensionsForIntent:(id)arg1 extensionPointName:(id)arg2 shouldCheckForSiriEnabled:(_Bool)arg3 shouldIgnoreLaunchId:(_Bool)arg4 requireTrustCheck:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00600000003536b7
+ (void)_matchExtensionsForIntent:(id)arg1 extensionPointName:(id)arg2 shouldCheckForSiriEnabled:(_Bool)arg3 requireTrustCheck:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0060000000353696
+ (void)_intents_matchSiriUISnippetExtensionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0060000000353601
+ (void)_intents_matchSiriUIExtensionsForIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0060000000353554
+ (void)_intents_matchSiriExtensionsForIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0060000000353522
+ (void)_intents_matchUIExtensionsForIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0060000000353478
+ (void)_intents_matchExtensionsForIntent:(id)arg1 requireTrustCheck:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x006000000035344c
+ (void)_intents_matchExtensionsForIntent:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x006000000035341d
+ (void)_intents_matchExtensionsForIntent:(id)arg1 shouldIgnoreLaunchId:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00600000003533f3
- (_Bool)_intents_extensionSupportsAtLeastOneSiriIntent;	// IMP=0x00100000003532cd
- (id)_intents_intentsRestrictedWhileProtectedDataUnavailable;	// IMP=0x0010000000353242
@end
