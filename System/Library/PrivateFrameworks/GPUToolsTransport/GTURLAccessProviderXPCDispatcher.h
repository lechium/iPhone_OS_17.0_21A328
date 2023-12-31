//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol GTURLAccessProvider;

__attribute__((visibility("hidden")))
@interface GTURLAccessProviderXPCDispatcher
{
    id <GTURLAccessProvider> _service;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000019356
- (void)urlForPath_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x000000000001918f
- (void)copyIdentifier_toDevice_completionHandler_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x0000000000018fc8
- (void)transferIdentifier_toDevice_completionHandler_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x0000000000018e36
- (void)makeURL_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x0000000000018ce2
- (void)securityScopedURLFromSandboxID_completionHandler_:(id)arg1 replyConnection:(id)arg2;	// IMP=0x0000000000018a94
- (id)initWithService:(id)arg1 properties:(id)arg2;	// IMP=0x00000000000189f4

@end

