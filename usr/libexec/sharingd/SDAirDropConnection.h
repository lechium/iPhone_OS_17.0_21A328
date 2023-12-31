//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableData, NSMutableDictionary, NSProgress, NSString, NSURL, SDAirDropFileZipper, SDStatusMonitor;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_os_transaction, SDAirDropConnectionDelegate;

@interface SDAirDropConnection : NSObject
{
    _Bool _discover;	// 8 = 0x8
    _Bool _personAdded;	// 9 = 0x9
    _Bool _stopDeferred;	// 10 = 0xa
    _Bool _userAccepted;	// 11 = 0xb
    _Bool _senderTrusted;	// 12 = 0xc
    _Bool _delayedFinish;	// 13 = 0xd
    _Bool _queueSuspended;	// 14 = 0xe
    _Bool _endEncountered;	// 15 = 0xf
    _Bool _connectionClosed;	// 16 = 0x10
    _Bool _transactionStarted;	// 17 = 0x11
    struct __SFNode *_person;	// 24 = 0x18
    NSURL *_destination;	// 32 = 0x20
    char *_requestBuffer;	// 40 = 0x28
    NSProgress *_progress;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    struct __SecTrust *_clientTrust;	// 64 = 0x40
    double _startTime;	// 72 = 0x48
    SDStatusMonitor *_monitor;	// 80 = 0x50
    long long _lastEvent;	// 88 = 0x58
    NSMutableData *_requestData;	// 96 = 0x60
    struct __CFReadStream *_readStream;	// 104 = 0x68
    SDAirDropFileZipper *_zipper;	// 112 = 0x70
    NSMutableDictionary *_properties;	// 120 = 0x78
    unsigned int _powerAssertionID;	// 128 = 0x80
    NSObject<OS_dispatch_semaphore> *_askSemaphore;	// 136 = 0x88
    struct _CFHTTPServerRequest *_askRequest;	// 144 = 0x90
    struct _CFHTTPServerRequest *_uploadRequest;	// 152 = 0x98
    struct _CFHTTPServerRequest *_discoverRequest;	// 160 = 0xa0
    struct _CFHTTPServerConnection *_connection;	// 168 = 0xa8
    NSData *_mediaCapabilities;	// 176 = 0xb0
    NSObject<OS_os_transaction> *_transaction;	// 184 = 0xb8
    _Bool _contactsOnly;	// 192 = 0xc0
    _Bool _shouldExtractMediaFromPhotosBundles;	// 193 = 0xc1
    NSString *_sessionID;	// 200 = 0xc8
    id <SDAirDropConnectionDelegate> _delegate;	// 208 = 0xd0
}

