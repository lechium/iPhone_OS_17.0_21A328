//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowUICore/WFEmbeddableActionUserInterface.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface WFSendMessageActionUIKitUserInterface : WFEmbeddableActionUserInterface
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    NSArray *_files;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000005ca6b
@property(retain, nonatomic) NSArray *files; // @synthesize files=_files;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;	// IMP=0x000000000005c925
- (void)cancelPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000005c882
- (void)finishWithError:(id)arg1;	// IMP=0x000000000005c7ee
- (void)showWithRecipients:(id)arg1 content:(id)arg2 files:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000005c5e8
- (void)showWithRecipients:(id)arg1 content:(id)arg2 attachments:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000005c461

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *userInterfaceType;

@end

