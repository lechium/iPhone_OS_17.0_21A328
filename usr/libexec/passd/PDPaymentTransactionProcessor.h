//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLGeocoder, CLLocationManager, NSHashTable, NSMutableArray, NSMutableSet, NSString, PDMapsBrandAndMerchantUpdater, PDPaymentWebServiceCoordinator, PKMerchantCategoryCodeMap, PKUsageNotificationServer;
@protocol OS_dispatch_queue, OS_dispatch_source, PDPaymentTransactionProcessorDataSource;

@interface PDPaymentTransactionProcessor : NSObject
{
    struct os_unfair_lock_s _itemsLock;	// 8 = 0x8
    NSMutableSet *_locationUpdateItems;	// 16 = 0x10
    NSMutableSet *_backgroundLocationUpdateItems;	// 24 = 0x18
    NSMutableArray *_reverseGeocodeItems;	// 32 = 0x20
    NSMutableSet *_stationsUpdateItems;	// 40 = 0x28
    NSMutableArray *_merchantCleanupItems;	// 48 = 0x30
    CLLocationManager *_locationManager;	// 56 = 0x38
    CLLocationManager *_backgroundMerchantLocationManager;	// 64 = 0x40
    CLGeocoder *_geocoder;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_locationUpdateTimeoutTimer;	// 80 = 0x50
    NSObject<OS_dispatch_source> *_backgroundLocationUpdateTimer;	// 88 = 0x58
    _Bool _active;	// 96 = 0x60
    _Bool _processingMerchantCleanupItems;	// 97 = 0x61
    PKMerchantCategoryCodeMap *_categoryCodeMap;	// 104 = 0x68
    PDMapsBrandAndMerchantUpdater *_mapsBrandAndMerchantUpdater;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_replyQueue;	// 120 = 0x78
    struct os_unfair_lock_s _observersLock;	// 128 = 0x80
    NSHashTable *_observers;	// 136 = 0x88
    PDPaymentWebServiceCoordinator *_paymentWebServiceCoordinator;	// 144 = 0x90
    id <PDPaymentTransactionProcessorDataSource> _dataSource;	// 152 = 0x98
    PKUsageNotificationServer *_usageNotificationServer;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x00200000004d67c1
@property(nonatomic) __weak PKUsageNotificationServer *usageNotificationServer; // @synthesize usageNotificationServer=_usageNotificationServer;
@property(nonatomic) __weak id <PDPaymentTransactionProcessorDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (id)_pendingMerchantCleanupItemForTransaction:(id)arg1;	// IMP=0x00100000004d64c8
- (id)_pendingStationsUpdateItemForTransaction:(id)arg1;	// IMP=0x00100000004d6232
- (id)_pendingLocationUpdateItemForTransaction:(id)arg1;	// IMP=0x00100000004d5dd6
- (void)_processForLocalMCCLookup:(id)arg1;	// IMP=0x00100000004d5d02
- (void)_beginMerchantCleanupIfPossible;	// IMP=0x00100000004d534f
- (_Bool)_canUpdateMapsDataForTransaction:(id)arg1;	// IMP=0x00100000004d52c2
- (void)_processItemForMerchantCleanup:(id)arg1 clearingAttempt:(_Bool)arg2;	// IMP=0x00100000004d4f43
- (void)_processPaymentTransactionForMapsData:(id)arg1 forTransactionSourceIdentifier:(id)arg2;	// IMP=0x00100000004d4e1d
- (void)_processPaymentTransactionForMerchantCleanup:(id)arg1 forTransactionSourceIdentifier:(id)arg2 clearingAttempt:(_Bool)arg3;	// IMP=0x00100000004d4d46
- (void)_processItemForStationsCleanup:(id)arg1;	// IMP=0x00100000004d21ec
- (void)_processPaymentTransactionForStationsUpdate:(id)arg1 forTransactionSourceIdentifier:(id)arg2;	// IMP=0x00000000004d2115
- (id)_pendingReverseGeocodeUpdateItemForTransaction:(id)arg1;	// IMP=0x00100000004d1e7b
- (void)_beginReverseGeocodingIfPossible;	// IMP=0x00100000004d13ef
- (void)_stopUpdatingLocationIfPossible;	// IMP=0x00100000004d1274
- (void)_startUpdatingBackgroundLocationIfPossible;	// IMP=0x00100000004d10a5
- (void)_startUpdatingLocationIfPossible;	// IMP=0x00100000004d0ed6
- (void)_abortUpdatingLocationForAllBackgroundLocationUpdateItems;	// IMP=0x00100000004d0e1f
- (void)_abortUpdatingLocationForAllLocationUpdateItems;	// IMP=0x00100000004d0d68
- (void)_abortUpdatingLocationForLocationUpdateItem:(id)arg1;	// IMP=0x00100000004d0c64
- (void)_reportTransactionWithFinalLocation:(id)arg1;	// IMP=0x00100000004d074b
- (void)_updateLocation:(id)arg1 forLocationUpdateItem:(id)arg2 andMarkAsProcessed:(_Bool)arg3;	// IMP=0x00100000004d0199
- (void)_continueUpdatingLocationForTransactionUpdateItem:(id)arg1;	// IMP=0x00100000004d00ff
- (void)_processPaymentTransactionForLocationUpdate:(id)arg1 forTransactionSourceIdentifier:(id)arg2;	// IMP=0x00100000004cfbf4
- (void)_updateActiveState;	// IMP=0x00100000004cf978
- (void)_processPaymentTransaction:(id)arg1 forTransactionSourceIdentifier:(id)arg2;	// IMP=0x00100000004cf299
- (void)_beginProcessingPaymentTransaction:(id)arg1 forTransactionSourceIdentifier:(id)arg2 skipLocation:(_Bool)arg3;	// IMP=0x00100000004cecb0
- (void)_markTransactionAsFullyProcessedAndNotifyDelegate:(id)arg1 forTransactionSourceIdentifier:(id)arg2;	// IMP=0x00100000004ceb26
- (void)_processPaymentTransactionForDemoMode:(id)arg1 forTransactionSourceIdentifier:(id)arg2;	// IMP=0x00100000004ce685
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00100000004ce4ef
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x00100000004ce0b6
- (void)_accessObserversWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000004cdeb7
- (void)unregisterObserver:(id)arg1;	// IMP=0x00100000004cde58
- (void)registerObserver:(id)arg1;	// IMP=0x00100000004cddf9
- (void)processPaymentTransactionConfigurations:(id)arg1;	// IMP=0x00100000004cda9f
- (void)processPaymentTransaction:(id)arg1 forTransactionSourceIdentifier:(id)arg2;	// IMP=0x00100000004cda14
- (id)initWithQueue:(id)arg1 mapsBrandAndMerchantUpdater:(id)arg2 paymentWebServiceCoordinator:(id)arg3;	// IMP=0x00100000004cd759
- (id)initWithMapsBrandAndMerchantUpdater:(id)arg1 paymentWebServiceCoordinator:(id)arg2;	// IMP=0x00100000004cd6d5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

