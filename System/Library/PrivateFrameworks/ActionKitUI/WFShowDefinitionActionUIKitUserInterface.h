//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowUICore/WFEmbeddableActionUserInterface.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WFShowDefinitionActionUIKitUserInterface : WFEmbeddableActionUserInterface
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000544f7
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x0000000000054482
- (void)libraryControllerDidDismiss:(id)arg1;	// IMP=0x000000000005446e
- (void)cancelPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000543cb
- (void)finishWithError:(id)arg1;	// IMP=0x0000000000054339
- (void)showWithString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005418b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *userInterfaceType;

@end
