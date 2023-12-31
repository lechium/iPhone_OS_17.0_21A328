//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowUICore/WFEmbeddableActionUserInterface.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WFRecordAudioActionUIKitUserInterface : WFEmbeddableActionUserInterface
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000003ab47
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)cancelPresentationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000003aa82
- (void)finishWithFileRepresentation:(id)arg1 error:(id)arg2;	// IMP=0x000000000003a9c8
- (void)showWithOutputFormat:(long long)arg1 startImmediately:(_Bool)arg2 recordingDuration:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000003a8ae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *userInterfaceType;

@end

