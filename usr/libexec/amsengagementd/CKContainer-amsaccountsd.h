//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKContainer.h>

@class NSString;
@protocol AMSCloudDataDatabase;

@interface CKContainer (amsaccountsd)
- (id)_fetchShareMetadataForURL:(id)arg1 withToken:(id)arg2;	// IMP=0x002000000016b38f
- (id)_acceptShareWithShareMetadata:(id)arg1;	// IMP=0x001000000016b226
- (id)queryDeviceToDeviceEncryptionAvailability;	// IMP=0x001000000016b111
- (id)fetchUserRecordID;	// IMP=0x001000000016b06d
- (id)acceptShareURL:(id)arg1 withToken:(id)arg2;	// IMP=0x001000000016af80
@property(readonly, nonatomic) NSString *hashedDescription;
@property(readonly, nonatomic) id <AMSCloudDataDatabase> sharedDatabase;
@property(readonly, nonatomic) id <AMSCloudDataDatabase> publicDatabase;
@property(readonly, nonatomic) id <AMSCloudDataDatabase> privateDatabase;
@property(readonly, nonatomic, getter=isAvailable) _Bool available;
@property(readonly, nonatomic) NSString *identifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
