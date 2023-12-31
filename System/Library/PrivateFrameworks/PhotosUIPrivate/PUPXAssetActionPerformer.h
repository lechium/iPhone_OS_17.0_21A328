//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUAssetActionPerformer.h"

@class NSString, PXAssetActionManager, PXAssetActionPerformer, UIViewController;
@protocol PXActionPerformerDelegate, PXMemoryAssetsActionFactory;

__attribute__((visibility("hidden")))
@interface PUPXAssetActionPerformer : PUAssetActionPerformer
{
    PXAssetActionPerformer *_underlyingActionPerformer;	// 8 = 0x8
    UIViewController *presentedViewController;	// 16 = 0x10
    id <PXActionPerformerDelegate> _forwardingDelegate;	// 24 = 0x18
    PXAssetActionManager *_underlyingActionManager;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000003a1685
@property(retain, nonatomic) PXAssetActionManager *underlyingActionManager; // @synthesize underlyingActionManager=_underlyingActionManager;
@property(readonly, nonatomic) __weak id <PXActionPerformerDelegate> forwardingDelegate; // @synthesize forwardingDelegate=_forwardingDelegate;
@property(retain, nonatomic) UIViewController *presentedViewController; // @synthesize presentedViewController;
- (id)undoManagerForActionPerformer:(id)arg1;	// IMP=0x00000000003a15c3
- (_Bool)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000003a147b
- (_Bool)actionPerformer:(id)arg1 presentViewController:(id)arg2;	// IMP=0x00000000003a1398
- (void)actionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2;	// IMP=0x00000000003a1242
- (void)performWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000003a1225
- (unsigned long long)state;	// IMP=0x00000000003a11df
- (id)initWithUnderlyingActionPerformer:(id)arg1;	// IMP=0x00000000003a0ea3
- (id)initWithActionType:(unsigned long long)arg1 assets:(id)arg2 orAssetsByAssetCollection:(id)arg3;	// IMP=0x00000000003a0e13

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <PXMemoryAssetsActionFactory> memoryAssetsActionFactory;
@property(readonly) Class superclass;

@end

