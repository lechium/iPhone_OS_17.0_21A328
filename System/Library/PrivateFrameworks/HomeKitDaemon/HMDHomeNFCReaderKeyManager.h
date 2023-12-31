//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDDevice, HMDHome, HMDHomeWalletKeyAccessoryManager, HMFMessageDispatcher, NAFuture, NSMutableSet, NSObject, NSString, NSUUID;
@protocol HAPSystemKeychainStore, HMDHomeWalletDataSource, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDHomeNFCReaderKeyManager : HMFObject
{
    HMDHomeWalletKeyAccessoryManager *_accessoryManager;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    id <HAPSystemKeychainStore> _keychainStore;	// 24 = 0x18
    NSUUID *_uuid;	// 32 = 0x20
    HMDHome *_home;	// 40 = 0x28
    HMFMessageDispatcher *_messageDispatcher;	// 48 = 0x30
    id <HMDHomeWalletDataSource> _dataSource;	// 56 = 0x38
    NAFuture *_createKeychainItemFuture;	// 64 = 0x40
    NSMutableSet *_keyIdentifiersAlreadyUpdated;	// 72 = 0x48
}

+ (id)logCategory;	// IMP=0x00100000008f4a87
- (void).cxx_destruct;	// IMP=0x00000000008f1bbe
@property(retain) NSMutableSet *keyIdentifiersAlreadyUpdated; // @synthesize keyIdentifiersAlreadyUpdated=_keyIdentifiersAlreadyUpdated;
@property(retain) NAFuture *createKeychainItemFuture; // @synthesize createKeychainItemFuture=_createKeychainItemFuture;
@property(readonly) id <HMDHomeWalletDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property __weak HMDHome *home; // @synthesize home=_home;
@property(readonly, copy) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly) id <HAPSystemKeychainStore> keychainStore; // @synthesize keychainStore=_keychainStore;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) HMDHomeWalletKeyAccessoryManager *accessoryManager; // @synthesize accessoryManager=_accessoryManager;
- (id)logIdentifier;	// IMP=0x00000000008f1a5e
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)requestPrimaryResidentToFetchOrCreateReaderKeyWithFlow:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000008f15c3
- (void)requestDevice:(id)arg1 toCreateKeychainItemForReaderKeyWithFlow:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000008f1189
@property(readonly) HMDDevice *primaryResidentDevice;
- (void)removeKeychainItemForReaderKey:(id)arg1 home:(id)arg2 flow:(id)arg3;	// IMP=0x00000000008f0aee
- (id)createNFCReaderKeyModelWithHome:(id)arg1 nfcReaderKey:(id)arg2;	// IMP=0x00000000008f09c9
- (void)createReaderKeyKeychainItemForHome:(id)arg1 flow:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000008efe2b
- (id)readerKeyWithKeychainItemIdentifier:(id)arg1 error:(id *)arg2 flow:(id)arg3;	// IMP=0x00000000008efbe4
- (void)deleteKeychainItemForNFCReaderKeyWithFlow:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000008ef75c
- (void)handleSystemKeychainStoreUpdatedNotification:(id)arg1;	// IMP=0x00000000008ef49e
- (void)handleHomeRemovedNotification:(id)arg1;	// IMP=0x00000000008eef3f
- (void)handleHomeDidUpdateNFCReaderKeyNotification:(id)arg1;	// IMP=0x00000000008eec67
- (void)fetchOrCreateReaderKeyWithRequiresPrivateKey:(_Bool)arg1 flow:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000008edfca
- (void)deleteKeychainItemForNFCReaderKey_flow:(id)arg1;	// IMP=0x00000000008ed8ff
- (void)handleCreateKeychainItemForReaderKeyMessage:(id)arg1;	// IMP=0x00000000008ed2c9
- (void)handleFetchOrCreateReaderKeyMessage:(id)arg1;	// IMP=0x00000000008ed0c5
- (void)handleDeleteKeychainItemForNFCReaderKey:(id)arg1;	// IMP=0x00000000008ecf22
- (void)configureWithHome:(id)arg1;	// IMP=0x00000000008ec97f
- (id)initWithUUID:(id)arg1 workQueue:(id)arg2 keychainStore:(id)arg3 dataSource:(id)arg4;	// IMP=0x00000000008ec812
- (id)initWithUUID:(id)arg1 workQueue:(id)arg2;	// IMP=0x00000000008ec75f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

