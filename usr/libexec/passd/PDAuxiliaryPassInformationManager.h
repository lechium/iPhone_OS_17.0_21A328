//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, PDAuxiliaryPassInformationNotificationManager, PDDatabaseManager, PDMapsBrandAndMerchantUpdater;

@interface PDAuxiliaryPassInformationManager : NSObject
{
    PDDatabaseManager *_databaseManager;	// 8 = 0x8
    PDMapsBrandAndMerchantUpdater *_merchantUpdater;	// 16 = 0x10
    PDAuxiliaryPassInformationNotificationManager *_notificationManager;	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 32 = 0x20
    NSMutableDictionary *_processingItemUpdatesForPass;	// 40 = 0x28
    NSMutableDictionary *_processingItemCompletions;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000009bae3
- (_Bool)_canUpdateMapsDataForMerchant:(id)arg1 configurations:(id *)arg2;	// IMP=0x001000000009b969
- (id)_mapsBrandAndMerchantForMerchant:(id)arg1;	// IMP=0x001000000009b905
- (void)_lookupMapsInformationForItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000009b5b5
- (void)merchantForPassUniqueIdentifier:(id)arg1 withAuxiliaryPassInformationItem:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000009af8b
- (void)_processAuxiliaryPassInformation:(id)arg1 pass:(id)arg2;	// IMP=0x001000000009a015
- (void)_markOutstandingUpdatesInvalidForPassUniqueIdentifier:(id)arg1;	// IMP=0x0010000000099e62
- (void)passWillBeRemoved:(id)arg1;	// IMP=0x0010000000099e12
- (void)didInsertOrUpdatePass:(id)arg1 oldPass:(id)arg2 oldAuxiliaryInformationIdentifiers:(id)arg3;	// IMP=0x001000000009976c
- (id)initWithDatabaseManager:(id)arg1 withMerchantUpdater:(id)arg2 userNotificationManager:(id)arg3;	// IMP=0x0010000000099643

@end