+ (id)disambiguatedModelName;	// IMP=0x00200000001cca37
+ (id)validatedItemsArray:(id)arg1;	// IMP=0x00100000001c700a
+ (id)validatedFilesArray:(id)arg1;	// IMP=0x00100000001c6d3e
+ (id)validatedFileInfo:(id)arg1;	// IMP=0x00100000001c696a
+ (id)fileInfoExpectedClassForKeyMap;	// IMP=0x00100000001c680d
- (void).cxx_destruct;	// IMP=0x00200000001cd1e7
@property __weak id <SDAirDropConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property _Bool shouldExtractMediaFromPhotosBundles; // @synthesize shouldExtractMediaFromPhotosBundles=_shouldExtractMediaFromPhotosBundles;
@property(copy) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(copy) NSURL *destination; // @synthesize destination=_destination;
@property _Bool contactsOnly; // @synthesize contactsOnly=_contactsOnly;
- (void)stop;	// IMP=0x00100000001cce8d
- (_Bool)accept;	// IMP=0x00100000001ccd71
- (void)start;	// IMP=0x00100000001ccbbf
- (void)startPublishingProgressForPlaceholderFiles:(id)arg1;	// IMP=0x00100000001ccbb9
- (void)schedule;	// IMP=0x00100000001ccb8c
- (void)fileZipper:(id)arg1 event:(long long)arg2 withProperty:(void *)arg3;	// IMP=0x00100000001cc8a3
- (_Bool)transferIsOverPrebufferLimit;	// IMP=0x00100000001cc844
- (void)setCombinedFileURLsAndItems:(id)arg1;	// IMP=0x00100000001cc774
- (void)setSpotlightMetadata:(id)arg1;	// IMP=0x00100000001cc76e
- (id)whereFromInfo;	// IMP=0x00100000001cc6cf
- (void)handleClosedConnection;	// IMP=0x00100000001cc4f1
- (void)didFailToSendResponse:(struct _CFHTTPServerResponse *)arg1;	// IMP=0x00100000001cc438
- (void)didSendResponse:(struct _CFHTTPServerResponse *)arg1 forRequest:(struct _CFHTTPServerRequest *)arg2;	// IMP=0x00100000001cc0d2
- (void)finishOperation;	// IMP=0x00100000001cbd05
- (void)notifyClientOfBytesCopied:(id)arg1 timeRemaining:(id)arg2;	// IMP=0x00100000001cbbca
- (long long)getStatusCode:(struct _CFHTTPServerResponse *)arg1;	// IMP=0x00100000001cbb85
- (void)didReceiveRequest:(struct _CFHTTPServerRequest *)arg1;	// IMP=0x00100000001cb0cf
- (void)enqueueBadResponseForRequest:(struct _CFHTTPServerRequest *)arg1;	// IMP=0x00100000001caf4a
- (void)makeDestinationDirectory;	// IMP=0x00100000001cad5f
- (_Bool)oneHundredContinue:(struct _CFHTTPServerRequest *)arg1;	// IMP=0x00100000001cad11
- (void)enqueueResponse:(struct _CFHTTPServerRequest *)arg1 code:(long long)arg2 body:(struct __CFData *)arg3;	// IMP=0x00100000001cac9c
- (void)silentlyCancelRequest;	// IMP=0x00100000001cabc5
- (_Bool)senderInfoAvailable;	// IMP=0x00100000001cab3f
- (_Bool)thereIsEnoughFreeSpace;	// IMP=0x00100000001caa0d
- (_Bool)startReceivingFile:(struct _CFHTTPServerRequest *)arg1 error:(id *)arg2;	// IMP=0x00100000001ca62e
- (id)compressionType;	// IMP=0x00100000001ca563
- (_Bool)startReceivingBody:(struct _CFHTTPServerRequest *)arg1 error:(id *)arg2;	// IMP=0x00100000001ca3b8
- (void)handleReadStreamEvent:(struct __CFReadStream *)arg1 event:(unsigned long long)arg2;	// IMP=0x00100000001ca235
- (void)processRequest;	// IMP=0x00100000001ca173
- (void)cancelAndDecline;	// IMP=0x00100000001ca0bf
- (void)handleAskRequest;	// IMP=0x00100000001c9c2f
- (void)adjustPropertiesForPhotosBundles;	// IMP=0x00100000001c992d
- (void)adjustPropertiesForAutoAcceptSenderIsMe:(_Bool)arg1;	// IMP=0x00100000001c9828
- (_Bool)transferContainsPhotosAssetBundles;	// IMP=0x00100000001c9682
- (_Bool)allowAskRequestFromPerson:(struct __SFNode *)arg1;	// IMP=0x00100000001c95ab
- (void)parseAskRequest;	// IMP=0x00100000001c9385
- (void)handleDiscoverRequest;	// IMP=0x00100000001c91eb
- (void)parseDiscoverRequest;	// IMP=0x00100000001c90b1
- (void)convertURLStringsToURLs;	// IMP=0x00100000001c8ef4
- (void)silentlyCancelRequestOnMainThread;	// IMP=0x00100000001c8e93
- (_Bool)senderIsMe;	// IMP=0x00100000001c8c5e
- (_Bool)senderIsTrusted:(id)arg1;	// IMP=0x00100000001c8aab
- (_Bool)senderIsBlocked;	// IMP=0x00100000001c880b
- (void)logSenderIsBlocked;	// IMP=0x00100000001c87ae
- (struct __SFNode *)createPersonForAskRequest;	// IMP=0x00100000001c833c
- (void)sendUploadResponse:(long long)arg1;	// IMP=0x00100000001c8145
- (void)releaseIdleSleepAssertion;	// IMP=0x00100000001c803c
- (void)sendAskResponse:(long long)arg1;	// IMP=0x00100000001c7cb1
- (void)sendDiscoverResponse:(long long)arg1 forKnownAlias:(id)arg2;	// IMP=0x00100000001c7759
- (void)storeIconValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x00100000001c767d
- (void)storeBooleanValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x00100000001c75e6
- (void)storeNumberValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x00100000001c754f
- (void)storeStringValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x00100000001c74b8
- (void)storeDataValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x00100000001c7421
- (void)storeRequestValue:(struct _CFHTTPServerRequest *)arg1 forKey:(struct __CFString *)arg2 convertToNumber:(_Bool)arg3;	// IMP=0x00100000001c72ba
- (void)storeArrayValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x00100000001c711f
- (void)setProperty:(void *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x00100000001c67f1
- (void)didReceiveError:(struct __CFError *)arg1;	// IMP=0x00100000001c6700
- (void)notifyClientForEvent:(long long)arg1;	// IMP=0x00100000001c5e2a
- (void)performBlockForAllProgresses:(CDUnknownBlockType)arg1;	// IMP=0x00100000001c5e18
- (double)getTransferSize;	// IMP=0x00100000001c5db3
- (double)getTransferRate;	// IMP=0x00100000001c5d21
- (void)notifyClient:(long long)arg1 withResults:(id)arg2;	// IMP=0x00100000001c5c99
- (void)handleTerminalCallBack;	// IMP=0x00100000001c5c32
- (void)removeObservers;	// IMP=0x00100000001c5bdf
- (void)addObservers;	// IMP=0x00100000001c5b78
- (void)wirelessPowerChanged:(id)arg1;	// IMP=0x00100000001c5a8f
- (void)systemWillSleep:(id)arg1;	// IMP=0x00100000001c59bf
- (void)didCloseConnection;	// IMP=0x00100000001c5956
- (void)dealloc;	// IMP=0x00100000001c5822
- (id)initWithConnection:(struct _CFHTTPServerConnection *)arg1;	// IMP=0x00100000001c5678

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

