//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MSMessage, NSData, NSString, NSURL;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface CKRemoteItemForSending : NSObject
{
    _Bool _previewIsFullyRealizedByChatKit;	// 8 = 0x8
    NSURL *_attachmentURL;	// 16 = 0x10
    NSString *_attachmentDescription;	// 24 = 0x18
    NSURL *_appendedVideoURL;	// 32 = 0x20
    NSURL *_appendedBundleURL;	// 40 = 0x28
    NSURL *_appendedRichLinkURL;	// 48 = 0x30
    NSData *_appendedRichLinkData;	// 56 = 0x38
    MSMessage *_appendedMessage;	// 64 = 0x40
    NSObject<OS_dispatch_semaphore> *_previewCreationSemaphore;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000010b4c7
+ (id)_sharedIOSurfaceCIContext;	// IMP=0x001000000010b388
+ (_Bool)hasAppendedVideo:(id)arg1;	// IMP=0x001000000010a809
+ (id)previewQueue;	// IMP=0x001000000010a73e
- (void).cxx_destruct;	// IMP=0x000000000010baf5
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *previewCreationSemaphore; // @synthesize previewCreationSemaphore=_previewCreationSemaphore;
@property(copy, nonatomic) MSMessage *appendedMessage; // @synthesize appendedMessage=_appendedMessage;
@property(copy, nonatomic) NSData *appendedRichLinkData; // @synthesize appendedRichLinkData=_appendedRichLinkData;
@property(retain, nonatomic) NSURL *appendedRichLinkURL; // @synthesize appendedRichLinkURL=_appendedRichLinkURL;
@property(retain, nonatomic) NSURL *appendedBundleURL; // @synthesize appendedBundleURL=_appendedBundleURL;
@property(retain, nonatomic) NSURL *appendedVideoURL; // @synthesize appendedVideoURL=_appendedVideoURL;
@property(nonatomic) _Bool previewIsFullyRealizedByChatKit; // @synthesize previewIsFullyRealizedByChatKit=_previewIsFullyRealizedByChatKit;
@property(retain, nonatomic) NSString *attachmentDescription; // @synthesize attachmentDescription=_attachmentDescription;
@property(retain, nonatomic) NSURL *attachmentURL; // @synthesize attachmentURL=_attachmentURL;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000010b6e4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000010b4cf
- (id)previewUIImage;	// IMP=0x000000000010b4bf
- (id)description;	// IMP=0x000000000010b334
- (void)_setPreviewUIImage:(id)arg1;	// IMP=0x000000000010b32e
- (void)dealloc;	// IMP=0x000000000010b2ff
- (void)waitForPreviewGenerationIfNecessary;	// IMP=0x000000000010b2cc
- (void)beginPreviewCreation;	// IMP=0x000000000010afeb
- (id)initWithMSMessage:(id)arg1;	// IMP=0x000000000010af80
- (id)initWithRichLinkWithURL:(id)arg1 data:(id)arg2;	// IMP=0x000000000010aed3
- (id)initWithAttachmentURL:(id)arg1 description:(id)arg2 blockOnPreviewCreation:(_Bool)arg3;	// IMP=0x000000000010aebb
- (id)initWithAttachmentURL:(id)arg1 description:(id)arg2 previewImage:(id)arg3 blockOnPreviewCreation:(_Bool)arg4;	// IMP=0x000000000010aab2
- (_Bool)isAttachmentTooLarge:(id)arg1;	// IMP=0x000000000010a85a

@end

