//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileManager, NSSet, NSURL;
@protocol PDTransactionReceiptFileManagerDelegate;

@interface PDTransactionReceiptFileManager : NSObject
{
    NSURL *_directoryURL;	// 8 = 0x8
    struct os_unfair_lock_s _fileAccessLock;	// 16 = 0x10
    id <PDTransactionReceiptFileManagerDelegate> _delegate;	// 24 = 0x18
    NSFileManager *_fileManager;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000004ab6fc
- (id)_transactionReceiptUniqueIDFromFileURL:(id)arg1;	// IMP=0x00100000004ab6a2
- (_Bool)_isTransactionReceiptFileURL:(id)arg1;	// IMP=0x00100000004ab5dc
- (id)_fileURLForTransactionReceiptUniqueID:(id)arg1;	// IMP=0x00100000004ab577
- (void)registerDatabaseTransactionReceipt:(id)arg1;	// IMP=0x00100000004ab4b0
- (_Bool)deleteTransactionReceiptWithUniqueID:(id)arg1;	// IMP=0x00100000004ab3d5
- (void)_downloadImageURLsForReceipt:(id)arg1 atURL:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000004aacd5
- (void)writeTransactionReceipt:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000004aa9ca
- (id)transactionReceiptWithUniqueID:(id)arg1;	// IMP=0x00100000004aa8fe
@property(readonly, nonatomic) NSSet *transactionReceipts;
@property(readonly, nonatomic) NSSet *uniqueIDs;
- (id)initWithDirectoryURL:(id)arg1 delegate:(id)arg2;	// IMP=0x00100000004aa3a1

@end
