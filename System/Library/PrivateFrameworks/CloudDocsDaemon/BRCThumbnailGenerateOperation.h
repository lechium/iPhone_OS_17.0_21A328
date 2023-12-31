//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_BRCOperation.h"

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface BRCThumbnailGenerateOperation : _BRCOperation
{
    NSURL *_url;	// 32 = 0x20
    NSURL *_targetURL;	// 40 = 0x28
    CDUnknownBlockType _saveThumbnailCompletionBlock;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000033180c
@property(copy, nonatomic) CDUnknownBlockType saveThumbnailCompletionBlock; // @synthesize saveThumbnailCompletionBlock=_saveThumbnailCompletionBlock;
@property(readonly, nonatomic) NSURL *targetURL; // @synthesize targetURL=_targetURL;
- (void)finishWithResult:(id)arg1 error:(id)arg2;	// IMP=0x000000000033171e
- (_Bool)shouldRetryForError:(id)arg1;	// IMP=0x0000000000331716
- (void)main;	// IMP=0x00000000003312c5
- (id)initWithDocumentAtURL:(id)arg1 targetURL:(id)arg2;	// IMP=0x0000000000331188

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

