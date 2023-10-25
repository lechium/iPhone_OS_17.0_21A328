//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MFLibraryMessage, NNMKPairedDeviceInfo, NSDate, NSLock, NSMutableArray, NSMutableSet, NSString;
@protocol MFNanoServerMessageContentLoaderDelegate;

@interface MFNanoServerMessageContentLoader : NSObject
{
    NSDate *_requestDate;	// 8 = 0x8
    id <MFNanoServerMessageContentLoaderDelegate> _delegate;	// 16 = 0x10
    MFLibraryMessage *_messageForDownload;	// 24 = 0x18
    _Bool _contentQueuedForDownload;	// 32 = 0x20
    NNMKPairedDeviceInfo *_pairedDeviceInfo;	// 40 = 0x28
    NSMutableSet *_monitoredOperations;	// 48 = 0x30
    NSLock *_monitoredOperationsLock;	// 56 = 0x38
    NSMutableArray *_currentContentParsers;	// 64 = 0x40
    _Bool _highPriority;	// 72 = 0x48
    NSString *_messageId;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00200000000aa981
@property(nonatomic) _Bool highPriority; // @synthesize highPriority=_highPriority;
@property(readonly, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
- (id)_monitoredOperationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000aa714
- (id)_libraryMessageForMessageId:(id)arg1;	// IMP=0x00100000000aa572
- (id)_attachmentForURL:(id)arg1 mimePart:(id)arg2;	// IMP=0x00100000000aa2ff
- (id)_nanoAttachmentForURL:(id)arg1 mimePart:(id)arg2;	// IMP=0x00100000000aa111
- (void)_notifyDelegateOfFailure;	// IMP=0x00100000000aa0ac
- (void)_notifyDelegateDidFinish;	// IMP=0x00100000000aa047
- (void)_notifyDelegateThatReceivedAttachment:(id)arg1 forContentId:(id)arg2 loadedProtected:(_Bool)arg3;	// IMP=0x00100000000a9f5f
- (void)_notifyDelegateThatReceivedImageAttachment:(id)arg1 forContentId:(id)arg2 loadedProtected:(_Bool)arg3;	// IMP=0x00100000000a9e77
- (void)_notifyDelegateThatReceivedMailContent:(id)arg1 forMessage:(id)arg2 loadedProtected:(_Bool)arg3;	// IMP=0x00100000000a9d8f
- (void)_startLoadingAttachments:(id)arg1 messageBody:(id)arg2 loadedProtected:(_Bool)arg3;	// IMP=0x00100000000a9488
- (void)_parseContentFromMessageAndNotifyDelegate:(id)arg1 loadedProtected:(_Bool)arg2;	// IMP=0x00100000000a8d1b
- (void)_downloadContent;	// IMP=0x00100000000a8b61
- (id)_attemptToLoadLibraryMessageWithContentFromDatabase;	// IMP=0x00100000000a894a
- (void)_startContentLoadProcess;	// IMP=0x00100000000a8745
- (void)notifyContentsUnavailableForMessage:(id)arg1 error:(id)arg2;	// IMP=0x00100000000a8724
- (void)notifyContentsAvailable:(id)arg1 forMessage:(id)arg2;	// IMP=0x00100000000a85f3
- (_Bool)wantsContentsOfType:(int)arg1;	// IMP=0x00100000000a85e8
- (id)message;	// IMP=0x00100000000a85da
- (double)ordering;	// IMP=0x00100000000a85c4
- (long long)priority;	// IMP=0x00100000000a85af
- (void)cancel;	// IMP=0x00100000000a82e6
- (void)dealloc;	// IMP=0x00100000000a8237
- (id)initWithMessageId:(id)arg1 highPriority:(_Bool)arg2 pairedDeviceInfo:(id)arg3 delegate:(id)arg4;	// IMP=0x00100000000a7f55

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
