//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSMutableOrderedSet, NSNumber, NSURL, SWCDomainCache, _SWCGeneration;
@protocol OS_dispatch_source;

@interface SWCDatabase : NSObject
{
    NSMutableOrderedSet *_entries;	// 8 = 0x8
    NSMutableDictionary *_settings;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_saveTimer;	// 24 = 0x18
    SWCDomainCache *_domainCache;	// 32 = 0x20
    unsigned int _shared:1;	// 40 = 0x28
    _SWCGeneration *_settingsGeneration;	// 48 = 0x30
    NSNumber *_launchServicesDatabaseGeneration;	// 56 = 0x38
    NSData *_enterpriseState;	// 64 = 0x40
}

+ (id)queue;	// IMP=0x002000000001271f
+ (id)loadContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000012417
+ (id)new;	// IMP=0x00100000000123e9
+ (id)sharedDatabase;	// IMP=0x0010000000012339
+ (id)_archivedDataFromStorage:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000015b9e
+ (id)_storageFromArchivedData:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000015ac5
- (void).cxx_destruct;	// IMP=0x0010000000014899
@property(copy) NSData *enterpriseState; // @synthesize enterpriseState=_enterpriseState;
@property(copy) NSNumber *launchServicesDatabaseGeneration; // @synthesize launchServicesDatabaseGeneration=_launchServicesDatabaseGeneration;
@property(readonly) _SWCGeneration *settingsGeneration; // @synthesize settingsGeneration=_settingsGeneration;
- (void)scheduleNextSave;	// IMP=0x001000000001482d
- (_Bool)saveReturningError:(id *)arg1;	// IMP=0x0010000000014509
- (void)cleanOldSettings;	// IMP=0x0010000000014114
- (void)enumerateSettingsDictionariesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000140fe
- (void)removeSettingsForKeys:(id)arg1 serviceSpecifier:(id)arg2;	// IMP=0x0010000000014042
- (void)removeSettingsForKeys:(id)arg1 serviceType:(id)arg2;	// IMP=0x0010000000013c30
- (void)setSettingsDictionary:(id)arg1 forServiceSpecifier:(id)arg2;	// IMP=0x0010000000013b7b
- (id)settingsDictionaryForServiceSpecifier:(id)arg1;	// IMP=0x0010000000013b65
- (void)updateEntriesForDomain:(id)arg1 canonicalEntries:(id)arg2;	// IMP=0x001000000001380f
- (void)removeAllEntries;	// IMP=0x0010000000013669
- (_Bool)removeEntries:(id)arg1;	// IMP=0x00100000000135d5
- (_Bool)addEntries:(id)arg1;	// IMP=0x0010000000013550
- (id)entryMatchingServiceSpecifier:(id)arg1;	// IMP=0x0010000000013467
- (id)entryMatchingService:(id)arg1 domain:(id)arg2 appID:(id)arg3;	// IMP=0x0010000000013115
- (void)enumerateEntriesMatchingServiceSpecifierWithExactDomain:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0010000000013037
- (void)enumerateEntriesMatchingService:(id)arg1 exactDomain:(id)arg2 appID:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0010000000012f31
- (void)enumerateEntriesMatchingServiceSpecifier:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012e42
- (void)enumerateEntriesMatchingService:(id)arg1 domain:(id)arg2 appID:(id)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0010000000012e13
- (void)enumerateEntriesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000012c92
- (void)enumerateEntries:(id)arg1 matchingServiceSpecifier:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0010000000012ba4
- (void)enumerateEntries:(id)arg1 matchingService:(id)arg2 domain:(id)arg3 appID:(id)arg4 block:(CDUnknownBlockType)arg5;	// IMP=0x0010000000012835
- (_Bool)mayContainEntryMatchingServiceSpecifier:(id)arg1;	// IMP=0x001000000001282d
- (id)entry:(id)arg1;	// IMP=0x00100000000127a0
@property(readonly) NSURL *storageURL;
- (void)receiveSIGTERMSignal;	// IMP=0x00100000000125e6
- (id)init;	// IMP=0x00100000000123f2
- (void)_reorderAppLinks:(id)arg1 domain:(id)arg2;	// IMP=0x0010000000015f34
- (void)_scheduleSave;	// IMP=0x0010000000015c5c
- (id)_storageForArchiving;	// IMP=0x00100000000159a4
- (void)_removeSettingsForKeysNoSave:(id)arg1 serviceSpecifier:(id)arg2;	// IMP=0x001000000001586d
- (id)_initShared;	// IMP=0x00100000000153f4
- (_Bool)_deleteStorageItemReturningError:(id *)arg1;	// IMP=0x0010000000016495
- (_Bool)_updateStorageItemWithData:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000016417
- (id)_dataFromStorageReturningError:(id *)arg1;	// IMP=0x0010000000016398
- (id)_dataURLReturningError:(id *)arg1;	// IMP=0x00100000000162df

@end

