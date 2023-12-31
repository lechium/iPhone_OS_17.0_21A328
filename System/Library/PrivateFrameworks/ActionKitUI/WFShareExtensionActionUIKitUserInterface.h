//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowUICore/WFEmbeddableActionUserInterface.h>

__attribute__((visibility("hidden")))
@interface WFShareExtensionActionUIKitUserInterface : WFEmbeddableActionUserInterface
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000059082
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)cancelPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000058fbd
- (void)finishWithContentCollection:(id)arg1 error:(id)arg2;	// IMP=0x0000000000058f03
- (id)inputContentItemClassesFromInputConfiguration:(id)arg1;	// IMP=0x0000000000058e9f
- (id)contentItemClassesFromInputConfiguration:(id)arg1;	// IMP=0x0000000000058e3b
- (void)addContentToShareController:(id)arg1 withInput:(id)arg2 inputConfiguration:(id)arg3 extensionUserInfo:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000058bea
- (void)performActionWithInput:(id)arg1 inputConfiguration:(id)arg2 socialServiceType:(id)arg3 extensionBundleIdentifier:(id)arg4 extensionUserInfo:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000058a8b

@end

