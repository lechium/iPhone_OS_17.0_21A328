//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CHSynchronizedLoggable.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CHSharedAddressBook : CHSynchronizedLoggable
{
    NSMutableDictionary *_addressBookCache;	// 8 = 0x8
}

+ (id)get;	// IMP=0x006000000003341e
- (void).cxx_destruct;	// IMP=0x0000000000033cb8
@property(retain) NSMutableDictionary *addressBookCache; // @synthesize addressBookCache=_addressBookCache;
- (unsigned long long)cachedCount;	// IMP=0x0000000000033b95
- (id)fetchAddressBookInfoFromCacheForKey:(id)arg1;	// IMP=0x00000000000339eb
- (void)insertAddressBookInfoIntoCache:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000003387f
- (void)insertAddressBookInfoDictionaryIntoCache:(id)arg1;	// IMP=0x000000000003374b
- (void)revertAddressBook:(id)arg1;	// IMP=0x0000000000033668
- (void)cleanUpAddressBookCache_sync;	// IMP=0x000000000003362b
- (void)sendABChangedNotificationSyncWithUserInfo:(id)arg1;	// IMP=0x0000000000033614
- (void)registerForContactsNotifications;	// IMP=0x0000000000033560
- (void)dealloc;	// IMP=0x00000000000334eb
- (id)init;	// IMP=0x0000000000033487

@end

