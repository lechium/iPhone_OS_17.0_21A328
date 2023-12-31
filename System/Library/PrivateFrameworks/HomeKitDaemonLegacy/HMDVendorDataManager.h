//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMFTimer, NSDictionary, NSObject, NSString, NSURL, NSURLSession;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDVendorDataManager : HMFObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    NSURLSession *_urlSession;	// 16 = 0x10
    HMFTimer *_fetchTimer;	// 24 = 0x18
    long long _dataVersion;	// 32 = 0x20
    NSDictionary *_collectionsByManufacturer;	// 40 = 0x28
    NSDictionary *_entriesByProductData;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x00100000007d2d21
+ (id)dbURL;	// IMP=0x00100000007d2cf1
+ (id)sharedVendorDataManager;	// IMP=0x00100000007d2cc1
- (void).cxx_destruct;	// IMP=0x00000000007d2296
@property(retain, nonatomic) NSDictionary *entriesByProductData; // @synthesize entriesByProductData=_entriesByProductData;
@property(retain, nonatomic) NSDictionary *collectionsByManufacturer; // @synthesize collectionsByManufacturer=_collectionsByManufacturer;
@property(nonatomic) long long dataVersion; // @synthesize dataVersion=_dataVersion;
@property(readonly, nonatomic) HMFTimer *fetchTimer; // @synthesize fetchTimer=_fetchTimer;
@property(readonly, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000007d2186
- (_Bool)_parseManufacturersList:(id)arg1 collectionsByManufacturer:(id *)arg2 entriesByProductData:(id *)arg3;	// IMP=0x00000000007d1350
- (id)_parseVendorModelEntryForManufacturer:(id)arg1 model:(id)arg2 dictionary:(id)arg3;	// IMP=0x00000000007d0d4b
- (id)_modelsStringForManufacturer:(id)arg1 model:(id)arg2 dictionary:(id)arg3 key:(id)arg4;	// IMP=0x00000000007d0a8e
- (_Bool)_parseDatabaseFromDictionary:(id)arg1 dataVersion:(long long *)arg2 collectionsByManufacturer:(id *)arg3 entriesByProductData:(id *)arg4;	// IMP=0x00000000007cf14b
- (void)_handleDataFromServer:(id)arg1;	// IMP=0x00000000007cebff
- (void)_handleServerResponse:(id)arg1 withData:(id)arg2 error:(id)arg3;	// IMP=0x00000000007ce92b
- (void)_fetchDataFromServer;	// IMP=0x00000000007ce503
- (void)_start;	// IMP=0x00000000007ce492
- (void)_loadDatabaseFromLocalFiles;	// IMP=0x00000000007ce42d
- (_Bool)_loadDatabaseFromFilePath:(id)arg1 fileDescription:(id)arg2;	// IMP=0x00000000007ce3a7
- (_Bool)_loadDatabaseFromFileURL:(id)arg1 fileDescription:(id)arg2;	// IMP=0x00000000007ce0b4
- (_Bool)_loadDatabaseFromDictionary:(id)arg1;	// IMP=0x00000000007cdff8
@property(readonly, nonatomic) NSURL *urlForBundledInternalPlist;
@property(readonly, nonatomic) NSURL *urlForBundledPlist;
- (_Bool)databaseContainsManufacturer:(id)arg1;	// IMP=0x00000000007cded7
- (id)vendorModelEntryForProductData:(id)arg1;	// IMP=0x00000000007cdd0e
- (id)vendorModelEntryForManufacturer:(id)arg1 model:(id)arg2;	// IMP=0x00000000007cdc3c
- (id)modelCollectionForManufacturer:(id)arg1;	// IMP=0x00000000007cdb46
- (id)initWithDefaults;	// IMP=0x00000000007cd3f6
- (id)initWithWorkQueue:(id)arg1 urlSession:(id)arg2 fetchTimer:(id)arg3;	// IMP=0x00000000007cd319
- (id)init;	// IMP=0x00000000007cd271

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

